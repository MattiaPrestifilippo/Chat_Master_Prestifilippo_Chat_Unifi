//
// Created by matti on 19/01/2021.
//
#include "gtest/gtest.h"
#include "../Chat.h"


TEST(Chat, GetSetter) {
    Utente mattia("Mattia");
    Utente giulia("Giulia");
    Chat c(mattia, giulia);
    ASSERT_EQ(c.getNome().getNominativo(), mattia.getNominativo());
    //EXPECT_EQ(c.getNome().getNominativo(),"Brian");
    ASSERT_EQ(c.getDestinatario().getNominativo(), giulia.getNominativo());

}

TEST(Chat, functions) {
    Utente mattia("Mattia");
    Utente giulia("Giulia");
    Chat c(mattia, giulia);
    Messaggio msg("Ciao Come stai", mattia, giulia);
    c.inserisciMessaggio(msg);
    int n = c.numeroMessaggiNonLetti();
    ASSERT_EQ(c.numeroMessaggiNonLetti(), n);
}

