/* Function to find the greatet common divisor of two non-negative integers */

#include <stdio.h>

// Declare function
void gcd (int, int);

int main(void) {

  // Calculate and print the gcd of several integer pairs
  gcd (150, 35);
  gcd (1026, 405);
  gcd (83, 240);
  
  return 0;
}

// Define function
void gcd (int u, int v) {
  int temp;

  // Print the Question
  printf ("The gcd of %d and %d is ", u, v);

  // Calculate gcd of u and v
  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }

  // print gcd of u and v
  printf ("%d\n", u);
}