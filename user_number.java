import java.util.*;
import java.io.*;

public class hello
{
  public static void main(String[] args)
  {
    Scanner x = null;

    int a;

    x = new Scanner(System.in);
    
    System.out.print("Enter any number : ");
    a = x.nextInt();

    System.out.println("\n\t\t\tYou have entered : " + a);
  }
}
