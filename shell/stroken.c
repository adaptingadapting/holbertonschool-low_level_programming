
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main() {
  int i = 0;
  char delim[] = {" \n:\t"};
  char *token[80];
  char user_input[80];
  printf("$");
  fgets(user_input, sizeof(user_input), stdin);
  token[0] = strtok(user_input, delim);
  while (token[i] != NULL)
    {
    i++;
    token[i] = strtok(NULL, delim);
    }
  printf("token:%s", token[0]);  
  execve(token[0],token,NULL);
  return (0);
}
