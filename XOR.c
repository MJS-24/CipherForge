#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void XOR(char command[],int lenght, unsigned char key){
  for(int i = 0; i < lenght; i++){
    command[i] = command[i] ^ key;
  }
}

int main(int argc, char *argv[]) {
  
  int len;
  char command[200];
  unsigned char key;

  if (argc > 1){

    key = (unsigned char)strtol(argv[1], NULL, 16);
    fgets(command, sizeof(command), stdin);

    command[strcspn(command, "\n")] = '\0';
    len = strlen(command);

    XOR(command, len, key);

    printf("Encrypted: ");

    for(int i = 0; i < len; i++){
      printf("0x%02x ", (unsigned char)command[i]);
    }

  } else {  
    printf("Enter key");
  }

  return 0;
}