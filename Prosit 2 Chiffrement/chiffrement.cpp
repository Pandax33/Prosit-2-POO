//
// Created by leanb on 03/11/2022.
//

#include "chiffrement.h"
#include "fstream"
using namespace std;
chiffrement::chiffrement(string message) {
    this->message = message;
}

string chiffrement::chiffrer() {
    int methode;
    cout << "Quelle methode voulez vous utiliser ? (1 Cesar / 2 XOR / 3 Melange)" << endl;
    cin >> methode;
    if(methode == 1) {
        cout << "Veillez entrer la clé pour le chiffrement Cesar" << endl;
        int cle;
        cin >> cle;
        this->modifCleCesar(cle);
        this->messageChiffre = Cesar.chiffreCesar(this->message, this->cleCesar);
        ofstream fichier;
        fichier.open("Test.txt", ios::app);
        if (fichier) {
            fichier << this->messageChiffre << endl;
        }
    }
    if(methode == 2){
        cout << "Veillez entrer la clé pour le chiffrement" << endl;
        char cle;
        cin>>cle;
        this->modifCleXOR(cle);
        this->messageChiffre = XOR.chiffreXOR(this->message,this->cleXOR);
        ofstream fichier;
        fichier.open("Test.txt", ios::app);
        if (fichier) {
            fichier << this->messageChiffre << endl;
        }


    }
    if(methode == 3){
        cout << "Veillez entrer la clé pour le chiffrement XOR" << endl;
        char cle;
        cin>>cle;
        this->modifCleXOR(cle);
        this->messageChiffre = XOR.chiffreXOR(this->message,this->cleXOR);
        cout << "Veillez entrer la clé pour le chiffrement Cesar" << endl;
        int cle2;
        cin >> cle2;
        this->modifCleCesar(cle2);
        this->messageChiffre2 = Cesar.chiffreCesar(this->messageChiffre, this->cleCesar);
        ofstream fichier;
        fichier.open("Test.txt", ios::app);
        if (fichier) {
            fichier << this->messageChiffre2 << endl;
        }

    }
    return this->messageChiffre2;
}

string chiffrement::dechiffrer() {
    int methode;
    cout << "Quelle methode voulez vous utiliser ? (1 Cesar / 2 XOR / 3 Melange)" << endl;
    cin >> methode;
    if(methode == 1){
        ifstream lecture("test.txt",ios::in);
        getline(lecture,this->messageChiffre);
        cout << "Veillez entrer la clé pour le dechiffrement Cesar" << endl;
        int cle;
        cin >> cle;
        this->modifCleCesar(cle);
        this->message = Cesar.dechiffreCesar(this->messageChiffre, this->cleCesar);
        cout<< this->message <<endl;
    }
    if(methode == 2){
        ifstream lecture("test.txt",ios::in);
        getline(lecture,this->messageChiffre);
        cout << "Veillez entrer la clé pour le dechiffrement XOR" << endl;
        char cle;
        cin >> cle;
        this->modifCleXOR(cle);
        this->message = XOR.dechiffreXOR(this->messageChiffre, this->cleXOR);
        cout<< this->message <<endl;
    }
    if(methode == 3){
        ifstream lecture("test.txt",ios::in);
        getline(lecture,this->messageChiffre);
        cout << "Veillez entrer la clé pour le dechiffrement Cesar" << endl;
        int cle2;
        cin >> cle2;
        this->modifCleCesar(cle2);
        this->messageChiffre2 = Cesar.dechiffreCesar(this->messageChiffre, this->cleCesar);
        cout << "Veillez entrer la clé pour le dechiffrement XOR" << endl;
        char cle;
        cin >> cle;
        this->modifCleXOR(cle);
        this->message = XOR.dechiffreXOR(this->messageChiffre2, this->cleXOR);
        cout<< this->message <<endl;
    }
    return this->message;
}
void chiffrement::modifCleCesar(int x){
    this->cleCesar = x;
}
void chiffrement::modifCleXOR(char x){
    this->cleXOR = {x};
}
int chiffrement::getCleCesar(void){
    return this->cleCesar;
}
char chiffrement::getCleXOR(void){
    return this->cleXOR;
}

string chiffrement::getMessage() {
    return this->message;
}
void chiffrement::modifMessage(std::string x) {
    this->message = x;
}