//
// Created by José Martins on 11/21/2021.
//

#include "trabalhadores.h"
string Trabalhador::getSigla() {
    string letra = "";
    if(emprego == "Operario"){
        letra += "O";
    }
    else if(emprego == "Mineiro"){
        letra += "M";
    }
    else if(emprego == "Lenhador"){
        letra += "L";
    }
    return letra;
}

