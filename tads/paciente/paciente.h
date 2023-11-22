#ifndef PACIENTE_H
#define PACIENTE_H

typedef struct paciente Paciente;

Paciente* criar_paciente(int id);

void free_paciente(Paciente*);

#endif