import java.util.Scanner;

public class Question12 {

    public static int[][] twinPrimes(int n) {
        boolean[] isPrime = new boolean[n];
        for (int i = 0; i < n; i++) {
            isPrime[i] = true;
        }

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n - 2; i++) {
            if (isPrime[i] && isPrime[i + 2]) {
                count++;
            }
        }

        int[][] result = new int[count][2];
        int index = 0;
        for (int i = 2; i < n - 2; i++) {
            if (isPrime[i] && isPrime[i + 2]) {
                result[index][0] = i;
                result[index][1] = i + 2;
                index++;
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the maximum number to find twin primes: ");
        int n = scanner.nextInt();
        int[][] twins = twinPrimes(n);
        System.out.println("Twin primes:");
        for (int i = 0; i < twins.length; i++) {
            System.out.println(twins[i][0] + ", " + twins[i][1]);
        }
        scanner.close();
    }
}
