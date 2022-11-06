//
// Created by leanb on 03/11/2022.
//
#include "chiffrementXOR.h"
using namespace std;
string chiffrementXOR::chiffreXOR(string messageDeBase,char cle) {
    string resultat;
    for (int i = 0; i < messageDeBase.size(); i++) {
        resultat += messageDeBase[i] ^ (int(cle) + i) % 20;

    }
    return resultat;
}
string chiffrementXOR::dechiffreXOR(string messageChiffre,char cle){
    string resultat;
    for (int i = 0; i < messageChiffre.size(); i++) {
        resultat += messageChiffre[i] ^ (int(cle) + i) % 20;
    }
    return resultat;
}




