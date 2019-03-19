import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Scanner;

/**
 * Built using CHelper plug-in
 * Actual solution is at the top
 *
 * @author Devesh
 */
public class Main {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        Scanner in = new Scanner(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        TheSeasonalWar solver = new TheSeasonalWar();
        solver.solve(1, in, out);
        out.close();
    }

    static class TheSeasonalWar {
        private char[][] grid;
        private int n;
        private final int[] dx = {0, 1, 1, 1, 0, -1, -1, -1};
        private final int[] dy = {1, 1, 0, -1, -1, -1, 0, 1};

        private int f(int x, int y) {
            grid[x][y] = 'V';
            for (int i = 0; i < 8; i++) {
                int x1 = x + dx[i];
                int y1 = y + dy[i];
                if (valid(x1, y1) && grid[x1][y1] == '1')
                    f(x1, y1);
            }
            return 1;
        }

        private boolean valid(int x, int y) {
            return x < n && x >= 0 && y < n && y >= 0;
        }

        public void solve(int testNumber, Scanner in, PrintWriter out) {
            int t = 0;
            while (in.hasNext()) {
                t++;
                n = in.nextInt();
                grid = new char[n][];
                for (int i = 0; i < n; i++) {
                    grid[i] = in.next().toCharArray();
                }
                int res = 0;
                for (int i = 0; i < n; i++)
                    for (int j = 0; j < n; j++)
                        if (grid[i][j] == '1')
                            res += f(i, j);
                out.printf("Image number %d contains %d war eagles.\n", t, res);
            }
        }

    }
}

