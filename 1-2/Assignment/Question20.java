import java.util.Scanner;

public class Question20 {
    public static String weekday(int number) {
        String[] days = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
        return number >= 1 && number <= 7 ? days[number - 1] : "Invalid number";
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number between 1 and 7: ");
        int number = scanner.nextInt();
        System.out.println("The weekday is " + weekday(number));
        scanner.close();
    }
}