//
// Created by Florian on 04/10/2019.
//

#ifndef MINISHELL_BUILTIN_FUNC_H
#define CMD_SIZE 128;
#define MAX_COM 10;

typedef struct {
    char *cmd;
    int cmdSize;
    char *opt;
    int optSize;
    unsigned char redirect;
    char *redirectTarget;
    unsigned char tube;
    struct Commande* target;
}Commande;
enum builtin {echo, cd, exit, getenv, setenv};

Commande* analyse_input(char ** input, int size[],int arraySize);

int ExecCommande();

int builtInEcho(char **input, int size[],int arraySize);

int builtInCd(char **input, int size[], int arraySize);

int builtInGetEnv(char **input, int size[], int arraySize);

int builtInSetEnv(char **input, int size[], int arraySize);

#define MINISHELL_BUILTIN_FUNC_H

#endif //MINISHELL_BUILTIN_FUNC_H
