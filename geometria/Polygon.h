/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Polygon.h
 * Author: algarcia
 *
 * Created on 13 de marzo de 2018, 11:20
 */

#ifndef POLYGON_H
#define POLYGON_H

#include "SegmentComp.h"

#define MAX_EDGES 10

class Polygon {
public:
    Polygon( int nEdges = 3 );
    Polygon(const Polygon& orig);
    virtual ~Polygon();
    float area ();
    void newEdge ( SegmentComp& nE );
    void newEdge ( Point2D& p1, Point2D &p2 );

private:
    SegmentComp* _edges[MAX_EDGES];
    int _nEdges;
    

};

#endif /* POLYGON_H */

