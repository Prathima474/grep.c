grep is a simplified implementation of the grep command in C, designed for searching specified patterns within text files. This project aims to provide a basic command-line utility similar to grep but without recursive capabilities, intended specifically for use in Linux environments.

I have used below commands in Linux

 =>   nano grep.c
 
compile the program using gcc
 =>  gcc -o grep grep.c

Created example.txt 
 =>  echo "hello world" > example.txt
 =>  echo "this is a test" >> example.txt
 =>  echo "another line" >> example.txt
 =>  echo "hello again" >> example.txt
 =>  echo "just another test" >> example.txt
 =>  echo "goodbye" >> example.txt
 
Run the program
 =>  ./grep "hello" example.txt
