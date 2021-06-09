// Copyright 2021
#include "train.h"
#include <iostream>

Train::Train() {
    first = nullptr;
    last = nullptr;
}

void Train::addCage() {
    if (!first) {
        first = new Cage(std::rand() % 2);
        last = first;
        first->next = last;
        first->prev = last;
    } else {
        Cage* newCage = new Cage(std::rand() % 2);
        last->next = newCage;
        newCage->next = first;
        newCage->prev = last;
        first->prev = newCage;
        last = newCage;
    }
}

void Train::printCages() const {
    int i = 1;
    Cage* tmp = first;
    while (tmp != last) {
        std::cout << "The cage #" << i++ << " with light is "
        << ((tmp->get()) ? "on" : "off")
                  << std::endl;
        tmp = tmp->next;
    }
    std::cout << "The cage #" << i++ << " with light is "
        << ((tmp->get()) ? "on" : "off")
              << std::endl;
}

int Train::length() const {
    int length = 1;
    Cage* tmp = first;
    tmp->on();
    while (true) {
        for (int i = 0; i < length; ++i) {
            tmp = tmp->next;
            tmp->off();
        }
        for (int i = 0; i < length; ++i) {
            tmp = tmp->prev;
        }
        if (!tmp->get()) {
            return length;
        } else {
            length++;
        }
    }
}

Train::~Train() {
    int len = length();
    for (int i = 0; i < len; ++i) {
        Cage* tmp = first->next;
        delete first;
        first = tmp;
    }
}
