import java.util.Scanner;

public class Question22 {
    public static void cubes(int n) {
        for (int i = 1; i <= n; i++) {
            System.out.println("Number is: " + i + " and cube of " + i + " is: " + (i * i * i));
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int n = scanner.nextInt();
        cubes(n);
        scanner.close();
    }
}