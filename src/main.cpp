//
// Created by José Martins on 11/21/2021.
//

#include "libs.h"
#include "ilha.h"

using namespace std;

int main()
{
    Ilha* nIlha = new Ilha;

    nIlha->geraIlha();

   nIlha->mostraIlha(nIlha->getZona(), nIlha->getLinha(), nIlha->getColuna() );

    return 0;
}
