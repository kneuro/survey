# This imports some standard functionality available to all Python languages.
import sys
# This prints a welcome message. /n means new line. Strings are in double quotes.
print("\nWelcome to Survey! What is your age?\n")
# This is the main loop of the program. It runs a while loop that checks to see if your age is an integer, in which prints a successful message, else it prints an error exception asking the user to try again. Note that the age variable must be converted to a string with the 'str(variable)' argument, otherwise it will not work inside the printed string.
while True:
    try:
        age = int(raw_input("Enter your age: "))
        print("\nYou are " + str(age) + " years old!\n")
        break
    except ValueError:
        print("\nThat's not an age! Try again...\n")
        sys.exit()
# This properly ends the Python script.
sys.exit()
