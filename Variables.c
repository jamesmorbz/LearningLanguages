#include <stdio.h>

int main() {

  int numOfLoops = 12;
  float a = 0.13f;
  float b = 3;
  const char character = 'A'; // final variable basically
  char string[] = "This is a string. In C it is an array of characters.";

  printf(string);
  printf("\nThis variable \'%c\' that can't change using the \"const\" termninology!", character);
  printf("\nStart Value: %d", (int) b );

  for(int i = 0; i < numOfLoops; i++)
  {
    b += a;
  }

  printf("\nAt the end, our target float b is: %f", b);
  printf("\nRounded that is: %f\n", b);

}