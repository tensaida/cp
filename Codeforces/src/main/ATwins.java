package main;

import java.util.Arrays;
import java.util.Scanner;
import java.io.PrintWriter;

public class ATwins {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt();
        int[] a = new int[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
            sum += a[i];
        }
        Arrays.sort(a);
        int curr = 0, coins = 0;
        for (int i = n - 1; i >= 0; i--) {
            curr += a[i];
            coins++;
            if (curr > sum / 2.0) break;
        }
        out.println(coins);
    }
}
