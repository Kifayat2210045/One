import java.util.Scanner;

public class Question39 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();

        int[] array = new int[n];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }

        System.out.println("The maximum element in the array is " + findMax(array, n - 1));
        scanner.close();
    }

    public static int findMax(int[] array, int n) {
        if (n == 0) {
            return array[0];
        }
        return Math.max(array[n], findMax(array, n - 1));
    }
}