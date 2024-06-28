import java.util.Scanner;

public class Question21 {
    public static boolean decimal(float num1, float num2) {
        return Math.abs(num1 - num2) < 0.001;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter two floating-point numbers: ");
        float num1 = scanner.nextFloat();
        float num2 = scanner.nextFloat();
        System.out.println("Are the numbers the same up to three decimal places: " + decimal(num1, num2));
        scanner.close();
    }
}