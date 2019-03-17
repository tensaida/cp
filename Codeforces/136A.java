import java.util.*;
import java.util.stream.IntStream;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n+1];
        IntStream.range(1,n+1).forEach(i -> a[sc.nextInt()] = i);
        Arrays.stream(a).skip(1).forEach(System.out::println);
    }
}
