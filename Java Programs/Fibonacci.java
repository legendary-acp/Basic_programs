/*
This program prints the Fibonacci serie. 
Adding number1 and number2, printing it, and setting the variables for next iteration.
Change time to loop for as many iterations you want. 
0 + 1 = 1 
1 + 1 = 2 
1 + 2 = 3 
2 + 3 = 5 etc.
*/

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
