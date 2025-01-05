import java.util.Scanner;

public class prob_2057A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int minDim = Math.max(n, m);
            int result = 1 + minDim;
            System.out.println(result);
        }
        sc.close();
    }
}
