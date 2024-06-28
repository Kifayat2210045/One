import java.util.Scanner;

public class Question16 {
    public static boolean vowels(String str) {
        int t = 0;
        for (char c : str.toCharArray()) {
            if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u'
                    || c == 'U') {
                t++;
            }
        }
        if (t == str.length()) {
            return true;
        } else
            return false;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a word:");
        String words = scan.nextLine();
        System.out.println("Answer: " + vowels(words));
        scan.close();
    }
}
