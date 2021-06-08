// Copyright 2021
#ifndef INCLUDE_TRAIN_H
#define INCLUDE_TRAIN_H

class Cage {
    bool light;
public:
    Cage* next;
    Cage* prev;
    Cage(bool isLightOn): light(isLightOn), next(nullptr), prev(nullptr) {}
    void on()  { light=true;    }
    void off() { light = false; }
    bool get() const  { return light;  }
};

class Train {
private:
    Cage* first;
    Cage* last;
public:
    Train();
    ~Train();
    void addCage();
    void printCages() const;
    int length() const;
};

#endif  // INCLUDE_TRAIN_H
