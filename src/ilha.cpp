//
// Created by Utilizador on 11/01/2022.
//

#include "ilha.h"


using namespace std;

int Ilha::getColuna() const{
    return colunas;
}

int Ilha::getLinha() const{
    return linhas;
}

Zona** Ilha::getZona() const{
    return zonas;
}

void Ilha::geraIlha(){
   // srand(time(0));
    default_random_engine rEngine;
    uniform_int_distribution<int> distribution(1,6);
    int l, c, zonaRandomizer;
    string zonaRandom;
    cout << "Introduza o numero de linhas. \n";
    cin >> l;
    cout << "Introduza o numero de colunas. \n";
    cin >> c;
    linhas = l;
    colunas = c;
    zonas = new Zona*[linhas];
    for(int i = 0; i < linhas; ++i)zonas[i] = new Zona[colunas];

 //   string listaZonas[6] = {"mnt", "dsr", "pas", "flr", "pnt", "znZ"};

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
         zonaRandomizer = distribution(rEngine);
            switch(zonaRandomizer){
                case 1:
                {
                    zonaRandom = "mnt";
                    zonas[i][j].setZona(zonaRandom);

                }
                case 2:
                {
                    zonaRandom = "dsr";
                    zonas[i][j].setZona(zonaRandom);

                }
                case 3:
                {
                    zonaRandom = "pas";
                    zonas[i][j].setZona(zonaRandom);
                }
                case 4:
                {
                    zonaRandom = "flr";
                    zonas[i][j].setZona(zonaRandom);
                }
                case 5:
                {
                    zonaRandom = "pnt";
                    zonas[i][j].setZona(zonaRandom);
                }
                case 6:
                {
                    zonaRandom = "znz";
                    zonas[i][j].setZona(zonaRandom);
                }
                default:
                {
                    cout << zonaRandomizer;
                }
            }

        }
    }

}

void Ilha::mostraIlha(Zona **zonas, int linhas, int colunas){

    for(int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << "*-------";
            if (j == (colunas - 1)) {
                cout << "*";
            }
        }
        cout << endl;
        for(int z = 0; z < 4; z++) {
            for (int k = 0; k < colunas; k++) {
                if (z == 0) cout << "|" << zonas[i][k].getZona();
                else if (z == 1) {
                    string edificio = zonas[i][k].getEdificio();
                    string edificioTemp;
                    if (edificio == "minaf") edificioTemp = "mnF ";
                    else if (edificio == "minac") edificioTemp = "mnC ";
                    else if (edificio == "central") edificioTemp = "ele ";
                    else if (edificio == "bat") edificioTemp = "bat ";
                    else if (edificio == "fund") edificioTemp = "fun ";
                    else if (edificio == "nulo") edificioTemp = "    ";
                    cout << "|" << edificioTemp;
                } else if (z == 2) cout << "|" << zonas[i][k].getSiglaTrabalhadores();
                else if (z == 3) cout << "|" << zonas[i][k].getNrTrabalhadores();
                else cout << "|       ";
                if (k == (colunas - 1)) {
                    cout << "|";
                }


            }
        }

        for(int j = 0; j < colunas; j++){
            cout << "*-------";
            if(j == (colunas - 1)){
                cout <<  "*";
            }
        }

        cout << endl;
        cout << "DIA N/A" << endl;
        cout << "Quantidade de Recursos: N/A" << endl;
        int nTrab = 0;
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                nTrab += zonas[i][j].getNrTrabalhadores();
            }
        }
        cout << "Numero de Trabalhadores: " << nTrab << endl;
        cout << endl << endl;

    }

}

