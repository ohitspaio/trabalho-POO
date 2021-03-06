//
// Created by Utilizador on 11/01/2022.
//


#include "zonas.h"
#include "libs.h"
using namespace std;

void Zona::setZona(string tipoZona) {
    this->tipoZona = tipoZona;
}
string Zona::getZona(){
    return tipoZona;
}
void Zona::setEdificio(Edificio edificio){
    this->edificio->tipoEdificio = edificio.tipoEdificio;
}
string Zona::getEdificio(){
    if(edificio== nullptr)
        return "nulo";
    return edificio->tipoEdificio;
}
string Zona::getSiglaTrabalhadores() {
    string sigla = "";
   for(int i = 0; i < trabalhadores.size(); i++){
       sigla += trabalhadores[i]->getSigla();
   }
   return sigla;
}

void Zona::addTrabalhadores(Trabalhador* newtrabalhador){
    trabalhadores.push_back(newtrabalhador);
}

int Zona::getNrTrabalhadores() {
    return trabalhadores.size();
}