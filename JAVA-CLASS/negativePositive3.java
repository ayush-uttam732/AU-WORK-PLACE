public class negativePositive3 {
    public static void askNumber(){
        int number = 10;
        if (number > 0) {
            System.out.println("The number is positive");
        } else if (number < 0) {
            System.out.println("The number is negative");
        } else {
            System.out.println("The number is zero");
        }
    }
    public static void main(String[] args) {
        askNumber();
    }

}
