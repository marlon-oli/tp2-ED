#include "exame.h"
#include <stdbool.h>

struct exame{
    int idpaciente; //talvez desnecessario
    bool status; //true para laudado e false para nao laudado
    char resultado[20];
};
