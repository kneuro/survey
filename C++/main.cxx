#include <iostream>
using namespace std;

int main()
{
    cout << "\nWelcome to Survey! What is your age?\n\n";
    int age;
    std::cin >> age;
    while(std::cin.fail())
    {
        std::cout << "\nThat's not an age! Try again... \n" << std::endl;
        return 0;
        std::cin.ignore(256,'\n');
        std::cin >> age;
    }
    std::cout << "\nYou are " << age << " years old!\n" << std::endl;
    return 0;
}
