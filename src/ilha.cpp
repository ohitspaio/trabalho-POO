//
// Created by Utilizador on 11/01/2022.
//
#include "libs.h"
#include "ilha.h"

using namespace std;

void Ilha::geraIlha(){
    srand(time(NULL));
    int l, c;
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
            int zonaRandomizer = rand() % 6 + 1;
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
                    cout<<"a atribuição de tipos de zona às zonas falhou";
                }
            }

        }
    }

}

void mostraIlha(Zona **zonas, int linhas, int colunas){

    for(int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << "*-------";
            if (j == (colunas - 1)) {
                cout << "*";
            }
        }
        cout << endl;
        for(int z = 0; z < 4; z++){
            for(int k = 0; k < colunas; k++){
                if(z == 0) cout << "|" << zonas[i][k].getZona();
                else if (z == 1){
                    string edificio = zonas[i][k].getEdificio();
                    string edificioTemp;
                    if(edificio == "minaf") edificioTemp = "mnF";
                    else if(edificio == "minac") edificioTemp = "mnC";
                    else if(edificio == "central") edificioTemp = "ele";
                    else if(edificio == "bat") edificioTemp = "bat";
                    else if(edificio == "fund") edificioTemp = "fun";
                    cout << "|" << edificioTemp;
                }
                else if (z == 2) cout << "|" <<
            }
        }
    }

}

