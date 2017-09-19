using System;

public class Survey{
  public static void Main()
  {
    var age = 0;
    Console.Write("\nWelcome to Survey! What is your age? \n\n");
    Console.Write("Enter your age: ");
    if (int.TryParse(Console.ReadLine(), out age))
      {
        Console.Write("\nYou are {0} years old!\n\n", age);
      }
    else
    {
     Console.Write("\nThat's not an age! Try again... \n\n");
   }
  }
}
