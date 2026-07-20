#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "utils/helps.c"

#define MAX_INPUT 200

typedef struct State State;

typedef void (*CommandHandler)(State **);

typedef struct
{
    const char *name;
    CommandHandler handler;
} Command;

struct State
{
    const char *prompt;
    Command *commands;
    int commandCount;
};

void enterCrypto(State **state);
void back(State **state);
void encrypt(State **state);
void decrypt(State **state);
void exitShell(State **state);
void openShell(void);

State RootState;
State CryptoState;

void strlower(char *str)
{
    while (*str)
    {
        *str = (char)tolower((unsigned char)*str);
        str++;
    }
}

void enterCrypto(State **state)
{
    *state = &CryptoState;
}

void back(State **state)
{
    *state = &RootState;
}

void encrypt(State **state)
{
    (void)state;
    
}

void decrypt(State **state)
{
    (void)state;

}

void exitShell(State **state)
{
    *state = NULL;
}

Command rootCommands[] =
{
    {"help", showRootHelp},
    {"crypto", enterCrypto},
    {"exit", exitShell},
};

Command cryptoCommands[] =
{
    {"help", showCryptoHelp},
    {"encrypt", encrypt},
    {"decrypt", decrypt},
    {"back", back},
};

State RootState =
{
    "CipherForge",
    rootCommands,
    sizeof(rootCommands) / sizeof(rootCommands[0])
};

State CryptoState =
{
    "CipherForge/crypto",
    cryptoCommands,
    sizeof(cryptoCommands) / sizeof(cryptoCommands[0])
};

void openShell(void)
{
    char input[MAX_INPUT];
    State *current = &RootState;

    while (current != NULL)
    {
        printf("%s> ", current->prompt);

        if (!fgets(input, sizeof(input), stdin))
            break;

        input[strcspn(input, "\n")] = '\0';
        strlower(input);

        int found = 0;

        for (int i = 0; i < current->commandCount; i++)
        {
            if (strcmp(input, current->commands[i].name) == 0)
            {
                current->commands[i].handler(&current);
                found = 1;
                break;
            }
        }

        if (!found)
        {
            printf("Unknown command.\n");
        }
    }

    printf("Goodbye!\n");
}