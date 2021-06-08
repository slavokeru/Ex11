// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(Train, test1) {
    Train train;
    int trainLength = 10;
    for (int i = 0; i < trainLength; ++i) {
        train.addCage();
    }
    EXPECT_EQ(trainLength, train.length());
}

TEST(Train, test2) {
    Train train;
    int trainLength = 1;
    for (int i = 0; i < trainLength; ++i) {
        train.addCage();
    }
    EXPECT_EQ(trainLength, train.length());
}

TEST(Train, test3) {
    Train train;
    int trainLength = 100;
    for (int i = 0; i < trainLength; ++i) {
        train.addCage();
    }
    EXPECT_EQ(trainLength, train.length());
}
