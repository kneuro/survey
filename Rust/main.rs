// Code modified from a StackOverflow answer. I'll find a source and post it. This is much simpler and uses less functions.

use std::io::{self, BufRead};

fn main() {
    println!("\nWelcome to Survey! How old are you?\n");
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().fuse();
    let input = match lines.next() {
        Some(Ok(a)) => a,
        _ => panic!("Couldn't read input.")
    };
    println!("\nYou are {} years old!\n", input.trim());
}
