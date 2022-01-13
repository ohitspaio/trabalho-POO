#include <iostream>
#include "../inc/ilha.h"
#include "../inc/edificio.h"
#include "../inc/trabalhador.h"
#include "../inc/utils.h"

int ilha::criailha(){

}

main void(){

void readFile(  )
{
    ifstream file;
    file.open ("executarF.txt");
    string word;
    char x ;
    word.clear();

    while ( ! file.eof() )
    {
        x = file.get();

        while ( x != ' ' )
        {
            word = word + x;
            x = file.get();
        }

        cout<< word <<endl;
        word.clear();

    }
}

}