import java.util.Scanner;

class Avg {
    int num1, num2, num3;

    public float calc(int num1, int num2, int num3) {
        float avg;
        avg = (num1 + num2 + num3) / (float) 3;
        return avg;
    }
}

public class Question02 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        Avg average = new Avg();
        System.out.println("Enter the first number:");
        average.num1 = scn.nextInt();
        System.out.println("Enter the second number:");
        average.num2 = scn.nextInt();
        System.out.println("Enter the third number:");
        average.num3 = scn.nextInt();
        float result = average.calc(average.num1, average.num2, average.num3);

        System.out.println("The average of the three number is: " + result);

        scn.close();
    }
}
