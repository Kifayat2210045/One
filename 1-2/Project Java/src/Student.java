import java.util.Scanner;

class Stu {
    String varsity;
    String Dept;
    int roll;
    String name;
    int DoB;
    String currentSemester;

    public void display() {
        System.out.println("Student info: " + varsity + " " + Dept + " " + roll + " " + name + " " + DoB + " " + currentSemester);
    }

    public void age() {
        int age = 2024 - DoB;
        System.out.println("Age: " + age+ "year");
    }
}

public class Student {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Stu[] students = new Stu[2];
        String varsity, dept, name, currentSemester;
        int roll, dob;

        for (int i = 0; i < 2; i++) {
            students[i] = new Stu();
            System.out.println("Enter Name:");
            name = scan.nextLine();
            System.out.println("Enter varsity:");
            varsity = scan.nextLine();
            System.out.println("Enter Dept:");
            dept = scan.nextLine();
            System.out.println("Enter roll:");
            roll = scan.nextInt();
            scan.nextLine();
            System.out.println("Enter DoB:");
            dob = scan.nextInt();
            scan.nextLine();
            System.out.println("Enter Current Semester:");
            currentSemester = scan.nextLine();

            students[i].name = name;
            students[i].varsity = varsity;
            students[i].Dept = dept;
            students[i].roll = roll;
            students[i].DoB = dob;
            students[i].currentSemester = currentSemester;
        }

        for (int i = 0; i < 2; i++) {
            students[i].display();
            students[i].age();
        }

        scan.close();
    }
}
