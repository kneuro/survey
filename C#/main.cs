using System;

public class Survey
{
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
     System.Environment.Exit(1);
      }
    string name;
    Console.Write("Nice! Now, what is your name?\n");
    Console.Write("\nEnter your name: ");
    name = Console.ReadLine();
    Console.Write("\nHello {0}! It's nice to meet you!\n", name);
    Console.Write("\nWould you like to write your age and name to a text file?\n");
    while (true)
      {
        Console.WriteLine("\nPress 1 for yes or any other key for no!\n ");
        var yn = Console.ReadLine();
        if (yn != null && yn.Trim().Equals("1", StringComparison.InvariantCultureIgnoreCase))
        {
          string age1 = age.ToString();
          string[] lines = { "\nAge: " + age1, "Name: " + name + "\n"};
          System.IO.File.WriteAllLines("Survey.txt", lines);
          Console.WriteLine("\nAll done! Check Survey.txt in the current directory!\n");
          System.Environment.Exit(1);
        }
        else
        {
          Console.WriteLine("\nOkay! Exiting... \n");
          System.Environment.Exit(1);
        }
      }
  }
}
