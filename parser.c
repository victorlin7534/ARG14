#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "parser.h"

char ** parse_args( char * line ){
  char **container;
  char *mark = line;
  char *head;
  while(mark){
    head = strsep(mark," ");
    *container = head;
    container++;
    head = mark;
  }
  return container;
}
