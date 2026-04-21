import java.util.Scanner;

public class Pyramid {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int n = sc.nextInt();

        // method 1;
        for (int row = 0; row < n; row++) {
            for (int space = 1; space < n - row; space++) {
                System.out.print(" ");
            }

            for (int print = 0; print < 2 * row + 1; print++) {
                System.out.print("*");
            }

            // the below loop is not needed
            for (int space = 1; space < n - row; space++) {
                System.out.print(" ");
            }
            System.out.println();
        }

        // method 2;
        for (int row = 1; row <= n; row++) {
            // 1. Print leading spaces (decreases as rows go down)
            for (int space = 1; space <= n - row; space++) {
                System.out.print(" ");
            }

            // 2. Print stars (increases: 1, 3, 5...)
            for (int star = 1; star <= (2 * row - 1); star++) {
                System.out.print("*");
            }

            // Not leaving spaces after printing stars

            System.out.println();
        }

        // method 3;
        for (int row = 1; row <= n; row++) {
            // 1. Print leading spaces (one space per row offset)
            for (int space = 1; space <= n - row; space++) {
                System.out.print(" ");
            }

            // 2. Print star + space (total stars = row count)
            for (int star = 1; star <= row; star++) {
                System.out.print("* ");
            }

            System.out.println();
        }

        sc.close();
    }
}