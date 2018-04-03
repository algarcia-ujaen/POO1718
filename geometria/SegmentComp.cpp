/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SegmentComp.cpp
 * Author: algarcia
 * 
 * Created on 13 de marzo de 2018, 10:55
 */

#include "SegmentComp.h"

SegmentComp::SegmentComp(): _start ( new Point2D ()),
                            _end ( new Point2D ())
{ }

SegmentComp::SegmentComp(const SegmentComp& orig): _start (0),
                                                   _end (0)
{
   _start = new Point2D ( *(orig._start) );
   _end = new Point2D ( *(orig._end) );
}

SegmentComp::SegmentComp ( Point2D& start, Point2D& end ): _start ( start ),
                                                           _end ( end )
{ }


SegmentComp::~SegmentComp() {
    delete _start;
    _start = 0;
    delete _end;
    _end = 0;
}

