//
// Created by matti on 08/01/2021.
//

#ifndef CHAT_MASTER_PRESTIFILIPPO_MESSAGGIO_H
#define CHAT_MASTER_PRESTIFILIPPO_MESSAGGIO_H

#include <iostream>
#include <ctime>
#include "Utente.h"
#include <string>

using namespace std;

class Messaggio {
public:
    Messaggio(const string &testo, const Utente &mittente, const Utente &destinatario, bool letto = false) : testo(
            testo),
                                                                                                             mittente(
                                                                                                                     mittente),
                                                                                                             destinatario(
                                                                                                                     destinatario),
                                                                                                             letto(letto) {
        tempoInvio = time(nullptr);
    }

    Messaggio() {
        setLetto(false);
        time(&tempoInvio);
    }

    const string &getTesto() const {
        return testo;
    }

    void setTesto(const string &testo) {
        Messaggio::testo = testo;
    }

    bool isLetto() const {
        return letto;
    }

    void setLetto(bool letto) {
        Messaggio::letto = letto;
    }

    time_t getTempoInvio() const {
        return tempoInvio;
    }

    void setTempoInvio(time_t tempoInvio) {
        Messaggio::tempoInvio = tempoInvio;
    }

    const Utente &getMittente() const {
        return mittente;
    }

    void setMittente(const Utente &mittente) {
        Messaggio::mittente = mittente;
    }


    const Utente &getDestinatario() const {
        return destinatario;
    }

    void setDestinatario(const Utente &destinatario) {
        Messaggio::destinatario = destinatario;
    }

    bool operator==(const Messaggio &rhs) const {
        return testo == rhs.testo &&
               mittente == rhs.mittente &&
               destinatario == rhs.destinatario;
    }

    bool operator!=(const Messaggio &rhs) const {
        return !(rhs == *this);
    }

    string toString() {
        string s = "Mittente : " + getMittente().getNominativo() + "\n" + "Destinatario : " +
                   getDestinatario().getNominativo() + "\nTesto : " + getTesto() + "\n" + "Orario : " +
                   std::asctime(std::localtime(&tempoInvio)) + "\n";
        return s;
    }

private:
    string testo;
    Utente mittente;
    Utente destinatario;
    bool letto;
    time_t tempoInvio;
};


#endif //CHAT_MASTER_PRESTIFILIPPO_MESSAGGIO_H
