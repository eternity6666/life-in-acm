import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s;
        s = input.nextLine();
        int n = input.nextInt();
        input.nextLine();
        for(int i = 0; i < n; i++) {
            String t;
            t = input.nextLine();
            String tmp = ".*";
            int len = t.length();
            for(int j = 0; j < len; j++) {
                tmp = tmp + t.charAt(j);
                // if(j != len - 1)
                tmp = tmp + ".*";
            }
            // tmp = tmp;
            // System.out.println(tmp);
            if(s.matches(tmp))
                System.out.println("YES");
            else
                System.out.println("NO");
            /*
            if("Javaadsfa".matches("Ja.*a"))
                System.out.println("yes");
                */
        }
    }
}

