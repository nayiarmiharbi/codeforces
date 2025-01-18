import java.util.*;

public class prob_2056B {
    public static void solve(Scanner sc) {
        int n = sc.nextInt();
        String[] graph = new String[n];
        int[] ans = new int[n];

        for (int i = 0; i < n; i++) {
            graph[i] = sc.next();
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (i < j && graph[i].charAt(j) == '0') {
                    count++;
                } else if (i > j && graph[i].charAt(j) == '0') {
                    count--;
                }
            }

            ans[i + count] = i + 1;
        }

        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
        }

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