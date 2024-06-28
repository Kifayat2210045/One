import java.util.Scanner;

class sum
{
    int n;
    public void sumOfDigits(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        System.out.println("Sum of digits: " + sum);
    }
}

public class Question06 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        sum number = new sum();
        System.out.print("Enter an integer: ");
        number.n = scanner.nextInt();
        number.sumOfDigits(number.n);
        scanner.close();
    }
}
