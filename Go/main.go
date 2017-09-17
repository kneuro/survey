package main
import "fmt"

func main() {
    var age string
    fmt.Print("\nWelcome to Survey! What is your age?\n\n")
    fmt.Scanf("%s", &age)
    fmt.Print("\nYou are ", age, " years old!\n" )
    fmt.Print("\n")
}
