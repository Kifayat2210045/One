import java.util.Scanner;

public class Question35 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a positive integer: ");
        int num = scanner.nextInt();

        if (num < 1) {
            System.out.println("Please enter a positive integer.");
        } else {
            System.out.println("The sum of all numbers from 1 to " + num + " is " + sum(num));
        }
        scanner.close();
    }

    public static int sum(int n) {
        if (n == 1) {
            return 1;
        } else {
            return n + sum(n - 1);
        }
    }
}