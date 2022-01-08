#include <stdio.h> 

void sub (int *x, int y){ *x = 3; y = *x + 1; } 

int main() { int a, b, z; a = 1; b = 2; sub(&a,b); z = a + b; printf ("%d",z); return 0; }
