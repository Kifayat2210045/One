import java.util.Scanner;
//instance reference variable

/*class Pupil {
    int roll;
    String name;
    float cg;


    Pupil(int roll, String name, float cg) {
        this.roll = roll;
        this.name = name;
        this.cg = cg;
    }

    public void display() {
        System.out.println("Student info: " + name + " " + roll + " " + cg);
    }
}

public class This {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter student name:");
        String name = scan.nextLine();
        System.out.println("Enter roll:");
        int roll = scan.nextInt();
        System.out.println("Enter cg:");
        float cg = scan.nextFloat();


        Pupil s1 = new Pupil(roll, name, cg);
        s1.display();
    }
}*/
//current class method

/*class Food{
    void menu1(){
        System.out.println("Kacchi");
    }
    void menu2(){
        System.out.println("Soup");
        this.menu1();
    }
}
class This{
    public static void main(String args[]){
        Food a=new Food();
        a.menu2();
    }
}*/
//current class constructor
/*class A{
    A(){
        System.out.println("hello a");
    }
    A(int n){
        this();
        System.out.println(n);
    }
}
class This{
    public static void main(String args[]){
        A a=new A(10);
    }
}*/
//argument pass
/*public class This {
    public int value;

    public This(int value) {
        this.value = value;
    }

    public void printValue() {
        System.out.println("Value: " + value);
    }

    public void callMethod() {
        anotherMethod(this);
    }

    public void anotherMethod(This obj) {
        obj.printValue();
    }

    public static void main(String[] args) {
        This myObject = new This(10);
        myObject.callMethod();
    }
}*/


