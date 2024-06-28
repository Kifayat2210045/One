import java.util.Scanner;

public class Question40 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter the size of array:");
        int n = scanner.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter elements:");
        for(int i = 0; i < n; i++)
        {
            arr[i] = scanner.nextInt();
        }
        int product = sum(arr,0);
        System.out.println("Product of array element: " + product);
        scanner.close();
    }

    public static int sum(int arr[],int index)
    {
        if (index >= arr.length) {
            return 1;
        }
        return arr[index]*sum(arr, index+1);
    }


    
}