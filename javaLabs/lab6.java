import java.util.*;

public class lab6 {

    static Map<Character, List<String>> dic = new HashMap<>();
    public static void main(String[] args) {
        String[] allwords= {
                "Amoura Watson",
                "Greyson Montes",
                "Roselyn Shepherd",
                "Ronald Chung",
                "Rivka Myers",
                "Adam James",
                "Quinn Warner",
                "Jaxton Noble",
                "Hunter Melendez",
                "Nikolas Byrd",
                "Giselle Allen",
                "Carter Curtis",
                "Alexis Duarte",
                "Abdullah Sheppard",
                "Veda Wells",
                "Max Harvey",
                "Nicole Burke",
                "Jax Kent",
                "Jazmine Harris",
                "Samuel Maynard"

        };

        int start = 97;
        for (int i = start; i < start + 26; i++) {
            dic.put((char)i , new ArrayList<>());
        }
        for (String word : allwords) {
            dic.merge(word.charAt(0), new ArrayList<>() {{
                add(word);
            }}, (strings, strings2) -> new ArrayList<>(){{addAll(strings);addAll(strings2);sort(String::compareTo);}});
        }
        System.out.println(dic);
    }
    
    void printAllWordsLetter(char c){
        System.out.println(dic.get(c));
    }
}
