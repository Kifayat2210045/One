import java.util.Scanner;

public class Question17 {
    public static String check(int number) {
        return number > 0 ? "positive" : "negative";
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int number = scanner.nextInt();
        System.out.println("The number is " + check(number));
        scanner.close();
    }
}