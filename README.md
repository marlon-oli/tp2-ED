# tp2-ED

### Modelo final:

O programa consiste em simular o funcionamento de um hospital, onde exames em 5 aparelhos de raio-x são realizados e posteriormente laudados por 3 radiologistas, onde o tempo para realização das respectivas tarefas é gerado pseudo aleatoriamente entre um intervalo pré definido, assim como os resultados dos exames, que são gerados com suas respectivas probabilidades.

Durante a implementação, modelei o sistema da seguinte forma:

- Filas diferentes para exames e laudos para melhor gerenciamento das mesmas com entradas e saídas;
- Listas para referenciar aparelhos e radiologistas, que são estruturas a parte;
- Uma estrutura para salvar as métricas;
- Uma estrutura para salvar a quantidade e o tempo de laudos por patologia a fim de facilitar o cálculo das métricas;
- Uma estrutura paciente que possui as informações do mesmo e um ponteiro para o exame que será emitido, que possui o resultado e a situação (laudado ou não).

### A simulação:

No código principal, onde ocorre a siulação, as filas, listas, métricas e estruturas auxiliares são inicializadas e um loop for com 43200ut (unidades de tempo) é criado, que segue a seguinte ordem de execução a cada iteração:

- É checado a chegada de um novo paciente (20% de probabilidade):
  - Se o paciente chegou, ele é adicionado ao final da fila para exame.
- Os aparelhos são atualizados (status, timers e pacientes atuais):
  - Se um paciente sai do aparelho, ele é adicionado na fila para laudo e um exame é gerado de acordo com as respectivas probabilidades das patologias.
- Os radiologistas são atualizados (status, timers e pacientes atuais):
  - Se um paciente sai de algum radiologista, o tempo total e quantidade da respectiva patologia são atualizados, o status do exame é atualizado e a memória do paciente é liberada.
- A cada 10ut as métricas são atualizadas e mostradas na tela.

### Escolhas de implementação:

Durante a implementação imaginei referenciar os pacientes dentro das estruturas exames com um id, mas posteriormente preferi simplesmente utilizar um ponteiro para referenciar o exame do paciente, visto que cada paciente possui somente um exame, assim também sendo desnecessário criar uma estrutura somente para armazenar os exames, como uma lista de exames, por exemplo. Da mesma forma, também imaginei referenciar os pacientes nos aparelhos e radiologistas com um id, mas preferi utilizar ponteiros.

Além disso, inicialmente imaginei uma lista única, a fim de simplificar a mecânica de filas e diminuir a quantidade de estruturas, mas com isso o controle das entradas e saídas fila e a diferenciação de pacientes que esperam por exames ou laudos tornariam o gerenciamento dessa fila muito complicado, sendo assim, optei por separar as listas.

### Observações durante a exeução:

Durante a execução e com as métricas sendo atualizadas na tela, é perceptível que a média por patologia e a média geral ficam muito próximas, e além disso, a quantidade de exames laudados após o limite de tempo se mantém zerada por um bom tempo, visto que as filas estão relativamente pequenas inicialmente, mas quando 1 exame é computado nessa métrica, o número não para de crescer, possivelmente evidenciando uma fila cheia e uma ineficiência no atendimento dos radiologistas no tempo hábil estabelecido pelo hospital.
