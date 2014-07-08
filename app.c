/*dynstr libraryies*/
#include "dynstr.h"
/*standard libraryies*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
  
  char* s1 = "Hello ";/*Not okay in all compilers*/
  char* s2 = "World!!!";/*Not okay in all compilers*/
  char* s3 = concatestrings(s1, s2);
  printf("s1 + j: %s\n", addCharToString(s1, 'j'));
  printf("s3: %s\n", s3);
  swap_chars(s3, 0, 4);
  printf("Swqaped s3: %s\n", s3);
  /*
  printf("%s\n", s3);

  printf("Compare strings %s and %s result: %d\n", s1, s2, compare_strings(s1, s2));

printf("Compare strings %s and %s result: %d\n", s2, s1, compare_strings(s2, s1));

printf("Compare strings %s and %s result: %d\n", "Hello", "Hallo", compare_strings("Hello", "Hallo"));

printf("Compare strings %s and %s result: %d\n", "Hello", "Hallo", compare_strings("Hello", "Hello"));

  printf("1: %s\n", s3);
  s1 = "MUHAHAHA";
  printf("2: %s\n", s3);

  s1 = concatestrings(s1, s2);
  printf("s1 + s2 in s1: %s\n", s3);
  printf("3: %s\n", s3);
  s3 = addCharToString(s3, 'J');
  s1 = concatestrings(s1, s2);
  printf("s1 + s2 in s1: %s\n", s3);

  printf("%s\n", s3);

  printf("Y/N: %d\n", doesStringContainChar(s3, 'H'));
  printf("Y/N: %d\n", doesStringContainChar(s3, 'z'));

  printf("Index of H: %d\n", positionOfChar(s3, 'H'));
  printf("Index of o: %d\n", positionOfChar(s3, 'o'));
  printf("Index of z: %d\n", positionOfChar(s3, 'z'));


   printf("Substring 2 to 7: %s\n", getSubstring(s3, 2, 3));
 

 
   char* s6 = (char *)malloc(7);//"MUHAHAHA";
   memcpy(s6, "muhahaha", 7);
 
  char* s5 = "MUHAHAHA";
  swap_chars(s6, 2, 3);
  printf("SWAP u and a: %s to %s\n", s5, s6); 
  */
  return 0;
}
