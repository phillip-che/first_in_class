/*
 - initialize tax percent, tax, tip percent, tip, item cost, and total bill variable 
 - initialize and assign an array menu with size 4 to the cost of each menu item
 - print menu items
 - setup random variable to a number between 0-3
 - assign cost variable to meal item with index of random variable
 - assign tax to the tax percent divided by 100 multipled by the cost of the menu item
 - assign tip to the tip percent divided by 100 multipled by the cost of the menu item
 - assign total to the sum of cost, tax, and tip
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   double menu[4], taxPercent, tipPercent, tax, tip, cost, total;
   time_t t;
   menu[0] = 9.95;
   menu[1] = 4.55;
   menu[2] = 13.25;
   menu[3] = 22.35;

   printf("MENU\n1. Salad: %.2f\n2. Soup: %.2f\n3. Sandwich: %.2f\n4. Pizza: %.2f\n", 
            menu[0], menu[1], menu[2], menu[3]);

   srand((unsigned)time(&t));

   printf("\nEnter Tax %: ");
   scanf("%lf", &taxPercent);

   printf("Enter Tip %: ");
   scanf("%lf", &tipPercent);

   int meal = (rand() % 4);

   cost = menu[meal];
   tax = (taxPercent / 100) * cost;
   tip = (tipPercent / 100) * cost;
   total = cost + tax + tip;

   printf("\nBILL\nCost: $%.2f\nTax: $%.2f\nTip: $%.2f\nTotal: $%.2f", cost, tax, tip, total);   
}