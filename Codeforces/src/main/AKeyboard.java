package main;

import java.util.Scanner;
import java.io.PrintWriter;

public class AKeyboard {
    public void solve(int testNumber, Scanner in, PrintWriter out) {
        String str = "qwertyuiopasdfghjkl;zxcvbnm,./";
        String s = in.next();
        String ques = in.next();
            for (char e : ques.toCharArray()) {
                int org = str.indexOf(e);
                if (s.equals("R")) out.print(str.charAt(org-1));
                else out.print(str.charAt(org+1));
            }

    }
}
