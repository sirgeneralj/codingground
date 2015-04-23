#include <stdio.h>
/*Coding by Jackson C.
Mostly copied from Mr. Malady
Stack overflow also used*/
int main()
{
    //22/04/15
    printf("\n\nLove and Time\n");
    printf("\nOnce upon a time, there was an island where\n");
    printf("\nall the feelings lived: Happiness, Sadness, \n");
    printf("\nKnowledge, and all the others, including\n");
    printf("\nLove. One day it was announced to the feelings\n");
    printf("\nthat the island would sink, so all constructed\n");
    printf("\nboats and left, except for love\n");
    
    int a=15;
    printf("Hello, my name is John Doe and your age is ");
    printf("%d", a);
    printf(" \n");
    
    int x = 42;
    int y = 173;
    
    int z = x+y;
    printf("\nThe sum of %d", x);
    printf(" and %d", y);
    printf(" is %d", z);
    printf("!!\n");
    int f = x*y;
    printf("\nThe product of %d", x);
    printf(" and %d", y);
    printf(" is %d", f);
    printf("!!\n");
    
    //23/04/15 (Input)
    int no;
    char na[5]; // Is an array of character values
    printf("Please input a integer value: ");
    scanf("%d", &no); //Entry for number
    printf("\n Please input your first name: ");
    scanf("%s", na); // Entry for name
    printf("\n Hello %s", na);
    printf(" You picked the number %d", no);
    printf("\n");
    
    return 0;
}
