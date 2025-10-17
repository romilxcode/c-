//
// Created by romil on 10/17/2025.
//
#include "variableanddatatypes.h"

#include<iostream>
using namespace std;

int program_datatypes() {
    int age = 26; // int type -> it takes 4 bytes
    char grade = 'a'; // 1 bytes
    float Pi = 3.14f; // 4 bytes

    bool isSafe = false; // 1 bytes
    double price = 100.99; // 8 bytes
    cout << isSafe << endl; // true -> 1 & false -> 0
    return 0;
}