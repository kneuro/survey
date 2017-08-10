use std::io::{self, Write};
use std::fmt::Display;
use std::process;

fn main() {
    let s = grab_input("\nWelcome to Survey! Let's start.\n")
        .unwrap_or_else(|e| exit_err(&e, e.raw_os_error().unwrap_or(-1)));

    println!("\nYou are {} years old!\n", s.trim());
}

fn grab_input(msg: &str) -> io::Result<String> {
    let mut buf = String::new();
    print!("{}\nHow old are you? ", msg);
    try!(io::stdout().flush());

    try!(io::stdin().read_line(&mut buf));
    Ok(buf)
}

fn exit_err<T: Display>(msg: T, code: i32) -> ! {
    let _ = writeln!(&mut io::stderr(), "Error: {}", msg);
    process::exit(code)
}
