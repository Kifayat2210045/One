import java.util.Scanner;

public class Question19 {
    public static String checkNumber(float number) {
        if (number == 0) return "zero";
        String result = number > 0 ? "positive" : "negative";
        if (Math.abs(number) < 1) result += " small";
        if (Math.abs(number) > 1000000) result += " large";
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        float number = scanner.nextFloat();
        System.out.println("The number is " + checkNumber(number));
        scanner.close();
    }
}