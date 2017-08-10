package main
import "fmt"

func main() {
    var age string
    age1 := "\nHow old are you? "
    fmt.Print("\nWelcome to Survey! Let's get started.\n")
    fmt.Print(age1)
    fmt.Scanf("%s", &age)
    fmt.Print("\nAwesome! You are ", age, " years old!\n" )
    fmt.Print("\n")
}
