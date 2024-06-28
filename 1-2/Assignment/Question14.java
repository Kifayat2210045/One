import java.util.Scanner;

class consecutive {
    int num1, num2, num3;

    public boolean consecutiveNumbers(int n1, int n2, int n3) {
        if (n1 + 1 == n2 && n1 + 2 == n3) {
            return true;
        } else
            return false;
    }
}

public class Question14 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        consecutive nums = new consecutive();
        System.out.println("Enter three numbers:");
        nums.num1 = scan.nextInt();
        nums.num2 = scan.nextInt();
        nums.num3 = scan.nextInt();
        boolean check = nums.consecutiveNumbers(nums.num1, nums.num2, nums.num3);
        if (check) {
            System.out.println("True");
        } else
            System.out.println("False");
        scan.close();

    }
}
