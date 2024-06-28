import java.util.Scanner;

public class Question18 {
    public static void solveQuadratic(double a, double b, double c) {
        double discriminant = b * b - 4 * a * c;
        if (discriminant > 0) {
            double r1 = (-b + Math.sqrt(discriminant)) / (2 * a);
            double r2 = (-b - Math.sqrt(discriminant)) / (2 * a);
            System.out.println("The roots are " + r1 + " and " + r2); 
        } else if (discriminant == 0) {
            double r1 = -b / (2 * a);
            System.out.println("The root is " + r1); 
        } else {
            System.out.println("The equation has no real roots"); 
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter coefficients a, b and c: ");
        double a = scanner.nextDouble();
        double b = scanner.nextDouble();
        double c = scanner.nextDouble();
        solveQuadratic(a, b, c);
        scanner.close();
    }
}