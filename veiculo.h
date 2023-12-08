#ifndef VEICULO_H
#define VEICULO_H

struct veiculo{
    char codigoDoVeiculo[10];
    char descricao[150];
    char modelo[50];
    char cor[20];
    char placa[10];
    double valorDiaria;
    int quantDeOcupantes;
    char status[15];
};


#endif // VEICULO_H