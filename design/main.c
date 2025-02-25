// Copyright (c) 2025 Ihor Chernyshev All rights reserved
//
// Created by: Ihor Chernyshev
// Created on: Feb 2025
// This program calculates the area of a circle

#include <stdio.h>
#include <math.h>

float diameter = 42;

int main() {
    // this function calculates the area of a circle
    printf("If a circle has a radius of ");
    printf("%.0f", diameter);
    printf(" mm\n");
    printf("Area is %.5f mm².\n", (M_PI * diameter));
    printf("\nDone.\n");
    return 0;
}
