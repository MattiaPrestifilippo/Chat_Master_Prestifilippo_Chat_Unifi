//
// Created by matti on 28/01/2021.
//
#include "gtest/gtest.h"
#include "../Chat.h"
#include "../Chats.h"

Utente mattia("Mattia");
Utente giulia("Giulia");

TEST(Chats, functions) {
    Chat mg(mattia, giulia);
    Chat gm(mattia, giulia);
    Messaggio msg("Ciao Come stai", mattia, giulia);
    Chats cs;
    cs.inserisciChat(mg);
    cs.inserisciChat(gm);
    cs.inserisciMessaggio(msg);
    ASSERT_EQ(cs.numeroTotaleNonLetti(), 2);
    Messaggio msgs("Tutto bene tu", mattia, giulia);
    cs.inserisciMessaggio(msg);
    ASSERT_EQ(cs.numeroTotaleNonLetti(), 4);

}
