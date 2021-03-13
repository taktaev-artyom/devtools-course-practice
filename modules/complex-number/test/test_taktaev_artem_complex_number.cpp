// Copyright 2021 Taktaev Artem

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Taktaev_Artem_ComplexNumberTest, dividing_throws) {
    double re = -1.0;
    double im = 2.0;

    ComplexNumber c_zero;
    ComplexNumber c(re, im);

    ASSERT_ANY_THROW(c / c_zero);
}

TEST(Taktaev_Artem_ComplexNumberTest, set_and_get_works) {
    double re = 1.0;
    double im = -2.0;

    ComplexNumber c;
    c.setRe(re);
    c.setIm(im);

    EXPECT_EQ(c.getRe(), re);
    EXPECT_EQ(c.getIm(), im);
}

TEST(Taktaev_Artem_ComplexNumberTest, copy_constructor_works) {
    double re = 2.0;
    double im = -1.0;

    ComplexNumber c(re, im);
    ComplexNumber c_copy(c);

    EXPECT_EQ(c_copy.getRe(), re);
    EXPECT_EQ(c_copy.getIm(), im);
}

TEST(Taktaev_Artem_ComplexNumberTest, masterpiece_test) {
    double re = -2.0;
    double im = 1.0;

    ComplexNumber c_set;
    c_set.setRe(re);
    c_set.setIm(im);
    ComplexNumber c_copy(c_set);
    ComplexNumber c_param(re, im);

    ASSERT_EQ(c_copy, c_param);
}
