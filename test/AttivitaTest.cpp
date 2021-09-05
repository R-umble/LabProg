//
// Created by francesco on 01/09/21.
//

#include "gtest/gtest.h"
#include "../Attivita.h"

TEST(Attivita, Costruttore){
    Attivita a("test",15,24,18);
    ASSERT_EQ("test", a.getDescrizione());
    ASSERT_EQ(15, a.getInizio());
    ASSERT_EQ(24, a.getFine());
    ASSERT_EQ(18, a.getGiorno());
}