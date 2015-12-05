#include <stdio.h>

/*
Fahrehaint Celsius 
*/
main()
{
 int lower, upper, step;
 float fahr, celsius;

 lower = 0;
 upper = 300;
 step = 10;

 fahr = lower;
 while (fahr <= upper) {
  celsius = (5.0/9.0)*(fahr-32);
  printf("%4.0f %6.1f\n", fahr, celsius);
  fahr = fahr + step;
 }
}

