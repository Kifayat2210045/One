import java.util.Scanner;

public class Question11 {
    public static double triangleArea(double a, double b, double c) {
        double s = (a + b + c) / 2;
        return Math.sqrt(s * (s - a) * (s - b) * (s - c));
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Input Side-1: ");
        double a = scanner.nextDouble();
        System.out.print("Input Side-2: ");
        double b = scanner.nextDouble();
        System.out.print("Input Side-3: ");
        double c = scanner.nextDouble();
        System.out.println("Area of the triangle: " + triangleArea(a, b, c));
        scanner.close();
    }
}
