public class Student {
    String name;
    int age;

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student();
        s1.setName("Sabbir");
        s1.setAge(21);
        s2.setName("Hamid›");
        s2.setAge(20);
        Print printer = new Print();
        printer.Study(s1);
    }
}

class Print {
    public void Study(Student student) {
        System.out.println("The student named " + student.getName() + " is studying.");
    }
}
