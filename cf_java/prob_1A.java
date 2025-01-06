import java.util.Scanner;

public class prob_1A {
    public static void main(String[] args) {
        Scanner scanner = new java.util.Scanner(System.in);
        int t = 1;
        while (t-- > 0) {
            long n = scanner.nextInt();
            long m = scanner.nextInt();
            long a = scanner.nextInt();
            long result = ((n + a - 1) / a) * ((m + a - 1) / a);
            System.out.println(result);
        }
        scanner.close();
    }
}
