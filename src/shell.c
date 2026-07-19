#include <stdio.h>
#include <string.h>

#include "utils/info.c"

#define MAX_INPUT 200



void MENU_crypto(void) {

}

void EXIT_SHELL(void) {
  printf("exitting CypherForge..");
}

typedef struct
{
  const char *name;
  void (*handler)(void);
} Command;

void openShell()
{

  Command commands[] = {
      {"help", showhelp},
      {"crypto", MENU_crypto}
      {"exit", EXIT_SHELL},
  };

  const int NUM_COMMANDS = sizeof(commands) / sizeof(commands[0]);

  char INPUT[MAX_INPUT];
  char BUFFER[MAX_INPUT];

  while (1)
  {
    printf("CipherForge > ");
    fgets(INPUT, sizeof(INPUT), stdin);
    INPUT[strcspn(INPUT, "\n")] = '\0';

    strlwr(INPUT);

    int found = 0;

    for (int i = 0; i < NUM_COMMANDS; i++)
    {

      if (strcmp(INPUT, commands[i].name) == 0)
      {
        commands[i].handler();
        found = 1;

        if (strcmp(INPUT, "exit") == 0)
        {
          return;
        }
        break;
      }
    }

    if (!found)
    {
      printf("Unknown command. Type 'help'. \n");
    }
  }
}