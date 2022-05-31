/*
Challenge 45: Print the Byte Size of the Basic Data Types
Display the byte size of:
int, char, long, long long, double, long double
You can use the %zd format specifier or %u (unsigned)
Use sizeof operator
  
*/
  #include <stdio.h>

int main() {
  printf("Size of int: %zd bytes \n",sizeof(int));
  printf("Size of char: %zd bytes\n",sizeof(char));
  printf("Size of short: %zd bytes\n",sizeof(short));
  printf("Size of long: %zd bytes\n",sizeof(long));
  // note that sizeof takes in a variable with a space i.e. it is a operator not a function
  printf("Size of long long: %zd bytes\n",sizeof(long long));
  printf("Size of double: %zd bytes\n",sizeof(double));
  printf("Size of float: %zd bytes\n",sizeof(float));
  printf("Size of long double: %zd bytes\n",sizeof(long double));
  
  
    return 0; 
}