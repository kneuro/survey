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
    fmt.Print("\n")
}
