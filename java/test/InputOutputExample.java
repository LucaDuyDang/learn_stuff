
import java.util.Scanner;

public class InputOutputExample {

    public static void main(String[] args) {
        // Create a Scanner object for input
        Scanner scanner = new Scanner(System.in);

        // Asking user for input
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();  // Read user input for name

        System.out.print("Enter your age: ");
        int age = scanner.nextInt();  // Read user input for age

        // Output the input values
        System.out.println("Hello, " + name + "!");
        System.out.println("You are " + age + " years old.");

        // Close the scanner to prevent resource leak
        scanner.close();
    }
}

// Explanation:
// import java.util.Scanner;
// This imports the Scanner class, which is part of the Java standard library. It allows you to take input from the user.
// Scanner scanner = new Scanner(System.in);
// Creates a Scanner object that reads from the console (keyboard).
// nextLine() and nextInt()
// nextLine() is used to read a full line of text (like the user's name).
// nextInt() is used to read an integer (like the user's age).
// Output using System.out.println()
// The program prints the user's name and age to the console.
// scanner.close();
// This closes the Scanner object, which is a good practice to release resources when done.
