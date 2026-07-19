#include <stdio.h>
#include <string.h>

#define MAX_INPUT 200

void help()
{
    printf("\n");
    printf("========================================\n");
    printf("          CipherForge Commands          \n");
    printf("========================================\n\n");

    printf("GENERAL COMMANDS\n");
    printf("----------------------------------------\n");
    printf("  help                 Display help menu\n");
    printf("  clear                Clear terminal screen\n");
    printf("  exit                 Exit CipherForge\n\n");

    printf("CRYPTOGRAPHY COMMANDS\n");
    printf("----------------------------------------\n");
    printf("  encrypt              Encrypt plaintext data\n");
    printf("  decrypt              Decrypt encrypted data\n");
    printf("  hash                 Generate data hash\n");
    printf("  keygen               Generate encryption keys\n");
    printf("  benchmark            Test algorithm performance\n\n");

    printf("FILE OPERATIONS\n");
    printf("----------------------------------------\n");
    printf("  encrypt-file         Encrypt a file\n");
    printf("  decrypt-file         Decrypt a file\n");
    printf("  inspect              View file encryption details\n\n");

    printf("EXAMPLES\n");
    printf("----------------------------------------\n");
    printf("  encrypt aes          Encrypt using AES\n");
    printf("  decrypt rsa          Decrypt using RSA\n");
    printf("  hash sha256 file.txt Generate SHA-256 hash\n\n");

    printf("Type 'exit' to close CipherForge.\n\n");
}

void openShell(){
  
  char INPUT[MAX_INPUT];
  char BUFFER[MAX_INPUT];


  while (1){
    printf("CipherForge > ");  
    fgets(INPUT, sizeof(INPUT), stdin);
    INPUT[strcspn(INPUT, "\n")] = '\0';
    
    if (strcmp(strlwr(INPUT), "help") == 0) {
      help();
    } else if (strcmp(strlwr(INPUT), "cryptography") == 0) {
      printf("cryptography");

    } else if (strcmp(strlwr(INPUT), "exit") == 0) {
      printf("exiting");
      break;

    } else {
      printf("INVALID COMMAND");
    }
    
    
  }
}