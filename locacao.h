#ifndef LOCACAO_H
#define LOCACAO_H

struct Locacao {
    char codigoLocacao[10];
    char dataRetirada[11];
    char dataDevolucao[11];
    int seguro;
    int quantidadeDias;
    char codigoCliente[10];
    char codigoVeiculo[10];
};


#endif // LOCACAO_H