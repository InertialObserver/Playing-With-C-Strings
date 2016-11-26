#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*|*-- *-* ** - ** -* --* / -*-* --- -** * / ** *** / **-* **- -* *-*-*-|*\
|*                   Deliverable 4 (Final), Program 4b                   *|
|*                Jessica Iler, CSE 224, Fall 2016                       *|
|*                       25 November 2016                                *|
|*                        Menu-Driven Program:                           *|
|*                 Uses function to modify strings                       *|
|*                                                                       *|
\*| - *-* ** -* -*- * / ** -- -- * *-* / -*- *- **-* **-* * * / *--- *- |*/

//function prototypes
void print_menu();
int count_vowels(char *string); //take string, count number of vowels {a,e,i,o,u}
int count_consonants(char *string); //take string, count number of consonants
void uppercase(char *string); //take string, convert lowercase letters to uppe
void lowercase(char *string); //changes lowercase characters in a string to uppercase

int main()
{
    char stringKeeper[101]; //initializes an array to hold the string that's entered at first prompt
    char i = 0, c = 0;   //initializes i and c
    char selection[1];  //initializes an array to hold the character grabbed in the while loop as the menu entry
    char line[100];    //initializes an array to hold the menu selection input from user, set to 100 in case the user enters more than one character
    printf("Enter a string (100 characters or less) and hit enter: \n" ); //prompts user to enter a string
    fgets(stringKeeper, 101, stdin);  //grabs the input from the user in response to the last line
    print_menu();  //prints the menu

    while(fgets(line, 100, stdin) != NULL)  //while loop for getting characters from stdin
       {
            char selection = toupper(line[0]); //takes the first element of the 'line' array, makes it uppercase, and assigns it to 'selection'
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

           } //end of switch/case
        }
 return 0;
}

void print_menu()  //gives code to print menu
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
void uppercase(char *string) //function to change all letters to uppercase
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
  int c = 0;  //initialize integer variable 'c' to represent each character in the string array

  while (string[c] != '\0')  //run this loop until the null terminator pops up
  {
    if (string[c] >= 'A' && string[c] <= 'Z')  //if the character is between 'A' and 'Z'
    {
        /*Add 32 from the letter's ASCII code
        The ASCII code for 'A' is 65. Adding 32 equals 97
         which is the ASCII code for 'a' */
      string[c] = string[c] + 32;  //put the new letter into the character array
     }
     c++;  //go to the next character and loop again if conditions are true
  }
}

int count_vowels(char *string)  //function definition | takes one argument, a string of data type 'char'
{
    int vowels = 0;  //initialize the variable 'vowels' as type 'int' with the initial value of 0
    int i;           //initialize the variable 'i' (index) as type 'int'

    /*initialize the variable 'length' as type 'int' to hold the length of the string
    using the 'string.h' library function 'strlen' to find the string length*/
    int length = strlen(string);

    /*for loop to get through all the characters in the string
    first condition intializes index to zero to begin loop
    second condition makes sure the loop ends after the last character in the string
    third condition iterates index by one for the next go-round
    */
    for(i = 0; i < length; i++)
    {
        switch(string[i]) //checks each letter in the string against the cases
        {
            case 'A':     //the cases are each vowel both uppercase and lowercase
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowels++;  //each time a letter in the string matches one of the cases, the vowel count increases by 1
                break;  //leaves the loop once all letters of the string are compared and counted
        }
    }
return(vowels);  //returns the value of 'vowels', which is type int
}

int count_consonants(char *string)  //function definition | takes one argument, a string of data type 'char'
{
    int consonants = 0;   //initialize the variable 'consonants' as type 'int' with the initial value of 0
    int i;    //initialize the variable 'i' (index) as type 'int'

    /*initialize the variable 'length' as type 'int' to hold the length of the string
    using the 'string.h' library function 'strlen' to find the string length*/
    int length = strlen(string);

    /*for loop to get through all the characters in the string
    first condition intializes index to zero to begin loop
    second condition makes sure the loop ends after the last character in the string
    third condition iterates index by one for the next go-round
    */
    for(i = 0; i < length; i++)
    {
        switch(string[i])  //checks each letter in the string against the cases
        {
            case 'B':     //the cases are each consonants both uppercase and lowercase
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
                consonants++;  //each time a letter in the string matches one of the cases, the consonants count increases by 1
                break;         //leaves the loop once all letters of the string are compared and counted
        }
    }
return(consonants);  //returns the value of 'consonants', which is type int
}
