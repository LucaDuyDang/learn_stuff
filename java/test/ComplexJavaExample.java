
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
        System.out.println("\nResults");
        System.out.println("Sum: " + sum);
        System.out.println("Average: " + average);
        System.out.println("Maximum value: " + max);

        // Close the scanner
        scanner.close();
    }
}

/* 
*Explanation:

    *Functions:
*calculateSum(): This function loops through the array and adds all the elements together to get the sum.
*calculateAverage(): This function uses calculateSum() to get the sum of the array and then divides it by the number of elements to get the average.
*findMaximum(): This function loops through the array to find the maximum value.

    *User Input:
*The program first asks the user how many numbers they want to input and creates an array of that size.
*The user is then prompted to input the numbers, which are stored in the array.

    *Output:
*The program outputs the sum, average, and maximum value of the numbers the user entered.

    *Typecasting:
*In the average calculation, typecasting is used to ensure the division results in a floating-point number (double).

*/
