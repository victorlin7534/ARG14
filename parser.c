#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "parser.h"

char ** parse_args( char * line ){
  char **container = malloc(64);
  char *mark = line;
  int x=0;
  while(container[x] =  strsep(&mark," "))
    x++;
  return container;
} 
