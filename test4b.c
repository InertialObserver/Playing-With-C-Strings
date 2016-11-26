#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*|*-- *-* ** - ** -* --* / -*-* --- -** * / ** *** / **-* **- -* *-*-*-|*\
|*                    Test Cases for Program 4b                          *|
|*                                                                       *|
|*                     Scroll Down for Output                            *|
|*                                                                       *|
\*| - *-* ** -* -*- * / ** -- -- * *-* / -*- *- **-* **-* * * / *--- *- |*/


void print_menu();
int count_vowels(char *string);
int count_consonants(char *string);
void uppercase(char *string);
void lowercase(char *string);

int main()
{
    /*|- * *** - / *----|*\
    |***    TEST       ***|
    \*|- * *** - / *----|*/

    char stringKeeper[101];  //initialize a character array with a size of 120
    strcpy(stringKeeper, "This is a TEST, Hello GOODBYE!, calling all Cars!!!");   //uses 'strcpy' function from the <string.h> library to copy the text into the 'stringKeeper' array
    char i, c;
    char selection[1];
    char line[100];

    while(fgets(line, 100, stdin) != NULL)  //while loop for getting characters from stdin
       {
            char selection = toupper(line[0]);
            switch(selection)
            {
                case 'A':
                uppercase(stringKeeper);
                printf("There are %d vowels in your string.\n", count_vowels(stringKeeper) );
                printf("\nEnter your menu selection:" );
                break;

                case 'B':
                uppercase(stringKeeper);
                printf("There are %d consonants in your string.\n", count_consonants(stringKeeper) );
                printf("\nEnter your menu selection:" );
                break;

                case 'C':
                uppercase(stringKeeper);
                break;

                case 'D':
                lowercase(stringKeeper);
                break;

                case 'E':
                printf("\nYour string in it's current configuration: %s\n", stringKeeper);
                printf("\nEnter your menu selection:" );
                break;

                case 'F':
                printf("Enter a new string (100 characters or less) and press ENTER:\n" );
                fgets(stringKeeper, 101, stdin);
                printf("\nEnter your menu selection:" );
                break;

                case 'M':
                print_menu();
                break;

                case 'X':
                printf("The program is exiting, Auf Wiedersehen!\n" );
                exit(0);

                default:
                printf("\nUnknown Command: Enter M for help\n" );
                break;
           }
        }
 return 0;
}

void print_menu()
{
    printf("Select a menu item and hit enter: \n" );
    printf("A)  Count the number of vowels in the string\n");
    printf("B)  Count the number of consonants in the string\n");
    printf("C)  Convert the string to uppercase\n");
    printf("D)  Convert the string to lowercase\n");
    printf("E)  Display the current string\n");
    printf("F)  Enter another string\n");
    printf(" \n");
    printf("M)  Display this menu\n");
    printf("X)  Exit the program\n");
}
void uppercase(char *string)
{
  int d = 0;

  while (string[d] != '\0')
  {
    if (string[d] >= 'a' && string[d] <= 'z')
    {
      string[d] = string[d] - 32;
     }
     d++;
  }
}

void lowercase(char *string)
{
  int c = 0;
  while (string[c] != '\0')
  {
    if (string[c] >= 'A' && string[c] <= 'Z')
    {

      string[c] = string[c] + 32;
     }
     c++;
  }
}

int count_vowels(char *string)
{
    int vowels = 0;
    int i;
    int length = strlen(string);

    for(i = 0; i < length; i++)
    {
        switch(string[i])
        {
            case 'A':
            case 'E':
            case 'I':
            break;
        }
    }
return(vowels);
}

int count_consonants(char *string)
{
    int consonants = 0;
    int i;
    int length = strlen(string);

    for(i = 0; i < length; i++)
    {
        switch(string[i])
        {
            case 'B':
            case 'C':
            case 'D':
            case 'F':
            case 'G':
            case 'H':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                consonants++;
                break;
        }
    }
return(consonants);
}

/*|- * *** - / *----|*\
|***  TEST  CASES  ***|
\*|- * *** - / *----|*/

/*Using the following menu options, in order:
e
E
a
A
b
B
c
E
d
e
f
THIS is another Line.
E
d
e
c
e
c
e
M
f
   (Empty line)
e
a
b
c
d
?
x

***** ADDITIONAL TEST ***** //to check what effect toupper has on umlauts

f
Which German word contains the most ä, ö, ü, and ß in any variation?
a
e
x

/*|- * *** - / *----|*\
|***    OUTPUT     ***|
\*|- * *** - / *----|*/

/*
ResistanceIsFutile:4b_Final Jessi$ ./a.out
e

Your string in it's current configuration: This is a TEST, Hello GOODBYE!, calling all Cars!!!

Enter your menu selection:E

Your string in it's current configuration: This is a TEST, Hello GOODBYE!, calling all Cars!!!

Enter your menu selection:a
There are 0 vowels in your string.

Enter your menu selection:A
There are 0 vowels in your string.

Enter your menu selection:b
There are 24 consonants in your string.

Enter your menu selection:B
There are 24 consonants in your string.

Enter your menu selection:c
E

Your string in it's current configuration: THIS IS A TEST, HELLO GOODBYE!, CALLING ALL CARS!!!

Enter your menu selection:d
e

Your string in it's current configuration: this is a test, hello goodbye!, calling all cars!!!

Enter your menu selection:f

Enter a new string (100 characters or less) and press ENTER:
THIS is another Line.

Enter your menu selection:E

Your string in it's current configuration: THIS is another Line.


Enter your menu selection:d
e

Your string in it's current configuration: this is another line.


Enter your menu selection:c
e

Your string in it's current configuration: THIS IS ANOTHER LINE.


Enter your menu selection:c
e

Your string in it's current configuration: THIS IS ANOTHER LINE.


Enter your menu selection:M
Select a menu item and hit enter:
A)  Count the number of vowels in the string
B)  Count the number of consonants in the string
C)  Convert the string to uppercase
D)  Convert the string to lowercase
E)  Display the current string
F)  Enter another string

M)  Display this menu
X)  Exit the program
f
Enter a new string (100 characters or less) and press ENTER:


Enter your menu selection:e

Your string in it's current configuration:


Enter your menu selection:a
There are 0 vowels in your string.

Enter your menu selection:b
There are 0 consonants in your string.

Enter your menu selection:c
d
?

Unknown Command: Enter M for help
x
The program is exiting, Auf Wiedersehen!

ResistanceIsFutile:4b_Final Jessi$ ./a.out
f
Enter a new string (100 characters or less) and press ENTER:
Which German word contains the most ä, ö, ü, and ß in any variation?

Enter your menu selection:c
e

Your string in it's current configuration: WHICH GERMAN WORD CONTAINS THE MOST ä, ö, ü, AND ß IN ANY VARIATION?


Enter your menu selection:x
The program is exiting, Auf Wiedersehen!
*/
