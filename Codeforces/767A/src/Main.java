import java.util.Scanner;
import java.util.Stack;
import java.util.TreeSet;
import java.util.stream.IntStream;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Stack<Integer> stack = new Stack<>();
        IntStream.range(1, n + 1).forEach(stack::push);
        TreeSet<Integer> left = new TreeSet<>();
        for (int i = 0; i < n; i++) {
            int c = sc.nextInt();
            if (stack.lastElement().equals(c)) {
                System.out.print(stack.pop() + " ");
                for (int j = 0; j < left.size(); j++) {
                    if (left.last().equals(stack.lastElement())) {
                        stack.pop();
                        System.out.print(left.pollLast() + " ");
                        j--;
                    } else break;
                }
            } else left.add(c);
            System.out.println();
        }
    }
}
