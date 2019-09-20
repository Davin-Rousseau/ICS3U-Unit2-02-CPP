// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on September 2019
// this program solves the area of a rectangle
// with user input

#include <iostream>


int main() {
    // this function calculates area
    int length;
    int width;
    int area;

    // input
    std::cout << "Enter length of rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of rectangle (mm): ";
    std::cin >> width;

    // process
    area = length*width;

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << "mm^2" << std::endl;
}
