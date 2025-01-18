import java.util.*;

public class prob_2055A {
    public static void solve(Scanner sc) {
        int n = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        String result = findWinner(n, a, b);
        System.out.println(result);
    }
    public static String findWinner(int n, int a, int b) {
        int distance = Math.abs(b - a);
        if ((distance - 1) % 2 == 0) {
            return "NO"; 
        } else {
            return "YES"; 
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