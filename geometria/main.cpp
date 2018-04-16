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
#include "Polygon.h"
#include "templates.h"
#include "NewPoint2D.h"
#include "NewSegmentComp.h"

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
   // Declaring objects with "regular" classes
   Point2D pt1, pt2;

   // Declaring objects with class templates
   NewPoint2D<float> pt3, pt4;

   // Allocating objects in dynamic memory:
   NewPoint2D<float> *ptrP5 = new NewPoint2D<float> ();

   pt1.setX (3.5);
   pt1.setY (4.3);

   pt3.setX (5.7);
   pt3.setY (8.8);

   cout << pt3.distanceTo (pt4);

   ptrP5->setX (10);
   ptrP5->setY (5.3);

   // Declaring objects with "regular" classes
   SegmentComp s1;
   SegmentComp s2 (s1);

   // Declaring objects with class templates
   NewSegmentComp<Point2D> st1;

      // it is necessary to have a blank between the two ">" signs, in order
      // to distinguish them from the ">>" operator
   NewSegmentComp< NewPoint2D<float> > st2;

   // Allocating objects in dynamic memory:
   NewSegmentComp< NewPoint2D<float> > *pSt3 = new NewSegmentComp< NewPoint2D<float> > ();

   Polygon p1;
   Polygon p2;
   Polygon p3 = max ( p1, p2 );

   delete ptrP5;
   ptrP5 = 0;

   delete pSt3;
   pSt3 = 0;

   return 0;
}

