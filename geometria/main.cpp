/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: algarcia
 *
 * Created on 19 de febrero de 2018, 11:46
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
#include "Point2D.h"
#include "SegmentComp.h"

using std::cout;

float distance ( const Point2D& one, const Point2D& other )
{
    float dX = one.getX() - other.getX();
    float dY = one.getY() - other.getY();
    
    return ( sqrt ( dX*dX + dY*dY ) );
}

/*
 * 
 */
int main(int argc, char** argv) {
//    Point2D p1 (3,4), p2 (4,1), p3 (5,5);
//    
//    cout << "Distance from p1 to p2: " << p1 - p2 << std::endl;
//    cout << "Distance from p1 to p2: " << p1.distanceTo (p2) << std::endl;
//    cout << "Distance from p1 to p2: " << distance ( p1, p2 ) << std::endl;
//
    SegmentComp s1;
    SegmentComp s2 (s1);

    return 0;
}

