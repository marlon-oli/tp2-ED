#include "filaexame.h"
#include "paciente.h"

struct filaexame{
    int count;
    Paciente *first;
    Paciente *last;
};