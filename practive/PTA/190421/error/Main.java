import java.util.number.BigNumber;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long a, b, c;
        a = input.nextLong();
        b = input.nextLong();
        c = input.nextLong();
        BigNumber x,y,z;
        x = new BigNumber(a);
        y = new BigNumber(b);
        z = new BigNumber(c);
        // System.out.println((a * b) % c);
        System.out.println((x * y) % z);
    }
}

