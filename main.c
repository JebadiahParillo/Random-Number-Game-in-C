/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jebad
 *
 * Created on February 5, 2020, 11:48 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * 
 */
int main(int argc, char** argv) 
{
    int difficulty = 0;
    int level = 0;
    printf("Enter level 1, 2, or 3");
    scanf("%d",&level);
    if(level = 1)
        difficulty = 100;
    if(level = 2)
        difficulty = 500;
    if(level = 3)
        difficulty = 1000;
    
    srand(time(NULL)); /*provides a random seed for the number generator*/
    int randomNum = (rand() % difficulty) + 1; /* The random number the user will try to guess */
    int num = -1;/*makes num -1 so I could be sure it entered the while loop*/
    
    /* This loop will be the main part of the game. It will run until the user enters
     the correct number */
    while(num != randomNum)
    {
        /*this prints enter a number to the screen as well as scans for the number pressed by the user and 
         then prints the number entered by the user and assigns it to the variable num*/
        printf("Enter a number: ");
        scanf ("%d", &num);
        printf("You entered: %d\n", num);
        
     /*the part of the the loop that is most important as it provides the basis of when the user types in a
      number that doesn't equal the random number that was generated then it will print too high or low based 
      on lesser then or greater then finally printing the random number and you're right when the user gets it*/   
        if (num > randomNum)
            printf("Too high\n");
        else if (num < randomNum)
            printf ("Too low\n");
        else
            printf("You've got it the random number is: %d\n", randomNum);
        
    }
}
