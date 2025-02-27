/* Roman Warder */
#include <stdio.h>
void calc(int num1, int num2);
int main() {
  int num1, num2;
  printf("Please input 2 numbers: \n");
  scanf("%d%d", &num1, &num2);
  calc(num1, num2);
}

void calc(int num1, int num2) {
  if(num1 % 2 == 0 || num2 % 2 == 0) {
    printf("True \n"); }
  else if(num1 % 2 == 1 && num2 % 2 == 1) {
    printf("False \n"); }
}
