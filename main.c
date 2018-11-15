#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "parser.h"

int main(){
  char line[] = "ls -a -l";
  char ** args = parse_args(line);
  execvp(args[0],args);
  return 0;
}
