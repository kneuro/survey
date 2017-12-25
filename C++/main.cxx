#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "\nWelcome to Survey! What is your age?\n\n";
    int age;
    cout << "Enter your age: ";
    std::cin >> age;
    while(std::cin.fail())
    {
        std::cout << "\nThat's not an age! Try again... \n" << std::endl;
        return 0;
        std::cin.ignore(256,'\n');
        std::cin >> age;
    }
    std::cout << "\nYou are " << age << " years old!\n" << std::endl;
    cout << "Nice! Now, what is your name?\n";
    cout << "\nEnter your name: ";
    char name [100];
    std::cin >> name;
    cout << "\nHello " << name << "! It's nice to meet you!\n";
    cout << "\nWould your like to write your age and name to a text file?\n";
    int yn;
    cout << "\nPress 1 for yes or any other key for no! \n\n";
    std:cin >> yn;
    if (yn == 1)
    {
    ofstream survey;
    survey.open ("Survey.txt");
    survey << "\nAge: " << age << "\n";
    survey << "Name: " << name << "\n\n";
    survey.close();
    cout << "\nAll done! Check Survey.txt in the current directory!\n\n";
    return 0;
    }
    else
    {
      std::cout << "\nOkay! Exiting... \n\n";
      return 0;
    }
}
