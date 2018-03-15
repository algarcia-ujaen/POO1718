/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SegmentComp.h
 * Author: algarcia
 *
 * Created on 13 de marzo de 2018, 10:55
 */

#ifndef SEGMENTCOMP_H
#define SEGMENTCOMP_H

#include "Point2D.h"

class SegmentComp {
public:
    SegmentComp();
    SegmentComp(const SegmentComp& orig);
    virtual ~SegmentComp();
private:
    Point2D* _start;
    Point2D* _end;
};

#endif /* SEGMENTCOMP_H */

