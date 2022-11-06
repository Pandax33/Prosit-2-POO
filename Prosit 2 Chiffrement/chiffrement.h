//
// Created by leanb on 03/11/2022.
//

#ifndef PROSIT_2_CHIFFREMENT_CHIFFREMENT_H
#define PROSIT_2_CHIFFREMENT_CHIFFREMENT_H
#include "chiffrementXOR.h"
#include "chiffrementCesar.h"
using namespace std;

class chiffrement {
private:
    string message;
    int cleCesar;
    char cleXOR;
    string messageChiffre;
    string messageChiffre2;
public:
    chiffrement(string);
    string chiffrer();
    void modifCleCesar(int);
    void modifCleXOR(char);
    int getCleCesar(void);
    char getCleXOR(void);
    string getMessage(void);
    void modifMessage(string);
    string dechiffrer();
    chiffrementXOR XOR;
    chiffrementCesar Cesar;
};


#endif //PROSIT_2_CHIFFREMENT_CHIFFREMENT_H
