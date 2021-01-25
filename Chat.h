//
// Created by matti on 10/01/2021.
//

#ifndef CHAT_MASTER_PRESTIFILIPPO_CHAT_H
#define CHAT_MASTER_PRESTIFILIPPO_CHAT_H
#include <iostream>
#include <vector>
#include "Messaggio.h"
#include "Utente.h"
using namespace std;

class Chat {
public:
    Chat(const Utente &nome, const Utente &destinatario);
    Chat();
    virtual ~Chat();

    const Utente &getNome() const;

    const Utente &getDestinatario() const;

    const vector<Messaggio> &getChat() const;
    void inserisciMessaggio(const Messaggio &msg);
    void inserisciMessaggioInviati(const Messaggio& msg);
    void inserisciMessaggiArrivo(const Messaggio& msg);
    void leggiMessaggi();
    void leggiMessaggiNonLetti();

    bool operator==(const Chat &rhs) const;

    bool operator!=(const Chat &rhs) const;

private:
    Utente nome;
    Utente destinatario;
    std::vector<Messaggio> chat;
};


#endif //CHAT_MASTER_PRESTIFILIPPO_CHAT_H
