#include "dynstr.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* concatestrings(char* s1, char* s2){
  char* result = malloc(strlen(s1) + strlen(s2) + 1);
  int i = 0; 
  int j; 
  for(j = 0; j < strlen(s1); j++){
    result[i] = s1[j];
    i++;
  }
  for(j = 0; j < strlen(s2); j++){
    result[i] = s2[j];
    i++;
  }
  result[i] = '\0';
  return result;
}

char* addCharToString(char* s1, char c){
  char* result = malloc(strlen(s1) + 1 + 1);
  int i = 0, j;
  for(j = 0; j < strlen(s1); j++){
    result[i] = s1[j];
    i++;
  }
  result[i] = c;
  i++;
  result[i] = '\0';
  return result;
}

int doesStringContainChar(char* s1, char c){
  int i;

  for(i = 0; i < strlen(s1); i++){
    if((char)s1[i] == c){
      return 1;
    }
  }
  return 0;
}

int posisitonOfChar(char* s1, char c){
  int i;
  for(i = 0; i < strlen(s1); i++){
    if((char) s1[i] == c){
      return i;
    }
  }
  return -1;
}
