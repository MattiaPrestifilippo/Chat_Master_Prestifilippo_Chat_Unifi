//
// Created by matti on 19/01/2021.
#include "gtest/gtest.h"

#include "../Utente.h"

TEST(Utente, GetSetter) {
    Utente m("Mattia");
    ASSERT_EQ(m.getNominativo(), "Mattia");
    //ASSERT_EQ(m.getNominativo(), "Marco");
    m.setNominativo("Marco");
    ASSERT_EQ(m.getNominativo(), "Marco");
}

