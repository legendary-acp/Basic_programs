package fibonacci;

public class Fibonacci {

    public static void main(String args[]) {
        int number1 = 0; 
        int number2 = 1; 
        int number3;
        int timesToLoop = 10;

        for (int i = 2; i < timesToLoop; i++) {
            number3 = number1 + number2;
            System.out.println(number3);
            number1 = number2;
            number2 = number3;
        }
    }
}
