import java.util.Scanner;

class Car {
    String Color;
    String Brand_name;
    String Engine;
    String Mileage_hr;

    public void display() {
        System.out.println("Car feature: " + Color + " " + Brand_name + " " + Engine + " " + Mileage_hr);
    }

}

public class Lab2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Car[] cars = new Car[2];
        String color, brandName, engine, mileage;

        for (int i = 0; i < 2; i++) {
            cars[i] = new Car();
            System.out.println("Enter color:");
            color = sc.nextLine();
            cars[i].Color = color;
            System.out.println("Enter brand name:");
            brandName = sc.nextLine();
            cars[i].Brand_name = brandName;
            System.out.println("Enter engine type:");
            engine = sc.nextLine();
            cars[i].Engine = engine;
            System.out.println("Enter mileage per hour:");
            mileage = sc.nextLine();
            cars[i].Mileage_hr = mileage;
        }

        for (int i = 0; i < 2; i++) {
            cars[i].display();
        }

        System.out.println("Do you want to change the value of any objects? (yes/no)");
        String ans = sc.nextLine();
        if (ans.equals("yes")) {
            System.out.println("Enter the index of the car you want to update:");
            int index = sc.nextInt();
            sc.nextLine();

            System.out.println("Enter new color:");
            color = sc.nextLine();
            cars[index].Color = color;
            System.out.println("Enter new brand name:");
            brandName = sc.nextLine();
            cars[index].Brand_name = brandName;
            System.out.println("Enter new engine type:");
            engine = sc.nextLine();
            cars[index].Engine = engine;
            System.out.println("Enter new mileage per hour:");
            mileage = sc.nextLine();
            cars[index].Mileage_hr = mileage;

            System.out.println("Updated details of cars:");
            for (int i = 0; i < 2; i++) {
                cars[i].display();
            }
        }
        sc.close();
    }
}
