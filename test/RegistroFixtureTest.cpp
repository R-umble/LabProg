//
// Created by francesco on 01/09/21.
//

#include "gtest/gtest.h"
#include "../Registro.h"

class RegisterSuite : public ::testing::Test {

protected:

    virtual void SetUp() {
        R.setData(5);
    }
    Registro R;
};

TEST_F(RegisterSuite, TestData) {
    ASSERT_EQ(5, R.getData());
    R.setData(3);
    ASSERT_EQ(3,R.getData());
}
