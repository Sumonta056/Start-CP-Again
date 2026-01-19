package String;

public class SwapTwoNumbers {
    public static void main(String[] args) {
        int a = 2;
        int b = 3;

        b = a + b ;
        a = b - a;
        b = b - a;

        System.out.println(a);
        System.out.println(b);
    }
}
