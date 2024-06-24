import java.util.Scanner;

class Words {
    String str;
    
    public void countVowels(String str) {
        int count = 1;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == ' ') {
                count++;
            }
        }
        System.out.println("Number of words: " + count);
    }

}

public class Question05 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Words string = new Words();
        System.out.print("Enter a string: ");
        string.str = scanner.nextLine();
        string.countVowels(string.str);
        scanner.close();
    }
}
