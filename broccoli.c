#include <stdio.h>


/*
How to convert Fahrehaint into Celsius 
*/
main()
{
 int lower, upper, step;
 float fahrehaint, celsius;

 lower = 0;
 upper = 300;
 step = 10;

 fahrehaint = lower;
 while (fahrehaint <= upper) {
  celsius = (5.0/9.0)*(fahrehaint-32);
  printf("%4.0f %6.1f\n", fahrehaint, celsius);
  fahrehaint = fahrehaint + step;
 }
}

