#{Functions : Playing With C Strings (Part 4, Final)}
  This is a menu-driven program accepts, stores, and modifies a string given by the user according to which menu option is selected. The choices are: count vowels, count consonants, convert to uppercase, convert to lowercase, show the current string, enter a new string, display the menu, and exit the program.
## Function: count_vowels
  -Counts the number of vowels in a string and returns an integer expressing that value.
#### PROTOTYPE:
  `int count_vowels(char *string);`

#### BEHAVIOR
  The count_vowels function counts the number of vowels in a given string.
#### ARGUMENTS:
  -string    is a string containing letters
#### RETURN VALUE
  An integer expressing the value of the number of vowels counted.
#### ASSUMPTIONS:
  -all input is letters, punctuation, spaces
  -vowels include the letters {a,e,i,o,u}
  -numbers are not in the string
  -string has a length of at least 1
  -string is not so long as to cause a buffer overflow
#### SIDE EFFECTS:
  -None found using the included test cases
### Function: count_consonants
  Counts the number of consonants in a string and returns an integer expressing that value.
#### PROTOTYPE:
  `int count_consonants(char *string);`
#### BEHAVIOR
  The count_consonants function counts the number of consonants in a given string.
#### ARGUMENTS:
    -string    is a string containing letters
#### RETURN VALUE
  An integer expressing the value of the number of vowels counted.
#### ASSUMPTIONS:
    -all input is letters, punctuation, spaces
    -vowels include the letters {a,e,i,o,u}
    -numbers are not in the string
    -string has a length of at least 1
    -string is not so long as to cause a buffer overflow
#### SIDE EFFECTS:
    -None found using the included test cases
## Function: uppercase
  Converts all lowercase letters in a string to uppercase.
#### PROTOTYPE:
  `void uppercase(char *string);`

#### BEHAVIOR
  -The uppercase function converts lowercase letters to uppercase in a given string
  -Ignores punctuation and whitespace
#### ARGUMENTS:
  -string    is a string containing characters
#### RETURN VALUE
  Void (no return value)
#### ASSUMPTIONS:
  -all input is letters, punctuation, spaces
  -string has a length of at least 1
  -string is not so long as to cause a buffer overflow
#### SIDE EFFECTS:
  -None found using the included test cases
### Function: lowercase
  Converts all uppercase letters in a string to lowercase
#### PROTOTYPE:
  `void lowercase(char *string);`
#### BEHAVIOR
  -The lowercase function converts uppercase letters to lowercase in a given string
  -Ignores punctuation and whitespace
#### ARGUMENTS:
    -string    is a string containing characters
#### RETURN VALUE
  Void (no return value)
#### ASSUMPTIONS:
    -all input is letters, punctuation, spaces
    -string has a length of at least 1
    -string is not so long as to cause a buffer overflow
#### SIDE EFFECTS:
  -None found using the included test cases
## Function: print_menu
    Prints the menu options
#### PROTOTYPE:
  `void print_menu(char *string);`
#### BEHAVIOR
  -The print_menu function prints the menu options to the screen
#### ARGUMENTS:
  NONE This function does not take any arguments
#### RETURN VALUE
  Void (no return value)
#### ASSUMPTIONS:
  -Because this function does not take arguments and has no return value, there are also no assumptions
#### SIDE EFFECTS:
  -None found
#### KNOWN BUGS/ERRORS:
  -Does not give error for non-alpha characters entered as a menu selection (specs don't require this)
  -The ctype.h library function "toupper" does not work for converting characters with umlauts or other special alphabet characters.
## Installation
Clone git repo
## Usage
1. Clone or download this repo
2. Compile the program:
   1. On a Linux system, type `gcc 4b.c`
   2. On a Mac system, type `cc 4b.c`
3. Type `./a.out` to run the program. If your environment uses the file name, then use that instead.
## Contributing
1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request :D

## History
This program is part of an assigned project for CSE 224 (Programming Tools)
## Credits
Written by: Jessi Iler

25 Nov 2016

inertial.observer@gmail.com
## License
MIT License, Copyright 2016
