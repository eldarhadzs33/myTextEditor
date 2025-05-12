#include <stdio.h>
#include <unistd.h>
int main(){
  int i=0;
  char c;
  while (read(STDIN_FILENO,&c ,1 )==1 && c!='q') {
      i++; 
  }
  printf("You just typed %d characters", i);
}
