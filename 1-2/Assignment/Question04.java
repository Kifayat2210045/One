import java.util.Scanner;

class Vowels{
    String str;
    int count = 0;
    public void countVowels(String str)
    {
        for(int i = 0; i < str.length(); i++)
        {
            if (str.charAt(i) == 'a' || str.charAt(i) == 'A' || str.charAt(i) == 'e' || 
                str.charAt(i) == 'E' || str.charAt(i) == 'i' || str.charAt(i) == 'I' || 
                str.charAt(i) == 'o' || str.charAt(i) == 'O' || str.charAt(i) == 'u' || 
                str.charAt(i) == 'U')
            {
                count++;    
            }
        }
        System.out.println("Number of vowels: " + count);
    }
}

public class Question04 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Vowels string = new Vowels();
        System.out.print("Enter a string: ");
        string.str = scanner.nextLine();
        string.countVowels(string.str);
        scanner.close();
    }
}
