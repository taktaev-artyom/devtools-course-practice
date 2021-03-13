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

TEST(Taktaev_Artem_ComplexNumberTest, dividing_and_mult_work_in_pair) {
    ComplexNumber c1(1.2, -2.3);
    ComplexNumber c2(-0.6, 1.9);
    ComplexNumber c3 = c1 * c2 / c2;

    EXPECT_DOUBLE_EQ(c1.getRe(), c3.getRe());
    EXPECT_DOUBLE_EQ(c1.getIm(), c3.getIm());
}

TEST(Taktaev_Artem_ComplexNumberTest, both_constructors_creates_same_objects) {
    double re = -2.0;
    double im = 1.0;

    ComplexNumber c_set;
    c_set.setRe(re);
    c_set.setIm(im);
    ComplexNumber c_copy(c_set);
    ComplexNumber c_param(re, im);

    ASSERT_EQ(c_copy, c_param);
}
