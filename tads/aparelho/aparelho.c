#include "aparelho.h"
#include "../paciente/paciente.h"
#include <stdbool.h>

struct aparelho{
    bool status;
    Paciente* pacienteatual;
    int tempoinicial;
    int tempototal;
    Aparelho *next;
};