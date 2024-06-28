import java.util.Scanner;

public class Question26 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Number of rows:");
        int rows = scan.nextInt();

        for (int i = 1; i <= rows; i++) {

            for (int j = rows; j > i; j--) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i; k++) {
                System.out.print(i + " ");
            }

            System.out.println();
        }
        scan.close();
    }
}
