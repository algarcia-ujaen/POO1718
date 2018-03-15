/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Segment.h
 * Author: algarcia
 *
 * Created on 20 de febrero de 2018, 11:23
 */

#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point2D.h"

class SegmentAgg {
public:
    SegmentAgg( Point2D* start=0, Point2D* end=0 );
    SegmentAgg(const SegmentAgg& orig);
    virtual ~SegmentAgg();
    double length ();
    void moveStart ( double incX, double incY );
    void move ( double incX, double incY );
private:
    Point2D* _start;
    Point2D* _end;

};

#endif /* SEGMENT_H */

