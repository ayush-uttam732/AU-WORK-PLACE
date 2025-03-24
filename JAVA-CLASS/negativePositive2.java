public class negativePositive2 {
    public static void check(int number) {
        if (number > 0) {
            System.out.println("The number is positive");
        } else if (number < 0) {
            System.out.println("The number is negative");
        } else {
            System.out.println("The number is zero");
        }
    }
    public static void main(String[] args) {
        check(10);
        check(-10);
        check(0);
    }
}
