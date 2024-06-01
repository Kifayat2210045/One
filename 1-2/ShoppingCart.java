import java.util.Scanner;

class CartItem {
    private String name;
    private String color;
    private double price;
    private int quantity;

    // Setter methods
    public void setName(String name) {
        this.name = name;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }

    // Method to get details of the item
    public void getDetails() {
        System.out.println("Item Name: " + this.name);
        System.out.println("Item Color: " + this.color);
        System.out.println("Item Price: $" + this.price);
        System.out.println("Item Quantity: " + this.quantity);
    }
}

public class ShoppingCart {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        CartItem[] items = new CartItem[3];

        // Taking input for 3 items
        for (int i = 0; i < 3; i++) {
            items[i] = new CartItem();
            System.out.println("Enter details for item " + (i + 1) + ":");
            System.out.print("Name: ");
            items[i].setName(scanner.nextLine());
            System.out.print("Color: ");
            items[i].setColor(scanner.nextLine());
            System.out.print("Price: ");
            items[i].setPrice(scanner.nextDouble());
            System.out.print("Quantity: ");
            items[i].setQuantity(scanner.nextInt());
            scanner.nextLine(); // Consume newline
        }

        // Getting details of a specific item
        System.out.print("Enter the item number (1-3) to view details: ");
        int itemNumber = scanner.nextInt();

        if (itemNumber >= 1 && itemNumber <= 3) {
            items[itemNumber - 1].getDetails();
        } else {
            System.out.println("Invalid item number.");
        }

        scanner.close();
    }
}