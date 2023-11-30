#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "tads/aparelho.h"
#include "tads/radiologista.h"
#include "tads/paciente.h"
#include "tads/filaexame.h"
#include "tads/filalaudo.h"
#include "tads/patologias.h"
#include "tads/metricas.h"

int main() {

    //cria a lista de aparelhos e radiologistas
    ListaAparelhos* lista_aparelhos = criar_lista_aparelhos();
    ListaRadiologistas* lista_radiologistas = criar_lista_radiologistas();

    //cria a fila para laudo e para exame
    FilaLaudo* fila_laudo = criar_fila_laudo();
    FilaExame* fila_exame = criar_fila_exame();

    //cria metricas, log e patologias
    Metricas* metricas = criar_metricas();
    Patologias* patologias = criar_patologias();

    int id = 0;

    //inicializando o rand
    srand(time(NULL));


    for (int ut = 1; ut < 43201; ut++){

        //verificacao de chegada de um novo paciente
        if ((rand() % 10) < 2){
            //cria um paciente
            Paciente* paciente = criar_paciente(id);

            ///cria um evento no log para chegada de paciente

            //adiciona ele na lista para exame
            entrar_fila_exame(paciente, fila_exame);

            ///cria um evento no log para entrada do paciente na fila para exame

            //adiciona 1 ao id
            id++;
        }

        //atualiza os contadores dos aparelhos e faz verificacoes para possivelmente atualizar as filas
        att_aparelhos(lista_aparelhos, fila_exame, fila_laudo, ut);

        //atualiza os contadores dos radiologistas e faz verificacoes
        att_radiologistas(lista_radiologistas, fila_laudo, patologias, metricas, ut);

        if ((ut % 10) == 0){
            //limpa a tela
            system("clear");

            //atualiza as metricas
            att_metricas(metricas, patologias);

            //printa metricas na tela
            print_metricas(metricas);

            usleep(500000);
        }
    }
    return 0;
}
