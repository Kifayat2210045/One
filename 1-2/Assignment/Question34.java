import java.util.Scanner;

public class Question34 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a positive integer: ");
        int num = scanner.nextInt();

        if (num < 0) {
            System.out.println("Please enter a positive integer.");
        } else {
            System.out.println("The factorial of " + num + " is " + factorial(num));
        }
        scanner.close();
    }

    public static int factorial(int n) {
        if (n == 0) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
    
}