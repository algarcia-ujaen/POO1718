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

#include <stdexcept>

#include "Rectangle.h"

Rectangle::Rectangle(): Polygon (4), _color{0,0,0} {
}

Rectangle::Rectangle(const Rectangle& orig): Polygon ( orig ){
    for ( int i = 0; i < 3; i++ )
    {
        _color[i] = orig._color[i];
    }
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

void Rectangle::newEdge ( SegmentComp& nE )
{
    throw std::runtime_error ("asdf");
}
void newEdge ( Point2D& p1, Point2D& p2 );

