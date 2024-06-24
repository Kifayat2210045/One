import java.util.Scanner;

public class Question03 {
    public static char middleCharacter(String str) {
        int len = str.length();
        return str.charAt(len / 2);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = scanner.nextLine();
        System.out.println("Middle character: " + middleCharacter(str));
        scanner.close();
    }
}
