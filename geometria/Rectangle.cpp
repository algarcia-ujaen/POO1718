/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.cpp
 * Author: algarcia
 * 
 * Created on 2 de abril de 2018, 12:13
 */

#include "Rectangle.h"

Rectangle::Rectangle(): Polygon (4) {
}

Rectangle::Rectangle(const Rectangle& orig) {
}

Rectangle::~Rectangle() {
}

float Rectangle::area()
{
    // Compute height
    // Compute area of triangle 0-1-2
    // Compute area of triangle 2-3-0
    // Add areas and return the result
}

