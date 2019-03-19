import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean[] have = new boolean[n + 1];
        int curr = n;
        for (int i = 0; i < n; i++) {
            int j = sc.nextInt();
            have[j] = true;
            if (curr == j) {
                while (have[j])
                    System.out.print(j-- + " ");
                curr = j;
            }
            System.out.println();
        }
    }
}