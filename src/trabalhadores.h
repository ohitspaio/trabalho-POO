//
// Created by José Martins on 11/21/2021.
//

#ifndef POO_TRABALHADORES_H
#define POO_TRABALHADORES_H
#include "libs.h"

using namespace std;
class Trabalhador{
private:
    string emprego;
    int salario;
public:
    Trabalhador(){};
    string getSigla();
};

#endif //POO_TRABALHADORES_H
