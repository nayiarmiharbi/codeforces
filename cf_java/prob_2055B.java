import java.util.*;

public class prob_2055B {
    public static void solve(Scanner sc) {
        int n = sc.nextInt();
        int [] a = new int[n];
        for(int i = 0; i < n; i++)
        {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            int b = sc.nextInt();
            a[i] = a[i] - b;
        }
        Arrays.sort(a);
        if (a[0]+a[1] >= 0) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
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