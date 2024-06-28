import java.util.Scanner;

class countDigit
{
    int n;

    public int count(int number)
    {
        int count = 0;
        while (number != 0) {
            if (number % 2 == 0) {
                count++;
            }
            number /= 10;
        }
        return count;
    }
}

public class Question13 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        countDigit number = new countDigit();
        number.n = scanner.nextInt();
        int total = number.count(number.n);
        System.out.println("Number of '2' digits: " + total);
        scanner.close();
    }
}
