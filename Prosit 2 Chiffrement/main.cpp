#include <iostream>
#include "chiffrement.h"
#include <fstream>
using namespace std;
string dechiffrageXOR(string messageChiffre,char cle){
    string resultat;
    for (int i = 0; i < messageChiffre.size(); i++) {
        resultat += messageChiffre[i] ^ (int(cle) + i) % 20;
    }
    return resultat;
}

int transformeASCII2(char lettre){
    int resultat;
    resultat = int(lettre);
    return resultat;
}
char transformeLettre2(int chiffre){
    char resultat;
    resultat = (char)chiffre;
    return resultat;
}
string dechiffreCesar(string messageCode,int cle){
    char tempo;
    int tempo2;
    string resultat;
    for(int i = 0; i< messageCode.size();i++){
        tempo2 = transformeASCII2(messageCode[i]);
        tempo2 = tempo2-cle;
        tempo = transformeLettre2(tempo2);
        resultat += tempo;
    }
    return resultat;
}

int main() {
    chiffrement test("Pokemon");
    test.chiffrer();
    test.dechiffrer();
    return 0;
}
