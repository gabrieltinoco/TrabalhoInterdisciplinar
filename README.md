LocaMais é uma locadora de veículos que tem como objetivo atender bem e fidelizar seus
clientes. A princípio a LocaMais está trabalhando apenas com locações baseadas em diárias, ou
seja, a quilometragem usada pelo cliente é livre. A locadora está localizada em diversas cidades
do estado de Minas Gerais, no entanto, a filial de Confins está com sérios problemas, pois ainda
não implantou um sistema de software para realizar seus controles e gerenciamento de locações
de veículos. Muitas vezes um cliente liga solicitando a locação de um veículo e a atendente não
consegue saber se será possível atendê-lo. Sem falar que não é possível ter um controle de
quantas locações foram feitas por um determinado cliente e premiá-lo de alguma forma. Diante
dos problemas vividos pela LocaMais, a locadora resolveu contratar uma empresa
desenvolvedora de software (vocês). Sendo assim, é necessário compreender a real necessidade
da locadora e desenvolver um software específico. A seguir foi descrito como deverá ser o
sistema, bem como suas restrições.
O sistema
Deseja-se cadastrar os clientes, os veículos e as locações da locadora. As informações que devem
ser cadastradas são:
Pontifícia Universidade Católica de Minas Gerais
CLIENTE = código, nome, endereço, telefone
LOCAÇÃO = código da locação, data de retirada, data de devolução, seguro, quantidade de dias,
código do cliente, código do veículo
VEÍCULO = código do veículo, descrição, modelo, cor, placa, valor diária, quantidade de
ocupantes, status
Considere as seguintes restrições: ** Não se esqueça de sempre validar essas restrições
Para cadastrar uma locação, primeiro é necessário que o cliente e o veículo estejam cadastrados.
As locações devem ser cadastradas apenas para veículos com status disponível, sendo que os
possíveis status para o veículo são: alugado, disponível e em manutenção. Além disso, não deve
ser feita mais de uma locação para um mesmo veículo em um mesmo período (data de retirada e
data de devolução). As locações podem ser feitas no horário comercial (de 8:00 às 18:00 horas).
1. Implemente uma função para cadastrar um cliente. Esta função deve garantir que não
haverá mais de um cliente com o mesmo código. Se quiser pode gerar o código
automaticamente.
2. Implemente uma função para cadastrar um veículo. Esta função deve garantir que não
haverá mais de um veículo com o mesmo código. Se quiser pode gerar o código
automaticamente.
3. Implemente uma função que cadastre uma locação. Para cadastrar a locação, o sistema
deve receber do usuário o nome do cliente que deseja alugar o veículo, a data de retirada,
a data de devolução do veículo e a quantidade de ocupantes necessária. A partir disso, o
sistema deve encontrar um veículo que esteja disponível para a necessidade do cliente e
calcular a quantidade de diárias com base nas datas de retirada e devolução. O cliente
também pode contratar um seguro para o veículo alugado, caso queira. O valor do seguro
é de R$ 50,00 e será acrescido ao valor total pago pela locação do veículo.
4. Implemente uma função que dê baixa em uma determinada locação, calcule e mostre o
valor total a ser pago por um determinado cliente. Lembre-se de alterar o status do
veículo para disponível. Além disso, será necessário solicitar a data de entrega do veículo
para validar com a data de devolução prevista. Também será preciso calcular multa por
atraso, caso o cliente não entregue o veículo no dia combinado (considere como multa o
valor de 5% do valor total da locação + R$ 30,00 por dia de atraso).
5. Implemente funções para realizar pesquisas tanto por clientes quanto por veículos, ou
seja, digitando o nome ou código, respectivamente, e apresentando na tela todas as
informações do cliente ou veículo correspondente.
6. Implemente uma função que mostre na tela todas as locações de um determinado cliente
(a pesquisa deve se basear no nome ou código do cliente).
7. Implemente uma função que calcule a quantidade de pontos de fidelidade de um cliente.
Para cada dia de locação, o cliente ganhará 10 pontos no programa de fidelidade.
Lembre-se que é possível ter mais de uma locação para um mesmo cliente. Implemente
Pontifícia Universidade Católica de Minas Gerais
também uma função para pesquisar os clientes que atingiram um total de 500 pontos no
programa de fidelidade, esses clientes serão premiados e receberão um kit da LocaMais.
8. Implemente uma função extra, criada pelo grupo. Sejam criativos!
Para fazer esse programa pode ser necessário criar mais funções do que as que estão descritas.
Finalmente, faça uma função main() que teste o sistema acima. A função main() deve exibir um
menu na tela, com as opções de cadastrar um cliente, um veículo e uma locação. Além disso,
permitir realizar as pesquisas e dar baixa em locações. Este menu deve ficar em loop até o
usuário selecionar a opção SAIR. Além disso, todas as informações deverão ser
persistidas/armazenadas em arquivo(s) binários (em estruturas heterogêneas). Portanto,
deverá ser feita leitura e escrita em arquivos. Utilize bibliotecas para organizar os módulos
(funções e procedimentos) do software.
* Não é obrigatória a implementação do programa usando Orientação a Objetos, mas caso o
grupo queira usar, é permitido.
Metodologia
Este é um trabalho interdisciplinar em que você deve planejar, analisar, projetar, implementar e
testar uma solução de software para o problema apresentado utilizando o Scrum para gerenciar
seu progresso.
Inicialmente organize o backlog do produto com as funções básicas do sistema. Cada um dos
módulos (procedimentos ou funções) será de responsabilidade de um membro do grupo e será
desenvolvido em sprints de 3 a 4 dias. Seguem algumas sugestões de atividades a serem
realizadas nas sprints:
1- Definir a assinatura dos módulos (procedimentos ou funções). Reflita sobre os parâmetros de
entrada e saída do módulo e comunique aos seus colegas de projeto.
2- Documentar o módulo (procedimento ou função) indicando seu propósito, e os parâmetros de
entrada e saída. O nome do módulo deve ser escolhido sob o ponto de vista de quem o usa ou de
quem vai chamar o módulo e deve refletir o que ele faz.
3- Implementar o caso de sucesso do módulo (procedimento ou função).
4- Selecionar casos de teste para verificar o funcionamento do módulo. Um caso de teste deve
conter os valores de entrada para o módulo e a saída esperada.
5- Executar os casos de teste planejados para o módulo.
6- Criar um relatório de execução de testes que contenha os casos de teste, a saída retornada
durante sua execução e uma indicação se o módulo passou ou não no teste. Isso é feito
comparando-se a saída esperada, documentada no caso de teste, com a saída retornada durante a
execução do módulo (esperado x real).
7- Implementar os casos especiais, exceções que possam existir no módulo (procedimento ou
função). Em seguida, executar os casos de teste anteriores para garantir que as mudanças não
Pontifícia Universidade Católica de Minas Gerais
quebraram o código anterior que já funcionava. Pense também nos novos casos de teste
necessários para a nova versão do módulo (procedimento ou função).
O que deve ser entregue para os professores no Canvas
1- A evolução do backlog do produto a cada sprint. Indique quais tarefas encontravam-se
inicialmente no backlog do produto, e em qual sprint cada tarefa foi alocada, juntamente com seu
responsável.
2- A documentação das funcionalidades do software.
3- O planejamento dos casos de teste (entradas, procedimento de teste e saídas esperadas) e o
relatório de execução dos testes.
4- O código, em C, dos módulos (funções e procedimentos) em bibliotecas e do programa
principal, juntamente com o projeto completo do software.
5- Arquivos contendo dados já incluídos para teste das funcionalidades.
6- Apresentação gravada em vídeo (pitch) mostrando todas as funcionalidades do sistema.
