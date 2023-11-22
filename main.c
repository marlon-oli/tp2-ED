#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //cria a lista de aparelhos, radiologistas, pacientes e fila para laudo

    //cria os aparelhos e radiologistas e adiciona em suas respectivas listas

    //cria metricas, log e patologias

    int id = 0;

    //inicializando o rand
    srand(time(NULL));

    for (int ut = 1; ut < 43201; ut++){



    //verificacao de chegada de um novo paciente
        if ((rand() % 10) < 2){
            //cria um paciente
            //cria um evento no log para chegada de paciente

            //adiciona ele na lista para exame
            //cria um evento no log para entrada do paciente na fila para exame

            //adiciona 1 ao id
            id++;
        }

    //atualiza os contadores dos radiologistas e aparelhos

    //verifica os aparelhos e se o contator estiver em 0, gera exame de acordo com as probabilidades

    //adiciona o paciente no final da fila para laudo e desatribui do aparelho em questao
    //cria um evento no log para entrada na fila de laudo

    //muda o status do aparelho para disponivel (true)

    //verifica os rediologistas e se o contador estiver em 0, gera o laudo
    //cria um evento no log do tempo total do paciente no hospital

    //desatribui o paciente do radiologista e libera memoria do paciente

    //muda o status do radiologista para disponivel(true)

    //verifica se a fila para exame esta vazia e se ha um aparelho disponivel

    //remove o primeiro paciente da lista e adiciona em um aparelho disponivel
    //cria um evento no log para saida da fila de exame

    //calculando o tempo para resultado do exame, atribui o tempo inicial e total no aparelho em questao
    //muda o status do aparelho para indisponivel (false)

    //verifica se a fila para laudo esta vazia e se ha um radiologista disponivel

    //remove o primeiro da fila para laudo e adiciona no radiologista disponivel
    //cria um evento no log para saida da fila de laudo

    //calcula o tempo para o resultado do laudo, atribui o tempo inicial e total no radiologista em questao
    //e muda o status dele para indisponivel (false)

        if ((ut % 10) == 0){
            //atualiza metricas na tela

        }

    }

    //escreve o log em um arquivo .txt

    return 0;
}
