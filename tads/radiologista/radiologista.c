#include <stdbool.h>
#include "radiologista.h"
#include "../paciente/paciente.h"

struct radiologista{
    Paciente* pacienteatual;
    bool status;
    int tempoinicial;
    int tempototal;
    Radiologista *next;
};