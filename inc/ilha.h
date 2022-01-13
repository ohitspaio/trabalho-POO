//
// Created by José Martins on 11/21/2021.
//

#ifndef POO_ILHA_H
#define POO_ILHA_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include "zonas.h"

class zona;
class trabalhador;

class ilha{
    int dinheiro;
    int lzonas;
    int czonas;
    int dia;

    int nzonas[6];

public:
    ilha();
    ilha(int din, int lzo, int czo, int d) : dinheiro(din), lzonas(lzo), czonas(zco), dia(d){}

    vector<zona>            zonas;
    vector<trabalhador>     trabalhadores;

    void    criarilha();
    void    verilha();
    void    retornazona(int p);
    void    retornaedificio(int p);
    void    retornatrabalhadores(int p);
    void    construir();
    void    contratar();
};

#endif //POO_ILHA_H
