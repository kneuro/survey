import sys

print("\nWelcome to Survey! What is your age?\n")

while True:
    try:
        age = int(raw_input("Enter your age: "))
        print("\nYou are " + str(age) + " years old!")
        break
    except ValueError:
        print("\nThat's not an age! Try again...\n")
        sys.exit()

print("\nNice! Now, what is your name?\n")
name = str(raw_input("Enter your name: "))
print("\nHello " + str(name) + "! It's nice to meet you!\n")
print("Would you like to write your age and name to a text file?\n")
print("Press 1 for yes or press anything else for no!\n")

while True:
    try:
        yn = int(raw_input("Print to text file? "))
        if yn == 1:
            f = open("Survey.txt","w")
            f.write("\nAge: " + str(age))
            f.write("\nName: " + str(name) + "\n\n")
            f.close()
            print("\nAll done! Check for Survey.txt in the current directory!\n")
            sys.exit()
    except ValueError:
        print("\nOkay! Exiting... \n")
        sys.exit()
sys.exit()
