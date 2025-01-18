import java.util.*;

public class prob_2056A {
    public static void solve(Scanner sc) {
        int n = sc.nextInt();
        int m = sc.nextInt();
        int sum = 0;
        for(int i = 0; i < n; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            if (i > 0) {
                sum = sum + (x + y);
            }
        }
        int result = 4*m + 2*sum;
        System.out.println(result);
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