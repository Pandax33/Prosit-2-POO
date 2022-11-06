//
// Created by leanb on 03/11/2022.
//
#include <iostream>
#include "chiffrementCesar.h"
using namespace std;
int transformeASCII(char lettre){
    int resultat;
    resultat = int(lettre);
    return resultat;
}
char transformeLettre(int chiffre){
    char resultat;
    resultat = (char)chiffre;
    return resultat;
}

string chiffrementCesar::chiffreCesar(string messageDeBase,int cle) {
    char tempo;
    int tempo2;
    string resultat;
    for(int i = 0; i< messageDeBase.size();i++){
        tempo2 = transformeASCII(messageDeBase[i]);
        tempo2 = tempo2 + cle;
        tempo= transformeLettre(tempo2);
        resultat += tempo;
    }
    return resultat;
};

string chiffrementCesar::dechiffreCesar(string messageCode,int cle){
    char tempo;
    int tempo2;
    string resultat;
    for(int i = 0; i< messageCode.size();i++){
        tempo2 = transformeASCII(messageCode[i]);
        tempo2 = tempo2-cle;
        tempo = transformeLettre(tempo2);
        resultat += tempo;
    }
    return resultat;
}

