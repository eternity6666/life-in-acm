// package com.company;

import java.util.Scanner;

public class a2058 {

    public static void main(String[] args) {
        // write your code here
        Scanner inner = new Scanner(System.in);
        long n, m;
        while(true) {
            n = inner.nextLong();
            m = inner.nextLong();

            if(n + m == 0)
                break;

            long len = (long)Math.pow(2.0 * m, 0.5);
            for(; len >= 1; len--){
                long l = (2 * m / len - len + 1) / 2;
                if(len * (len + 2 * l -1) / 2 == m)
                    System.out.println("[" + l + "," + (l + len - 1) + "]");
            }
            System.out.println();
        }
        /*
        Scanner inner = new Scanner(System.in);
        long n, m;
        long x = 0;
        while (true) {
            n = inner.nextLong();
            m = inner.nextLong();

            if (n == 0 && m == 0)
                break;

            x++;
            if(x != 1)
                System.out.println();

            long minNM = Math.min(n, m);
            for(long i = 1; i <= minNM; i ++){
                long tmp2 = 0;
                for(long tmp = i; tmp <= minNM; tmp++) {
                    if(tmp2 + tmp < m)
                        tmp2 += tmp;
                    else if(tmp2 + tmp == m)
                        System.out.println("[" + i + "," + tmp + "]");
                    else
                        break;
                }
            }
            for (long i = 1; i < m / 2; i++) {
                // firstClass fc = new firstClass;
                if (yes(i, m - i, m)) {
                    System.out.println("[" + i + "," + (m - i) + "]");
                }
            }
        }
        */
    }

    /*
    public boolean yes(long a, long b, long m) {
        if(Math.pow(b,2) - Math.pow(a,2)+a+b == 2 * m)
            return true;
        else
            return false;
    }
    */
}

