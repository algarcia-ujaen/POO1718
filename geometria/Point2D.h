/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point2D.h
 * Author: algarcia
 *
 * Created on 19 de febrero de 2018, 11:52
 */

#ifndef POINT2D_H
#define POINT2D_H

class Point2D {
public:
    Point2D();
    Point2D ( float x, float y );
    Point2D(const Point2D& orig);
    virtual ~Point2D();
    void setY(float y);
    float getY() const;
    void setX(float x);
    float getX() const;
    Point2D& operator= (const Point2D& orig);
    bool operator== ( const Point2D& other );
    Point2D& operator+ ( const Point2D &other );
    float operator- ( const Point2D &other );
    float distanceTo ( const Point2D &other );
private:
    float _x;
    float _y;

};

#endif /* POINT2D_H */

