/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.h
 * Author: algarcia
 *
 * Created on 2 de abril de 2018, 12:13
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"

class Rectangle: public Polygon {
public:
    Rectangle();
    Rectangle(const Rectangle& orig);
    virtual ~Rectangle();
    float area();
private:

};

#endif /* RECTANGLE_H */

