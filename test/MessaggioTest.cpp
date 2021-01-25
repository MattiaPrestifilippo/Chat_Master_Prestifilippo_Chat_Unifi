//
// Created by matti on 19/01/2021.
//
#include "gtest/gtest.h"
#include "../Messaggio.h"
#include "../Utente.h"
TEST(Messaggio,GetterSetter){
    Utente mattia("Mattia");
    Utente giulia("giulia");
    Messaggio msg("Ciao come stai",mattia,giulia);
    ASSERT_EQ(msg.getMittente().getNominativo(),mattia.getNominativo());
    ASSERT_EQ(msg.getDestinatario().getNominativo(),giulia.getNominativo());
    ASSERT_EQ(msg.getTesto(),"Ciao come stai");
    ASSERT_EQ(msg.isLetto(), false);
   //ASSERT_EQ(msg.isLetto(), true);

}
