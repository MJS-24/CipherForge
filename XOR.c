#include <stdio.h>

int XOR(command, key){

}

int main(int argc, char *argv[]) {
  
  char command[200];
  unsigned char key;

  if (argc > 1){

    key = argv[1];
    fgets(command, sizeof(command), stdin);

  } else {  
    printf("Hello world");
  }


  return 0;
}