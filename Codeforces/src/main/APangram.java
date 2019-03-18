package main;

import java.util.HashSet;
import java.util.Scanner;
import java.io.PrintWriter;

public class APangram {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        int n = in.nextInt();
        HashSet<Character> set = new HashSet<>();
        char[] c = in.next().toCharArray();
        for (int i = 0; i < n; i++)
            set.add(Character.toLowerCase(c[i]));
        if (set.size() == 26)
            out.println("YES");
        else out.println("NO");
    }
}
