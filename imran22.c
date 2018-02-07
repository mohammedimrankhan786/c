02
#include<stdio.h>
03
int
04
main ()
05
{
06
  int i;
07
  int a[10] = { 10, 55, 9, 4, 234, 20, 30, 40, 22, 34 };
08
  int max = a[0];
09
  int min = a[0];
10
 
11
  for (i = 0; i < 10; i++)
12
    {
13
      if (a[i] > max)
14
        {
15
          max = a[i];
16
        }
17
      else if (a[i] < min)
18
        {
19
          min = a[i];
20
        }
21
    }
22
  printf ("Maximum element in an array : %d\n", max);
23
  printf ("Minimum element in an array : %d\n", min);
24
 
25
  getch();
26
}




