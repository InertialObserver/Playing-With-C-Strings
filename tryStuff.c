#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_menu();
void uppercase(char *string); //take string, convert lowercase letters to uppe
void lowercase(char *string); //changes lowercase characters in a string to uppercase

int main()
{
    char stringKeeper[101]; //initializes an array to hold the string that's entered at first prompt
    char i = 0, c = 0;   //initializes i and c
    char selection[1];  //initializes an array to hold the character grabbed in the while loop as the menu entry
    char line[100];    //initializes an array to hold the menu selection input from user
    printf("Enter a string and hit enter: \n" ); //prompts user to enter a string
    fgets(stringKeeper, 101, stdin);  //grabs the input from the user in response to the last line
    print_menu();  //prints the menu

    while(fgets(line, 100, stdin) != NULL)  //while loop for getting characters from stdin
       {
            uppercase(line);  //calls uppercase function on the characters in 'line'
            char selection = line[0]; //takes the first element of the 'line' array and assigns it to 'selection'

            switch(selection)
            {

                case 'A':
                printf("Success\n" );
                print_menu();
                break;

                case 'B':
                //uppercase(selection);
                printf("%s\n", stringKeeper );
                print_menu();
                break;

                case 'C':
                uppercase(stringKeeper);
                printf("%s\n", stringKeeper );
                print_menu();
                break;

                case 'D':
                lowercase(stringKeeper);
                printf("%s\n", stringKeeper );
                print_menu();
                break;

                case 'E':
                printf("\nYou entered: %s\n", stringKeeper);
                print_menu();
                break;

                case 'F':
                printf("%s\n", stringKeeper );
                print_menu();
                break;

                case 'M':
                printf("%s\n", stringKeeper );
                print_menu();
                break;

                case 'X':
                printf("The program is exiting, Schuss!\n" );
                exit(0);

                default:
                printf("\nYou entered: %s\n", stringKeeper);
                print_menu();
                break;

           } //end of switch/case
        //while((c = getchar()) != '\n'); //flush the buffer
        }
 return 0;
}

void print_menu()  //gives code for menu
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
