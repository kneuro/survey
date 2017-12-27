This is the C version of Survey. To build, follow the directions below. This assumes you're using GCC.

## Build

Open a terminal. Any terminal will work. Ensure you have GCC installed. On Ubuntu, this can be done by running this command:

> apt install gcc

or

> apt install build-essential

Note you will need to execute those commands with root/sudo privileges.

Following the install of needed libraries, begin compilation. Navigate to the source file (main.c) directory. Execute the following:

> gcc -o main main.c

You can replace "main" with whatever you'd like to call the binary/compiled executable instead. That's it.

## Run

In most cases, you can simply run the binary this way from inside a terminal:

> ./main

Make sure to grant permissions to the binary by entering this inside a terminal:

> chmod +x main

You can also write a script for bash or whatever shell you're using.
