/**
 *  author:  migrmez
 */

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int [][] map = new int[70][70];
        int ans = 0 ;
        for (int i = 0; i < n; i++) {
            int h = in.nextInt();
            int m = in.nextInt();
            ans = Math.max(ans, (++map[h][m]));
        }
        System.out.println(ans);
    }
}

