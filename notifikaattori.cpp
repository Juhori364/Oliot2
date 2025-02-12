#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *s)
{
    if(seuraajat==nullptr){
        seuraajat=s;
        cout << "Lisatty seuraaja " << s->getNimi() << "listan alkuun" <<  endl;
    }
    else{
        Seuraaja *temp=seuraajat;
        while(temp->next!=nullptr){
            cout << "lisays loop alku" << endl;
            temp=temp->next;
        }
        temp->next=s;
        cout << "Lisatty seuraaja " << s->getNimi() << endl;
    }
}

void Notifikaattori::poista(Seuraaja *s)
{
    if(seuraajat==s){
        seuraajat=s->next;
    }
    else{
        Seuraaja *temp=seuraajat;
        while(temp->next!=s){
            temp=temp->next;
        }
        temp->next=s->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    while (alku !=nullptr){
        cout << alku->getNimi() << endl;
        alku=alku->next;
    }
}

void Notifikaattori::postita(string s)
{
    Seuraaja *alku = seuraajat;

    while (alku != nullptr){
        cout << "Listalla nyt kohdassa " << alku->getNimi();
        alku->paivitys(s);
        alku= alku->next;

    }
}
