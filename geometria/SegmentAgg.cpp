/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Segment.cpp
 * Author: algarcia
 * 
 * Created on 20 de febrero de 2018, 11:23
 */

#include "SegmentAgg.h"

SegmentAgg::SegmentAgg( Point2D* start, Point2D* end ): _start (start), _end (end)
{ }

SegmentAgg::SegmentAgg(const SegmentAgg& orig): _start (orig._start),
                                       _end (orig._end)
{ }

SegmentAgg::~SegmentAgg()
{
    _start = 0;
    _end = 0;
}

double SegmentAgg::length()
{
    return ( _start->distanceTo ( *_end ) );
}
