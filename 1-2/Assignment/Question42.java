import java.util.Scanner;

public class Question42 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of minutes: ");
        int minutes = scanner.nextInt();

        int[] result = converter(minutes);

        System.out.printf("%d minutes is approximately %d years and %d days.%n", minutes, result[0], result[1]);

        scanner.close();
    }

    public static int[] converter(int minutes) {
        int minutesInYear = 60 * 24 * 365;
        int years = minutes / minutesInYear;
        int remainingMinutes = minutes % minutesInYear;
        int days = remainingMinutes / (60 * 24);

        return new int[]{years, days};
    }
}