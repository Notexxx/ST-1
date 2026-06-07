// Copyright 2020 GHA Test Team
#include <gtest/gtest.h>
#include "alg.h"

// Тесты для checkPrime
TEST(CheckPrimeTest, OneIsNotPrime) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, TwoIsPrime) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrimeTest, ThreeIsPrime) {
    EXPECT_TRUE(checkPrime(3));
}

TEST(CheckPrimeTest, FourIsNotPrime) {
    EXPECT_FALSE(checkPrime(4));
}

TEST(CheckPrimeTest, LargePrime) {
    EXPECT_TRUE(checkPrime(997));  // 997 — простое число
}

TEST(CheckPrimeTest, LargeComposite) {
    EXPECT_FALSE(checkPrime(1000));  // 1000 — составное
}

// Тесты для nPrime
TEST(NPrimeTest, FirstPrime) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, SecondPrime) {
    EXPECT_EQ(nPrime(2), 3);
}

TEST(NPrimeTest, ThirdPrime) {
    EXPECT_EQ(nPrime(3), 5);
}

TEST(NPrimeTest, SixthPrime) {
    EXPECT_EQ(nPrime(6), 13);  // 2,3,5,7,11,13
}

TEST(NPrimeTest, TenthPrime) {
    EXPECT_EQ(nPrime(10), 29);
}

// Тесты для nextPrime
TEST(NextPrimeTest, NextAfterOne) {
    EXPECT_EQ(nextPrime(1), 2);
}

TEST(NextPrimeTest, NextAfterTwo) {
    EXPECT_EQ(nextPrime(2), 3);
}

TEST(NextPrimeTest, NextAfterFour) {
    EXPECT_EQ(nextPrime(4), 5);
}

TEST(NextPrimeTest, NextAfterEleven) {
    EXPECT_EQ(nextPrime(11), 13);
}

TEST(NextPrimeTest, NextAfterLarge) {
    EXPECT_EQ(nextPrime(100), 101);
}

// Тесты для sumPrime
TEST(SumPrimeTest, SumUpToTen) {
    EXPECT_EQ(sumPrime(10), 17);  // 2+3+5+7 = 17
}

TEST(SumPrimeTest, SumUpToTwo) {
    EXPECT_EQ(sumPrime(2), 0);  // чисел меньше 2 нет, сумма = 0
}

TEST(SumPrimeTest, SumUpToTwenty) {
    EXPECT_EQ(sumPrime(20), 77);  // 2+3+5+7+11+13+17+19 = 77
}

TEST(SumPrimeTest, SumUpToOneHundred) {
    EXPECT_EQ(sumPrime(100), 1060);  // известная сумма простых до 100
}