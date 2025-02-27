/*
* File: hw6_roman_warder
* Author: Roman Warder
* Assignment: Recursive Matrix
* Date: 2/12/2025
* References: 
    Geeks for Geeks: 'C Recursion'
          https://www.geeksforgeeks.org/c-recursion/
    Prigramiz: 'C Recursion'
          https://www.programiz.com/c-programming/c-recursion
*/
#include <stdio.h>
void matrix(int num, int mat[100][100], int i, int j);

int main() { 
  int num;              // Initializes User Input
  int in = 1;
  while(in != 0) {                              // Error checking loop       
    printf("Please input a whole integer: ");   // Asks for user input
    scanf("%d", &num); 
    if(num >= 1 && num <= 100) {
      in = 0; }                    // Exits loop with valid input
    else {
      printf("ERROR! Input a number between 1-100: "); }  
  }
  
  int mat[100][100] = {0};        // Matrix declaration of 100x100
  matrix(num, mat, 0, 0);         // Calls matrix function and initializes i and j as 0
  int i;
  int j;
  return 0;
}

void matrix(int num, int mat[100][100], int i, int j) {
 
  if(i >= num) {        // Ends the program when the rows are the same as the user input
    return; }
    
  if(j <= i) {                      
    mat[i][j] = j + 1;             // Adds columns until 1 longer than rows
    printf("%d ", mat[i][j]);      // Prints matrix up to that point
    matrix(num, mat, i, j + 1); }  // Recusion elemnt repeats with 1 added columns
  else {
    printf("\n");                  // Returns 1 row and starts new line (triangle shape)
    matrix(num, mat, i + 1, 0); }  // When columns i<j, adds another row and repeats
}  


