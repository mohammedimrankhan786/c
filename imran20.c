
#include <stdio.h>
#include<conio.h> 
int main()
{
  int Number, i = 1; 
  long Factorial = 1;
 
  printf("\n Please Enter any number to Find Factorial\n");
  scanf("%d", &Number);
 
  while (i <= Number)
   {
     Factorial = Factorial * i;
     i++;
   }
  printf("Factorial of %d = %d\n", Number, Factorial);
 
  getch();
}


