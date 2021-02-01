//
// Created by matti on 19/01/2021.
//
#include "gtest/gtest.h"
#include "../Chat.h"


TEST(Chat, GetSetter) {
    Utente mattia("Mattia");
    Utente giulia("Giulia");
    Chat c(mattia, giulia);
    ASSERT_EQ(c.getNome().getNominativo(), "Mattia");
    //EXPECT_EQ(c.getNome().getNominativo(),"Brian");
    ASSERT_EQ(c.getDestinatario().getNominativo(), "Giulia");


}

TEST(Chat, functions) {
    Utente mattia("Mattia");
    Utente giulia("Giulia");
    Utente Marco("Marco");
    Utente Matteo("Matteo");
    Messaggio msga("Ciao Come stai", Marco, Matteo);
    Chat c(mattia, giulia);
    Messaggio msg("Ciao Come stai", mattia, giulia);
    c.inserisciMessaggio(msg);
    ASSERT_EQ(c.numeroMessaggiNonLetti(), 1);
    c.leggiMessaggiNonLetti();
    ASSERT_EQ(c.numeroMessaggiNonLetti(), 0);
    Messaggio msgs("bene", mattia, giulia);
    c.inserisciMessaggio(msgs);
    ASSERT_EQ(c.numeroMessaggiNonLetti(), 1);
    ASSERT_EQ(c.numeroMessaggi(), 2);
    ASSERT_EQ(c.inserisciMessaggio(msga), false);
    //ASSERT_THROW(c.leggiMessaggi(),std::out_of_range);


}

