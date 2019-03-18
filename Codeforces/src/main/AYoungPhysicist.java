package main;

import java.util.Scanner;
import java.io.PrintWriter;

public class AYoungPhysicist {
    public void solve(int testNumber, Scanner sc, PrintWriter out) {
        int n = sc.nextInt();
        int t1 = 0, t2 = 0, t3 = 0;
        while (n-- > 0) {
            t1 += sc.nextInt();
            t2 += sc.nextInt();
            t3 += sc.nextInt();
        }
        if (t1 == 0 && t2 == 0 && t3 == 0)
            out.println("YES");
        else out.println("NO");
    }
}
