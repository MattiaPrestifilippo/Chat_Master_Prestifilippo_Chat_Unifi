//
// Created by matti on 10/01/2021.
//
#include "Chat.h"

Chat::Chat(const Utente &nome, const Utente &destinatario) : nome(nome), destinatario(destinatario) {}

Chat::Chat() {}

const Utente &Chat::getNome() const {
    return nome;
}

const Utente &Chat::getDestinatario() const {
    return destinatario;
}

void Chat::inserisciMessaggio(const Messaggio &msg) {
    if ((msg.getMittente() == nome && msg.getDestinatario() == destinatario) ||
        (msg.getMittente() == destinatario && msg.getDestinatario() == nome)) {
        chat.push_back(msg);
    }
}


void Chat::leggiMessaggi() {

    for (int i = 0; i < chat.size(); i++) {
        cout << chat[i].toString();
        chat[i].setLetto(true);
    }

}

int Chat::numeroMessaggiNonLetti() {
    int count = 0;
    for (int i = 0; i < chat.size(); i++) {
        if (!chat[i].isLetto()) {
            count++;
        }
    }
    return count;
}

void Chat::leggiMessaggiNonLetti() {
    for (int i = 0; i < chat.size(); i++) {
        if (!chat[i].isLetto()) {
            // if(chat[i].getMittente().getNominativo()!=getNome().getNominativo())
            cout << chat[i].toString();
            chat[i].setLetto(true);
        }
    }
}

bool Chat::operator==(const Chat &rhs) const {
    return nome == rhs.nome &&
           destinatario == rhs.destinatario;
}

bool Chat::operator!=(const Chat &rhs) const {
    return !(rhs == *this);
}

