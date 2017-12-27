This is the C++ version of Survey. To build, follow the directions below. This assumes you're using G++/GCC.

## Build

Open a terminal. Any terminal will work. Ensure you have GCC and G++ installed. On Debian-based distributions, this can be done by running the command:

> apt install gcc g++

or

> apt install build-essential

Note that you will probably need to execute these commands with root/sudo privileges.

Following the install of dependencies and libraries, being compilation. Navigate to the source file (main.cxx) directory. Execute the following in a terminal:

> g++ -o main main.cxx

You can replace "main" with whatever you'd like to call the binary/compiled executable instead. That's it

## Run

In most cases, you can simply run the binary this way from inside a terminal:

> ./main

Make sure to grant permissions to the binary by entering this inside a terminal:

> chmod +x main

You can also write a script for bash or whatever shell you're using.
