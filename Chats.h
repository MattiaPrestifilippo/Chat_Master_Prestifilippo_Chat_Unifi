//
// Created by matti on 12/01/2021.
//

#ifndef CHAT_MASTER_PRESTIFILIPPO_CHATS_H
#define CHAT_MASTER_PRESTIFILIPPO_CHATS_H

#include <iostream>
#include <vector>
#include "Messaggio.h"
#include "Utente.h"
#include "Chat.h"

using namespace std;

class Chats {
public:
    Chats();

    void printAll();

    void inserisciMessaggio(const Messaggio &msg);

    void inserisciChat(const Chat &chat);

    void printChat(const Utente &mittente, const Utente &destinatario);

    void printChatNonLetti(const Utente &mittente, const Utente &destinatario);

    void printNumNonLetti(const Utente &mittente, const Utente &destinatario);

    int numeroTotaleNonLetti();

private:
    std::vector<Chat> registroChat;
};


#endif //CHAT_MASTER_PRESTIFILIPPO_CHATS_H
