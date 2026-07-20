#include <stdio.h>
typedef struct State State;

void showRootHelp(State **state)
{

  (void)state;

  printf("\n");
  printf("========================================\n");
  printf("            CipherForge Help            \n");
  printf("========================================\n\n");

  printf("MAIN CATEGORIES\n");
  printf("----------------------------------------\n");
  printf("  crypto        Cryptography algorithms\n");
  printf("  encoding      Encoding and decoding\n");
  printf("  hashing       Hashing algorithms\n");
  printf("  file          File operations\n");
  printf("  tools         Utility tools\n\n");

  printf("GENERAL COMMANDS\n");
  printf("----------------------------------------\n");
  printf("  help          Show this help menu\n");
  printf("  clear         Clear the terminal\n");
  printf("  about         Show framework information\n");
  printf("  version       Show current version\n");
  printf("  exit          Exit CipherForge\n\n");

  printf("NAVIGATION\n");
  printf("----------------------------------------\n");
  printf("  Enter a category to access its modules.\n");
  printf("  Type 'back' to return to the previous menu.\n\n");

  printf("EXAMPLE\n");
  printf("----------------------------------------\n");
  printf("  CipherForge > crypto\n");
  printf("  CipherForge(crypto) > xor\n");
  printf("  CipherForge(crypto/xor) > encrypt\n");
  printf("  CipherForge(crypto/xor) > back\n");
  printf("  CipherForge > exit\n\n");

}

void showCryptoHelp(State **state)
{
    (void)state;

    printf("\n");
    printf("========================================\n");
    printf("          CipherForge Crypto            \n");
    printf("========================================\n\n");

    printf("CRYPTO COMMANDS\n");
    printf("----------------------------------------\n");
    printf("  encrypt       Encrypt data\n");
    printf("  decrypt       Decrypt data\n");
    printf("  back          Return to main menu\n");
    printf("  help          Show this help menu\n\n");
}