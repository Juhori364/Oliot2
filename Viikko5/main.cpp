#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("jaakko");
    Seuraaja *B = new Seuraaja("joona");
    Seuraaja *C = new Seuraaja("Jussi");

    Notifikaattori testi;
    testi.lisaa(A);
    testi.lisaa(B);
    testi.lisaa(C);

    testi.tulosta();

    testi.poista(B);

    testi.tulosta();

    testi.postita("testi");

    delete A;
    delete B;
    delete C;

    return 0;
}
