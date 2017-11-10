#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char** parse_args(char* line){
  char** args = (char**) calloc(6, sizeof(char*));
  int counter = 0;
  while(line){
    args[counter] = strsep(&line, " ");
    counter++;
  }
  return args;
}

int main(){
  char line[100] = "ls -l -a";
  char ** args = parse_args(line);
  execvp(args[0], args);
}
