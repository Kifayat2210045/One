import java.util.Scanner;
class MiddleCharacter{
    String str;
    int firstindex,lastindex;
    public void printChar(String str)
    {
        for(int i = firstindex; i < lastindex-1; i++)
        {
            System.out.print(str.charAt(i) + " ");
        }
    }
}
public class Question08 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    MiddleCharacter word = new MiddleCharacter();

    System.out.println("Enter a word:");
    word.str = scanner.nextLine();
    System.out.println("Enter the first and last index:");
    word.firstindex = scanner.nextInt();
    word.lastindex = scanner.nextInt();
    word.printChar(word.str);
    scanner.close();
  }
    
    
}