//
// Created by Utilizador on 11/01/2022.
//

#ifndef TRABALHO_POO_ZONAS_H
#define TRABALHO_POO_ZONAS_H
#include "libs.h"
#include "ilha.h"
#include "edificios.h"
#include "trabalhadores.h"

using namespace std;

class Zona : public Ilha{
    string tipoZona;
    int nrTrabalhadores;
    Edificio *edificio;
    vector<Trabalhador*> trabalhadores;
    public:
    void setZona(string tipoZona);
    string getZona();
    void setEdificio(Edificio edificio);
    string getEdificio();
    string getSiglaTrabalhadores();
    void addTrabalhadores(Trabalhador* newtrabalhador);
    int getNrTrabalhadores();
};

#endif //TRABALHO_POO_ZONAS_H
