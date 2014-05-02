/*
Copyright 2014 Lars Nielsen

This file is part of dynstr.

dynstr is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

dynstr is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with dynstr. If not, see http://www.gnu.org/licenses/.
*/

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

int positionOfChar(char* s1, char c){
  int i;
  for(i = 0; i < strlen(s1); i++){
    if((char) s1[i] == c){
      return i;
    }
  }
  return -1;
}

/*HOW to throw exception */
char* getSubstring(char* s1, int from_i, int to_i){
  char* result = malloc(to_i - from_i + 1);
  int i = 0;
  while(from_i+i <= to_i){
    result[i] = s1[from_i + i];
    i++;
  }
  return result;
}

int compare_strings(char* s1, char* s2){
  int s1_len = strlen(s1), s2_len = strlen(s2);
  
  int max_i = -1, i = 0;

  if(s1_len < s2_len){
    max_i = s1_len;
  }else{
    max_i = s2_len;
  }
  
  while(i < max_i){
    if(s1[i] == s2[i]){
      i++;
    }else if(s1[i] < s2[i]){
      return -1;
    }else{
      return 1;
    }
  }

  if(s1_len == s2_len){
    return 0;
  }else if(s1_len < s2_len){
    return -1;
  }else{
    return 1;
  }

}

void swap_chars(char* s1, int x, int y){
  char tmp = s1[x];
  s1[x]= s1[y];
  printf("%c\n", tmp);
}
/*void swap_chars(char* s1, int x, int y){
  printf("John the 1");
   char c = s1[x];
  printf("John the 2\n");
  
  printf("c[%d]: %c and c[%d]: %c\n", x, s1[x], y, s1[y]);
  s1[x] = s1[y];
  
  printf("John the 3");
  s1[y] = c;
}
*/
