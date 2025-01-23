import javax.swing.*;
import java.awt.*;
import java.util.*;
import java.util.List;

import static java.lang.Thread.sleep;

public class lab7 {


    static class DateFrame extends JFrame implements Runnable{
        Thread th;
        JLabel timeLabel = new JLabel();
        Date date= new Date();
        DateFrame(){
            this.setTitle("Date and Time Frame Application");
            timeLabel.setHorizontalAlignment(JLabel.CENTER);
            timeLabel.setText(date.toString());
            this.add(timeLabel, BorderLayout.CENTER);
            th = new Thread(this);
            th.start();
        }

        public static void main(String[] args) {
            DateFrame app = new DateFrame();

            app.setBounds(50 ,50 , 600 , 400);
            app.setVisible(true);
     
   }


        @Override
        public void run() {
            while (true){
                date = new Date();
                timeLabel.setText(date.toString());
                try {
                    sleep(1000);
                } catch (Exception e) {}
            }
        }
    }

    static class TextJFrame extends JFrame implements Runnable{
        Thread th;
        JLabel timeLabel = new JLabel();
        int x =0, y = 150;
        TextJFrame(){
            this.setTitle("Date and Time Frame Application");
            this.setLayout(null);
            timeLabel.setHorizontalAlignment(JLabel.CENTER);
            timeLabel.setText("Java World");
            timeLabel.setBounds(x, y, 100, 30);
            this.add(timeLabel, BorderLayout.CENTER);
            this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            th = new Thread(this);
            th.start();
        }

        public static void main(String[] args) {
            TextJFrame app = new TextJFrame();
            app.setBounds(50 ,50 , 600 , 400);
            app.setVisible(true);
        }


        @Override
        public void run() {
            while (true){
                x += 10;
                if (x > this.getWidth()) {
                    x = -timeLabel.getWidth();
                }
                timeLabel.setBounds(x, y, 100, 30);
                try {
                    sleep(50);
                } catch (InterruptedException e) {
                    throw new RuntimeException(e);
                }
            }
        }
    }

    static class SoccerJFrame extends JFrame implements Runnable{
        Thread th;
        JLabel timeLabel = new JLabel(new ImageIcon("C:\\Users\\moata\\Downloads\\example_jet\\src\\main\\java\\org\\example\\soccer_ball.jpg"));
        int x =0, y = 150;
        int increaseFactor_x = 10 , increaseFactor_y = 10;
        SoccerJFrame(){
            this.setTitle("Date and Time Frame Application");
            this.setLayout(null);
            timeLabel.setHorizontalAlignment(JLabel.CENTER);
            timeLabel.setBounds(x, y, 100, 100);
            this.add(timeLabel, BorderLayout.CENTER);
            this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            th = new Thread(this);
            th.start();
        }

        public static void main(String[] args) {
            SoccerJFrame app = new SoccerJFrame();
            app.setBounds(50 ,50 , 600 , 400);
            app.setVisible(true);
        }


        @Override
        public void run() {
            while (true){
                x += increaseFactor_x;
                if (x > this.getWidth() -10 || x < 0) {
                    increaseFactor_x = -increaseFactor_x;
                }
                y += increaseFactor_y;
                if (y > this.getHeight() - 10 || y < 0) {
                    increaseFactor_y = -increaseFactor_y;
                }
                timeLabel.setBounds(x, y, 100, 100);
                try {
                    sleep(50);
                } catch (InterruptedException e) {
                    throw new RuntimeException(e);
                }
            }
        }
    }


    class WorldContries{

        static class Country{
            private String code;
            private String name;
            private String continent;
            private double surfaceArea;
            private int population;
            private double gnp;
            private int capital;
            private List<City> cities;

            public Country(String code, String name, String continent, double surfaceArea, int population, double gnp, int capital, List<City> cities) {
                this.code = code;
                this.name = name;
                this.continent = continent;
                this.surfaceArea = surfaceArea;
                this.population = population;
                this.gnp = gnp;
                this.capital = capital;
                this.cities = cities;
            }

            public String getCode() {
                return code;
            }

            public void setCode(String code) {
                this.code = code;
            }

            public String getName() {
                return name;
            }

            public void setName(String name) {
                this.name = name;
            }

            public String getContinent() {
                return continent;
            }

            public void setContinent(String continent) {
                this.continent = continent;
            }

            public double getSurfaceArea() {
                return surfaceArea;
            }

            public void setSurfaceArea(double surfaceArea) {
                this.surfaceArea = surfaceArea;
            }

            public int getPopulation() {
                return population;
            }

            public void setPopulation(int population) {
                this.population = population;
            }

            public double getGnp() {
                return gnp;
            }

            public void setGnp(double gnp) {
                this.gnp = gnp;
            }

            public int getCapital() {
                return capital;
            }

            public void setCapital(int capital) {
                this.capital = capital;
            }

            public List<City> getCities() {
                return cities;
            }

            public void setCities(List<City> cities) {
                this.cities = cities;
            }
        }

        static class City{
            private int id;
            private String name;
            private int population;
            private String countryCode;

            public City(int id, String name, int population, String countryCode) {
                this.id = id;
                this.name = name;
                this.population = population;
                this.countryCode = countryCode;
            }

            public int getId() {
                return id;
            }

            public void setId(int id) {
                this.id = id;
            }

            public String getName() {
                return name;
            }

            public void setName(String name) {
                this.name = name;
            }

            public int getPopulation() {
                return population;
            }

            public void setPopulation(int population) {
                this.population = population;
            }

            public String getCountryCode() {
                return countryCode;
            }

            public void setCountryCode(String countryCode) {
                this.countryCode = countryCode;
            }
        }

        private Map<Country, City> findHighestPopCity(Country country){
            var city= country.cities.stream().max(Comparator.comparing(City::getPopulation)).get();
            return new HashMap<Country, City>(){{put(country, city);}};
        }
        private Map<Country, Integer> findHighestPopCapitalCity(List<Country> countries){
            var country= countries.stream().max((o1, o2) -> {
                var cap1 = o1.cities.stream().filter(city -> city.id == o1.capital).findFirst().get();
                var cap2 = o2.cities.stream().filter(city -> city.id == o2.capital).findFirst().get();
                return Integer.compare(cap1.getPopulation(), cap2.getPopulation());
            }).get();
            return new HashMap<Country, Integer>(){{put(country, country.capital);}};
        }

        public static void main(String[] args) {

        }
    }

}
