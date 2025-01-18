import java.util.*;

public class prob_2057C {
    public static void solve(Scanner sc) {
        int l = sc.nextInt();
        int r = sc.nextInt();
        int m = 31 - Integer.numberOfLeadingZeros(l ^ r);
        int ans = (1 << m) | l & ~((1 << m)-1);
        int a = ans -1;
        int b = ans;
        int c = ans+1 <= r ? ans+1 : ans-2;
        System.out.println(a + " " + b + " " + c);
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