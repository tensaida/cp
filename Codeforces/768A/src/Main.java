import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.IntStream;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        IntStream.range(0, n).forEach(e -> a[e] = (sc.nextInt()));
        Arrays.sort(a);
        if (a[0] == a[n - 1]) System.out.println(0);
        else {
            int res = n;
            int i = 0;
            while (i < n && a[i] == a[0]) i++;
            res -= i;
            i = n - 1;
            while (i > 0 && a[i] == a[n - 1]) i--;
            res -= (n - i - 1);
            System.out.println(res);
        }
    }
}