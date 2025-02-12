#include "seuraaja.h"

Seuraaja::Seuraaja() {}

Seuraaja::Seuraaja(string n)
{
    nimi=n;
    cout << "Luotiin seuraaja " << nimi << endl;
}

Seuraaja::~Seuraaja()
{
    cout << "Seuraaja " << nimi << " destruktori" << endl;

}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string s)
{
    cout << nimi << "sai viestin: " << s << endl;
}
