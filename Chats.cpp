//
// Created by matti on 12/01/2021.
//

#include "Chats.h"
#include <iostream>

using namespace std;

Chats::Chats() {}

void Chats::printAll() {
    for (int i = 0; i < registroChat.size(); i++) {
        cout << "Chat Nome : " << registroChat[i].getNome().getNominativo() << endl;
        cout << "Chat destinatario : " << registroChat[i].getDestinatario().getNominativo() << endl;
        registroChat[i].leggiMessaggi();
    }
}

void Chats::inserisciMessaggio(const Messaggio &msg) {
    for (int i = 0; i < registroChat.size(); i++) {
        if (msg.getMittente() == registroChat[i].getNome() ||
            msg.getMittente() == registroChat[i].getDestinatario() ||
            msg.getDestinatario() == registroChat[i].getNome()
            || msg.getDestinatario() == registroChat[i].getDestinatario()) {
            registroChat[i].inserisciMessaggio(msg);
        }
    }
}

void Chats::printChat(const Utente &mittente, const Utente &destinatario) {
    for (int i = 0; i < registroChat.size(); i++) {
        if (registroChat[i].getNome() == mittente && registroChat[i].getDestinatario() == destinatario) {
            cout << "Chat tra " << registroChat[i].getNome().getNominativo() << " e "
                 << registroChat[i].getDestinatario().getNominativo() << endl;
            registroChat[i].leggiMessaggi();
            cout << endl;
        }
    }
}

void Chats::printChatNonLetti(const Utente &mittente, const Utente &destinatario) {

    for (int i = 0; i < registroChat.size(); i++) {
        if (registroChat[i].getNome() == mittente && registroChat[i].getDestinatario() == destinatario) {
            cout << "Chat tra " << registroChat[i].getNome().getNominativo() << " e "
                 << registroChat[i].getDestinatario().getNominativo() << endl;
            registroChat[i].leggiMessaggiNonLetti();
            cout << endl;
        }
    }
}

void Chats::printNumNonLetti(const Utente &mittente, const Utente &destinatario) {
    for (int i = 0; i < registroChat.size(); i++) {
        if (registroChat[i].getNome() == mittente && registroChat[i].getDestinatario() == destinatario) {
            cout << "Numero messaggi non letti tra " << registroChat[i].getNome().getNominativo() << " e "
                 << registroChat[i].getDestinatario().getNominativo() << " : "
                 << registroChat[i].numeroMessaggiNonLetti() << endl;

        }
    }
}

void Chats::inserisciChat(const Chat &chat) {
    registroChat.push_back(chat);
}


int Chats::numeroTotaleNonLetti() const {
    int count = 0;
    for (int i = 0; i < registroChat.size(); i++) {
        count += registroChat[i].numeroMessaggiNonLetti();
    }
    return count;
}
