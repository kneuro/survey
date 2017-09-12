using System;

public class Survey{
  public static void Main()
  {
    int age;
    Console.Write("\nWelcome! How old are you? \n\n");
    age = Convert.ToInt32(Console.ReadLine());
    Console.Write("\nYou are {0} years old!\n\n", age);
  }
}
