
import java.util.Scanner;

public class ComplexJavaExample {

    // Function to calculate the sum of an array
    public static int calculateSum(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }

    // Function to calculate the average of an array
    public static double calculateAverage(int[] arr) {
        int sum = calculateSum(arr);
        return sum / (double) arr.length; // Ensure floating-point division
    }

    // Function to find the maximum value in an array
    public static int findMaximum(int[] arr) {
        int max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Asking the user for the number of elements in the array
        System.out.print("Enter the number of elements you want to input: ");
        int n = scanner.nextInt();

        // Create an array to store the numbers
        int[] numbers = new int[n];

        // Asking the user to input the elements
        System.out.println("Enter " + n + " numbers:");

        for (int i = 0; i < n; i++) {
            numbers[i] = scanner.nextInt();
        }

        // Calculate sum, average, and maximum
        int sum = calculateSum(numbers);
        double average = calculateAverage(numbers);
        int max = findMaximum(numbers);

        // Output the results
        System.out.println("\nResults:");
        System.out.println("Sum: " + sum);
        System.out.println("Average: " + average);
        System.out.println("Maximum value: " + max);

        // Close the scanner
        scanner.close();
    }
}
