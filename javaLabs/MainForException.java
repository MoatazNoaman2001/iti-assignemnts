package org.example;

public class MainForException {

    public static void main(String[] args) {
        Class2 class2 = new Class2();
        class2.computeEven();
    }


    class ComputeException extends  Exception{
        public ComputeException() {
            super("you have some computation error");
        }
    }

    static class Class1 {

        void computeEven() throws ComputeException{
            System.out.println("try printing even");
        }

        void computeOdd() throws  ComputeException{
            System.out.println("try printing odd");
        }

        void computePrime() throws  ComputeException{
            System.out.println("try printing prime");
        }
    }


    static class Class2 {
        private Class1 class1;

        public Class2() {
            this.class1= new Class1();
        }

        void computeEven() {
            try {
                class1.computeEven();
            } catch (ComputeException e) {
                throw new RuntimeException(e);
            }
        }

        void computeOdd(){
            try {
                class1.computeOdd();
            } catch (ComputeException e) {
                throw new RuntimeException(e);
            }
        }

        void computePrime(){
            try {
                class1.computePrime();
            } catch (ComputeException e) {
                throw new RuntimeException(e);
            }
        }
    }
}


