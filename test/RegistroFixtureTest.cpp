//
// Created by francesco on 01/09/21.
//

#include "gtest/gtest.h"
#include "../Registro.h"
#include "../Attivita.h"
#include <wx/string.h>

class RegisterSuite : public ::testing::Test {

protected:

    virtual void setUp() {
        Attivita a( "powerlifting",12, 13, 5);
        Attivita b("Gara",21, 23, 11);
        R.setOwner("Francesco");
        R.addAttivita(a);
        R.addAttivita(b);
    }
    Registro R;
};

TEST_F(RegisterSuite, TestOwner) {
    ASSERT_EQ("Francesco", R.getOwner());
}

TEST_F(RegisterSuite, TestAddActivities) {
    ASSERT_EQ(wxString("powerlifting\n"),R.feedBack(5));
}