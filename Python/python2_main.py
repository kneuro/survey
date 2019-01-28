import sys
print("\nWelcome to Survey! What is your age?\n")
while True:
    try:
        age = int(raw_input("Enter your age: "))
        print("\nYou are " + str(age) + " years old!")
        break
    except ValueError:
        print("\nThat's not an age! Try again...\n")
print("\nNice! Now, what is your name?\n")
name = str(raw_input("Enter your name: "))
print("\nHello " + str(name) + "! It's nice to meet you!\n")
print("Would you like to write your age and name to a text file?\n")
print("Enter 'y' for yes or press anything else for no!\n")
while True:
    y = raw_input("Print to text file? ")
    y = y.lower()
    if y == "y":
        f = open("Survey.txt","w")
        f.write("\nAge: " + str(age))
        f.write("\nName: " + str(name) + "\n\n")
        f.close()
        print("\nAll done! Check for Survey.txt in the current directory!\n")
        sys.exit()
    else:
        print("\nOkay! Exiting...")
        break
sys.exit()
