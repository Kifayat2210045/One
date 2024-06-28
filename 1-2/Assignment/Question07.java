import java.util.Scanner;

public class Question07 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Input the investment amount: ");
        double investmentAmount = scanner.nextDouble();

        System.out.print("Input the rate of interest: ");
        double annualInterestRate = scanner.nextDouble();

        System.out.print("Input number of years: ");
        int years = scanner.nextInt();

        System.out.println("Years\tFuture Value");

        for (int i = 1; i <= years; i++) {
            double futureValue = calculateFutureValue(investmentAmount, annualInterestRate, i);
            System.out.printf("%d\t%.2f\n", i, futureValue);
        }
        scanner.close();
    }

    public static double calculateFutureValue(double investmentAmount, double annualInterestRate, int years) {
        int months = years * 12;
        double monthlyInterestRate = annualInterestRate / 100 / 12;
        return investmentAmount * Math.pow(1 + monthlyInterestRate, months);
    }
}