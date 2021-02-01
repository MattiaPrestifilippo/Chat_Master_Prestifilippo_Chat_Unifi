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

bool Chat::inserisciMessaggio(const Messaggio &msg) {
    if ((msg.getMittente() == nome && msg.getDestinatario() == destinatario) ||
        (msg.getMittente() == destinatario && msg.getDestinatario() == nome)) {
        chat.push_back(msg);
        return true;
    } else {
        return false;
    }

}


void Chat::leggiMessaggi() {
    int i = 0;
    for (i = 0; i < chat.size(); i++) {
        /* if(i>=chat.size()+1){
             throw std::out_of_range("ciao");
         }*/
        cout << chat[i].toString();
        chat[i].setLetto(true);
    }


}

int Chat::numeroMessaggiNonLetti() const {
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

int Chat::numeroMessaggi() const {
    int count = 0;
    for (int i = 0; i < chat.size(); i++) {
        count++;
    }
    return count;
}

