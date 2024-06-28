import java.util.Scanner;

class Even {
    int n;

    public boolean evenDigit(int n) {
        while (n != 0) {
            if ((n % 10) % 2 != 0) {
                return false;
            }
            n /= 10;
        }
        return true;
    }
}

public class Question15 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Even number = new Even();
        System.out.println("Enter an integer: ");
        number.n = scanner.nextInt();
        boolean ck = number.evenDigit(number.n);
        System.out.println("Check whether every digit of the said integer is even or not!\n" + ck);
        scanner.close();
    }
}