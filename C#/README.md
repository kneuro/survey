This is the C# version of Survey. To build, follow the directions below. This assumes you're using Mono.

## Build

Open a terminal. Any terminal will work. Ensure you have GCC installed. On Ubuntu or Debian based systems, this can be done by running this command:

> apt install mono-complete

Note you will need to execute those commands with root/sudo privileges.

Following the install of needed libraries, begin compilation. Navigate to the source file (main.cs) directory. Execute the following:

> mcs -out:main main.cs

You can replace "main" with whatever you'd like to call the binary/compiled executable instead. That's it. You may also append ".exe" to the end of the file, though this isn't necessary on Linux systems (usually).

## Run

In most cases, you can simply run the binary this way from inside a terminal:

> ./main

or

> mono main

Make sure to grant permissions to the binary by entering this inside a terminal:

> chmod +x main

You can also write a script for bash or whatever shell you're using.
