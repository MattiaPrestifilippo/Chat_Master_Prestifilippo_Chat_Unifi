//
// Created by matti on 19/01/2021.
//
#include "gtest/gtest.h"
#include "../Chat.h"
Utente mattia("Mattia");
Utente giulia("Giulia");
TEST(Chat,GetSetter){
    Chat c (mattia,giulia);
    ASSERT_EQ(c.getNome().getNominativo(),mattia.getNominativo());
    //EXPECT_EQ(c.getNome().getNominativo(),"Brian");
    ASSERT_EQ(c.getDestinatario().getNominativo(),giulia.getNominativo());

}
/*TEST(Chat, functions){
    Chat c (mattia,giulia);
    Messaggio msg("Ciao Come stai",mattia,giulia);
    c.inserisciMessaggio(msg);
    ASSERT_THROW(c.leggiMessaggi(), std::out_of_range);
}

 */