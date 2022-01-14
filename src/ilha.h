//
// Created by Utilizador on 11/01/2022.
//

#ifndef TRABALHO_POO_ILHA_H
#define TRABALHO_POO_ILHA_H
#include "zonas.h"
#include "libs.h"
using namespace std;

class Ilha {
    private:
    int linhas, colunas;
    Zona **zonas;

    public:
    Ilha(){};
    void geraIlha();
    int getLinha() const;
    int getColuna() const;
    Zona** getZona() const;
    void mostraIlha(Zona **zonas, int linhas, int colunas);

};


#endif //TRABALHO_POO_ILHA_H
