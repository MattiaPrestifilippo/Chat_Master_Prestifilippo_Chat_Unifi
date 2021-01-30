//
// Created by matti on 08/01/2021.
//

#ifndef CHAT_MASTER_PRESTIFILIPPO_UTENTE_H
#define CHAT_MASTER_PRESTIFILIPPO_UTENTE_H

#include <iostream>
#include <string>

using namespace std;

class Utente {
public:
    Utente(const string &nominativo) : nominativo(nominativo) {}

    Utente() {}


    const string &getNominativo() const {
        return nominativo;
    }

    void setNominativo(const string &nominativo) {
        Utente::nominativo = nominativo;
    }

    bool operator==(const Utente &rhs) const {
        return nominativo == rhs.nominativo;
    }

    bool operator!=(const Utente &rhs) const {
        return !(rhs == *this);
    }

private:
    string nominativo;
};


#endif //CHAT_MASTER_PRESTIFILIPPO_UTENTE_H
