// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Nov 24, 2026
// This program asks the user to create
// a program generating five
// integers per a line using a loop
// and if statement
#include<iostream>

int main() {
    for (int counter = 1000; counter <= 2000; counter++) {
        std::cout << counter << " ";

        if ((counter - 999) % 5 == 0) {
            std::cout << std::endl;
        }
    }
