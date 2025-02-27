/*
* File: ica_2_24.c
* Author: Roman Warder
* Assignment: ICA 2/24 - Main Function Control
* Date: 2/24/2025
* References: N/A
*/

#include <stdio.h>

void add(int num1, int num2, int ans){
  ans = num1 + num2; 
  printf("%d \n", ans); 
}

void sub(int num1, int num2, int ans){
  ans = num1 - num2; 
  printf("%d \n", ans);
}

void div(int num1, int num2, int ans){
  ans = num1 % num2; 
  printf("%d \n", ans); 
}

void mul(int num1, int num2, int ans){
  ans = num1 * num2;
  printf("%d \n", ans); 
}



int main(int argc, char *argv[]) {
  int ans;
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);
  
  if(strcmp(argv[3], "+") == 0) {
    add(num1, num2, ans); }
  else if (strcmp(argv[3], "-") == 0) {
    sub(num1, num2, ans); }
  else if (strcmp(argv[3], "%") == 0) {
    div(num1, num2, ans); }
  else if (strcmp(argv[3], "x") == 0){
    mul(num1, num2, ans); }

}