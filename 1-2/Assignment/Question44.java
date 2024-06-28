import java.util.Scanner;

public class Question44 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();
        
        int[] array = new int[size];
        
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < size; i++) {
            array[i] = scanner.nextInt();
        }

        int[] frequencies = new int[size];
        boolean[] visited = new boolean[size];

        for (int i = 0; i < size; i++) {
            if (!visited[i]) {
                int count = 1;
                for (int j = i + 1; j < size; j++) {
                    if (array[i] == array[j]) {
                        visited[j] = true;
                        count++;
                    }
                }
                frequencies[i] = count;
            }
        }

        System.out.println("Element Frequencies:");
        for (int i = 0; i < size; i++) {
            if (!visited[i]) {
                System.out.println("Element: " + array[i] + ", Frequency: " + frequencies[i]);
            }
        }

        scanner.close();
    }
}