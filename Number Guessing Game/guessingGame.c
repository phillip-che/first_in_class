/*
- initialize int variables for option, max value, user input, and the guess
- initialize a character string which will take in user input
- set max value to 10
- print out menu with options
- take in user input and assign value to character string
- assign guess to a random variable between 1 and max value
- if user enters option 1 prompt the user to enter their guess
- game returns to menu if user enters 'q' and continues otherwise
- parse the number inputted by the user and assign it to input variable
- if input is equal to guess print out success message and return to menu
- else if input is greater than guess then print out error message and allow user to guess again
- else if input is lower than guess then print out error message and allow user to guess again
- if user enters option 2 prompt user to enter a max value that is less than 10 but greater than 0
- assign max value to the new input by the user or return error messagea if conditions are not met
- if user enters option 3 end the game and print out exit message
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
int option, maxValue, guess, input;
   char str[5];
   time_t t;
   maxValue = 10;

   menu:
   printf("\nMAIN MENU\nPress 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n");
   scanf("%d", &option);

   srand((unsigned)time(&t));

   guess = (rand() % maxValue + 1);

   if(option == 1)
   {
      guesses:
      printf("\nEnter Your Guess: ");
      scanf("%s", str);

      if(str[0] == 'q')
         goto menu;

      input = atoi(str);
      if(input == guess)
      {
         printf("\nCongratulations - You Won! Going back to main menu...\n");
         goto menu;
      }
      else if(input > guess)
      {
         printf("\nYour Guess was too High. Try Again.");
         goto guesses;
      }
      else if(input < guess)
      {
         printf("\nYour Guess was too Low. Try Again.");
         goto guesses;
      }
   }
   else if(option == 2)
   {
      printf("\nMax Number that can be Entered is %d\n", maxValue);
      printf("Enter a Max Number: ");
      scanf("%d", &input);

      if(input > maxValue || input < 0)
         printf("Value cannot be negative or over %d. Game Ending.", maxValue);
      else
         maxValue = input;
      goto menu;
   }
   else if(option = 3)
   {
      printf("\nGame Over. Thanks for Playing!");
   }
}