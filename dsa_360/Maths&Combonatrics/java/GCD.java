import java.util.*;

public class GCD{
    public static int gcdOf(int a,int b)
    {
        return b==0 ? a : gcdOf(b, a%b);
    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        int b=s.nextInt();
        int result=gcdOf(a, b);
        System.out.println(result);
    }
}