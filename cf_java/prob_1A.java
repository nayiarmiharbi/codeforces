import java.util.Scanner;

public class prob_1A {
    public static void main(String[] args) {
        Scanner scanner = new java.util.Scanner(System.in);
        int t = 1;
        while (t-- > 0) {
            int n = scanner.nextInt();
            int m = scanner.nextInt();
            int a = scanner.nextInt();
            int result = ((n + a - 1) / a) * ((m + a - 1) / a);
            System.out.println(result);
        }
    }
}
