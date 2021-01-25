//
// Created by matti on 08/01/2021.
//

#ifndef CHAT_MASTER_PRESTIFILIPPO_MESSAGGIO_H
#define CHAT_MASTER_PRESTIFILIPPO_MESSAGGIO_H
#include <iostream>
#include <ctime>
#include "Utente.h"


using namespace std;
class Messaggio {
public:
    Messaggio(const string &testo, const Utente &mittente, const Utente &destinatario, bool letto= false) : testo(testo),
                                                                                                     mittente(mittente),
                                                                                                     destinatario(
                                                                                                             destinatario),
                                                                                                     letto(letto)
                                                                                                     {
                                                                                                         currentTime=time(nullptr);
                                                                                                     }

    Messaggio()
    {
        setTesto(NULL);
        setLetto(false);
        time(&currentTime);
    }


    virtual ~Messaggio() {
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

    time_t getCurrentTime() const {
        return currentTime;
    }

    void setCurrentTime(time_t currentTime) {
        Messaggio::currentTime = currentTime;
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

    void print(){
        cout<<"Mittente : "<<getMittente().getNominativo()<<endl;
        cout<<"Testo : "<<getTesto()<<endl<<"Orario : "<<std::asctime(std::localtime(&currentTime));
        cout<<"Destinatario : "<<getDestinatario().getNominativo()<<endl<<endl;
        letto=true;
    }
private:
    string testo;
    Utente mittente;
    Utente destinatario;
    bool letto;
    time_t currentTime;
};


#endif //CHAT_MASTER_PRESTIFILIPPO_MESSAGGIO_H
