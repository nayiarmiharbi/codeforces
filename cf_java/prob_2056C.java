import java.util.*;

public class prob_2056C {
    public static void solve(Scanner sc) {
        int n = sc.nextInt();
        System.out.print(1 + " ");
        for (int i = 1; i < n-1; i++) {
            System.out.print(i + " ");
        }
        System.out.print(1);
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = 1;
        t = sc.nextInt();
        while (t-- > 0) {
            solve(sc);
        }
        sc.close();
    }
}