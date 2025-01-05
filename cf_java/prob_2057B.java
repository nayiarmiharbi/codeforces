import java.util.*;

public class prob_2057B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] arr = new int[n];
            HashMap<Integer, Integer> map = new HashMap<>();
            for(int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
            }
            List<Integer> freqList = new ArrayList<>(map.values());
            Collections.sort(freqList);
            int uniqueCount = freqList.size();
            for(int freq : freqList) {
                if(k >= freq) {
                    k -= freq;
                    uniqueCount--;
                } else {
                    break;
                }
            }
            if (uniqueCount == 0) {
                uniqueCount = 1;
            }
            System.out.println(uniqueCount);
        }
        sc.close();
    }
}
