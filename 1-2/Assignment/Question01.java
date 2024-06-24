import java.util.Scanner;

public class Question01 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num1, num2, num3;
        System.out.println("Enter the first number:");
        num1 = scanner.nextInt();

        System.out.println("Enter the second number:");
        num2 = scanner.nextInt();

        System.out.println("Enter the third number:");
        num3 = scanner.nextInt();

        int smallest = findSmallest(num1, num2, num3);
        System.out.println("The smallest number is: " + smallest);

        scanner.close();
    }

    public static int findSmallest(int num1, int num2, int num3) {
        int smallest = num1; 

        if (num2 < smallest) {
            smallest = num2; 
        }

        if (num3 < smallest) {
            smallest = num3; 
        }

        return smallest;
    }
}
