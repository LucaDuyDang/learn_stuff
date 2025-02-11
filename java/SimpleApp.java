
import java.util.Scanner;

public class SimpleApp {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Welcome to the Simple Java App!");

        // Input from user
        System.out.print("Enter your name: ");
        String name = scanner.nextLine(); // string name

        System.out.print("Enter your age: ");
        int age = scanner.nextInt(); // integer

        System.out.print("Enter your GPA: ");
        double gpa = scanner.nextDouble(); // integer also but with decimal value

        // Displaying the information
        System.out.println("\n--- User Information ---");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("GPA: " + gpa);

        // Simple logic to check age
        if (age >= 18) {
            System.out.println("You are an adult and a");
            if (gpa >= 3.5) {
                System.out.println("Excellent Student");
            }
            if (gpa >= 3.0) {
                System.out.println("Good Student");
            }
            if (gpa <= 2.5) {
                System.out.println("Great Student");
            } else {
                System.out.println("Not A Performer Student");
            }
        } else {
            System.out.println("You are a minor and normal student");
            // Close the scanner
            scanner.close();
        }
    }
}
