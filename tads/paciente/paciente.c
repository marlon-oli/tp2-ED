#include <stdlib.h>
#include <string.h>
#include "paciente.h"
#include "../exame.h"

struct paciente{
    int id, idade;
    char nome[20];
    int cpf;
    Exame* exame;
    Paciente *next;
};

Paciente* criar_paciente(int id){
    Paciente* paciente;
    paciente = (Paciente*)malloc(sizeof(Paciente));

    paciente->id = id;

    strcpy(paciente->nome, "Fulano");

    paciente->cpf = 10000000000 + id;

    paciente->idade = rand() % 

    //exame a next iniciam nulos
}

