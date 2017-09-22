package main
import "fmt"
import "strconv"

func main() {
    var age string
    fmt.Print("\nWelcome to Survey! What is your age?\n\n")
    fmt.Scanf("%s", &age)
      if _, err := strconv.ParseInt(age,10,64); err == nil  {
          fmt.Printf("\nYou are %s years old!\n", age)
        } else {
        fmt.Printf("\nThat's not an age! Try again... \n")
      }
    fmt.Println("\nNice! Now, what is your name?\n")
    fmt.Printf("Enter your name: ")
    var name string
    fmt.Scanf("%s", &name)
    fmt.Println("\nHello " + name + "! It's nice to meet you!")
    fmt.Println("\nWould you like to write your age and name to a text file?")
    fmt.Println("\nPress 1 for yes or any other key for no!\n")
    var yes int
    fmt.Scanf("%d", &yes)
    if yes == 1 {
      fmt.Printf("\nWoohoo!\n")
    } else {
      fmt.Printf("\nOkay! Exiting... \n\n")
    }
}
