package GameProject;
import java.util.*;

class Guesser
{
    int guessNum;

    int guessingNumber()
    {
        System.out.println("Guesser! Kindly guess the number");
        Scanner scan = new Scanner(System.in);
        guessNum = scan.nextInt();
        return guessNum;
    }
}

public class LaunchGame {
    public static void main(String[] args) {
        
    }
}
