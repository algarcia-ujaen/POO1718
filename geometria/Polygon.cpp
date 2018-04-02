/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Polygon.cpp
 * Author: algarcia
 * 
 * Created on 13 de marzo de 2018, 11:20
 */

#include <stdexcept>
#include "Polygon.h"

Polygon::Polygon( int nEdges): _nEdges (nEdges)
{
    if ( _nEdges < 3 )
    {
        throw std::invalid_argument
    }
    
    for ( int i = 0; i < _nEdges; i++ )
    {
        _edges[i] = new SegmentComp();
    }
    
    for (int i = _nEdges; i < MAX_EDGES; i++) {
        _edges[i] = 0;
    }

}

Polygon::Polygon(const Polygon& orig) {
}

Polygon::~Polygon() {
}

float Polygon::area ()
{
    return (0);
}
