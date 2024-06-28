import java.util.Scanner;

class password {
    String password;

    // length check
    public boolean lengthcheck(String s) {
        if (s.length() >= 8) {
            return true;
        } else
            return false;
    }

    // letter and digit check
    public boolean alphanumeric(String s) {
        for (char c : s.toCharArray()) {
            if (!letterOrDigit(c)) {
                return false;
            }
        }
        return true;
    }

    public boolean letterOrDigit(char c) {
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
    }

    // atleat two digit check
    public boolean digitCheck(String s) {
        int count = 0;
        for (char c : s.toCharArray()) {
            if (c >= '0' && c <= '9') {
                count++;
            }
        }
        if (count > 1) {
            return true;
        } else
            return false;
    }
}

public class Question10 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        password pass = new password();
        System.out.println("A password must have at least eight characters.");
        System.out.println("A password consists of only letters and digits.");
        System.out.println("A password must contain at least two digits.");
        System.out.println("Input a password (You are agreeing to the above Terms and Conditions.):");
        pass.password = scan.nextLine();
        if (pass.lengthcheck(pass.password) && pass.alphanumeric(pass.password) && pass.digitCheck(pass.password)) {
            System.out.println("Password is valid:" + pass.password);
        } else
            System.out.println("Password is invalid:" + pass.password);
        scan.close();
    }
}
