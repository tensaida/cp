import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        TreeMap<Integer, Integer> map = new TreeMap<>();
        for (int i = 0; i < n; i++) {
            int key = sc.nextInt();
            if (map.containsKey(key))
                map.put(key, map.get(key) + 1);
            else map.put(key, 1);
        }
        int res = 0;
        for (Map.Entry<Integer, Integer> e : map.entrySet()) {
            if (map.lowerKey(e.getKey()) != null)
                if (map.higherKey(e.getKey()) != null)
                    res += e.getValue();
        }
        System.out.println(res);
    }
}