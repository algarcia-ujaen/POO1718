/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point2D.cpp
 * Author: algarcia
 * 
 * Created on 19 de febrero de 2018, 11:52
 */

#include <math.h>
#include "Point2D.h"

Point2D::Point2D(): _x(0), _y(0)
{ }

Point2D::Point2D(const Point2D& orig): _x(orig._x),
                                       _y(orig._y)
{ }

Point2D::Point2D(float x, float y): _x(x), _y(y)
{ }

Point2D::~Point2D() {}

void Point2D::setY(float y) {
    this->_y = y;
}

float Point2D::getY() const {
    return _y;
}

void Point2D::setX(float x) {
    this->_x = x;
}

float Point2D::getX() const {
    return _x;
}

Point2D& Point2D::operator= (const Point2D& orig)
{
    _x = orig._x;
    _y = orig._y;
    
    return *this;
}

bool Point2D::operator== ( const Point2D& other )
{
    return ( _x == other._x ) && ( _y == other._y );
}

Point2D& Point2D::operator+ ( const Point2D &other )
{
    this->_x += other._x;
    this->_y += other._y;
    
    return (*this);
}

float Point2D::operator- ( const Point2D &other )
{
    float dX = _x - other._x;
    float dY = _y - other._y;
    
    return ( sqrt ( dX*dX + dY*dY ) );
}

float Point2D::distanceTo ( const Point2D &other )
{
    float dX = _x - other._x;
    float dY = _y - other._y;
    
    return ( sqrt ( dX*dX + dY*dY ) );
}