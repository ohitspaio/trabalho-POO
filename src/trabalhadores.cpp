//
// Created by José Martins on 11/21/2021.
//

#include "trabalhadores.h"
string Trabalhador::getSigla() {
    string letra = "";
    if(Emprego == "Operario"){
        letra += "O";
    }
    else if(Emprego == "Mineiro"){
        letra += "M";
    }
    else if(Emprego == "Lenhador"){
        letra += "L";
    }
    return letra;
}

