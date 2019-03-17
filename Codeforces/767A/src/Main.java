import java.util.Scanner;
import java.util.TreeSet;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int curr = n;
        TreeSet<Integer> left = new TreeSet<>();

        for (int i = 0; i < n; i++) {
            int c = sc.nextInt();
            if (c == curr) {
                System.out.print(curr-- + " ");
                for (int j = 0; j < left.size(); j++) {
                    if (left.last().equals(curr)) {
                        curr--;
                        System.out.print(left.pollLast() + " ");
                        j--;
                    } else break;
                }
            } else left.add(c);
            System.out.println();
        }
    }
}
