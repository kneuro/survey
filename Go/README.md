This is the Go version of Survey. To build, follow the directions below. This assumes you're using the native Go language dependencies and compiler.

## Build

Open a terminal. Any terminal will work. Ensure you Go installed by running this in a terminal:

> apt install golang-go

Note that you will probably need to execute these commands with root/sudo privileges.

Following the install of dependencies and libraries, being compilation. Navigate to the source file (main.go) directory. Execute the following in a terminal:

> go build main.go

You can replace "main" with whatever you'd like to call the binary/compiled executable instead.

You can also test the binary by simply running it instead of compiling.

> go run main.go

## Run

In most cases, you can simply run the binary this way from inside a terminal:

> ./main

Make sure to grant permissions to the binary by entering this inside a terminal:

> chmod +x main

You can also write a script for bash or whatever shell you're using.
