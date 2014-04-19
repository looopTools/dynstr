#include <stdio.h>
#include "dynstr.h"

int main(void){
  
  char* s1 = "Hello ";
  char* s2 = "World!!!";
  char* s3 = concatestrings(s1, s2);

  printf("%s\n", s3);

  s3 = addCharToString(s3, 'J');

  printf("%s\n", s3);

  printf("Y/N: %d\n", doesStringContainChar(s3, 'H'));
  printf("Y/N: %d\n", doesStringContainChar(s3, 'z'));

  printf("Index of H: %d\n", posisitonOfChar(s3, 'H'));
  printf("Index of o: %d\n", posisitonOfChar(s3, 'o'));
  printf("Index of z: %d\n", posisitonOfChar(s3, 'z'));

  return 0;
}
