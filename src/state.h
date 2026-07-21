#ifndef STATE_H
#define STATE_H

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

#endif