  
/*
* File: hw4_roman_warder
* Author: Roman Warder
* Assignment: Autopilot Sim Game
* Date: 1/29/2025
* References: 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int redo = 1;
  // Inital Conditions
  do {
    int out = 0;
    int second_des = 10;
    int path = rand() % 20 + 50; 
    int elevation = 36000;
    int end = 0;
    int start = 0;
    printf("The margin of error for the flight path is 5 feet \n");
    
    while(start == 0) {
      while (end == 0 && second_des > 0) {
        // Random Distance From Flight Path
        printf("Your distance from the flight path is %d feet. \n", path);
  
        // Initializing the the Repeating Inputs
        while(out == 0) {
          // Presenting flight choice  
          int choice =0 ;
          printf("Would you like to stay on your current path (1.Yes or 2.No) \n");
            scanf("%d", &choice);
          sleep(1);
          // Stay on path
          int incr = rand() % 24 + 1;
          if(choice == 1) {
            second_des--;
            printf("\nSeconds to destination: %d \n", second_des);
            path = path + incr; 
            printf("You are now %d feet from the flight path. \n", path); 
            if (second_des ==  0) {
              out = 1;
              end = 1;
              start = 1; }
            }
          // Change Path
          else {
            second_des--;
            printf("\nSeconds to destination: %d \n", second_des);
            path = path - incr;
            printf("You are now %d feet from the flight path. \n", path); }
          
          if (second_des ==  0) {
            out = 1;
            end = 1;
            start = 1; } 
        } 
      }
    }
      // Game Results
      if(second_des <= 0 && abs(path) > 5) {
        printf("\nYou are to far from the flight path. \nGame Over\n"); }
      else if(second_des <= 0 && abs(path) <= 5) {
        printf("\nYou Win!\nYou are within the margin of error. "); } 
      
      printf("Would you like to play again? (1.Yes 2.No) \n");
      scanf("%d", &redo);
  }
      // 
      while(redo == 1); {
        printf("Thanks for playing! \n"); }
  
}