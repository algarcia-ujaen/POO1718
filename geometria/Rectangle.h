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
    void newEdge ( SegmentComp& nE );
    void newEdge ( Point2D& p1, Point2D& p2 );
private:
    int _color[3];
};

#endif /* RECTANGLE_H */

