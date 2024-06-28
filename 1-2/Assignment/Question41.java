import java.util.Scanner;

public class Question41 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter temperature in Fahrenheit: ");
        double fahrenheit = scanner.nextDouble();

        double celsius = converter(fahrenheit);

        System.out.printf("Temperature in Celsius: %.2f%n", celsius);

        scanner.close();
    }

    public static double converter(double fahrenheit) {
        return (fahrenheit - 32) * 5 / 9;
    }
}