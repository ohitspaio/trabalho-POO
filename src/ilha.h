//
// Created by Utilizador on 11/01/2022.
//

#ifndef TRABALHO_POO_ILHA_H
#define TRABALHO_POO_ILHA_H
#include "zonas.h"
using namespace std;

class Ilha {
    private:
    int linhas, colunas;
    Zona **zonas;

    public:
    void geraIlha();
    void mostraIlha(Zona **zonas, int linhas, int colunas);

};


#endif //TRABALHO_POO_ILHA_H
