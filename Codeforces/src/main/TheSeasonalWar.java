package main;

import java.util.Scanner;
import java.io.PrintWriter;

public class TheSeasonalWar {

    private char[][] grid;
    private int n;

    private int f(int x, int y) {
        grid[x][y] = 'V';
        if (valid(x + 1, y) && grid[x + 1][y] == '1') {
            grid[x + 1][y] = 'V';
            f(x + 1, y);
        }
        if (valid(x - 1, y) && grid[x - 1][y] == '1') {
            grid[x - 1][y] = 'V';
            f(x - 1, y);
        }
        if (valid(x + 1, y + 1) && grid[x + 1][y + 1] == '1') {
            grid[x + 1][y + 1] = 'V';
            f(x + 1, y + 1);
        }
        if (valid(x - 1, y - 1) && grid[x - 1][y - 1] == '1') {
            grid[x - 1][y - 1] = 'V';
            f(x - 1, y - 1);
        }
        if (valid(x + 1, y - 1) && grid[x + 1][y - 1] == '1') {
            grid[x + 1][y - 1] = 'V';
            f(x + 1, y - 1);
        }
        if (valid(x - 1, y + 1) && grid[x - 1][y + 1] == '1') {
            grid[x - 1][y + 1] = 'V';
            f(x - 1, y + 1);
        }
        if (valid(x, y + 1) && grid[x][y + 1] == '1') {
            grid[x][y + 1] = 'V';
            f(x, y + 1);
        }
        if (valid(x, y - 1) && grid[x][y - 1] == '1') {
            grid[x][y - 1] = 'V';
            f(x, y - 1);
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
            out.printf("Image number %d contains %d war eagles.\n",t,res);
        }
    }
}
