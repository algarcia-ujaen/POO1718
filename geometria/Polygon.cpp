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
        throw std::invalid_argument ( "Polygon::Polygon: wrong number of edges" );
    }

    for ( int i = 0; i < _nEdges; i++ )
    {
        _edges[i] = new SegmentComp();
    }

    for (int i = _nEdges; i < MAX_EDGES; i++) {
        _edges[i] = 0;
    }

}

Polygon::Polygon(const Polygon& orig): _nEdges ( orig._nEdges )
{
    int i;

    for ( i = 0; i < _nEdges; i++ )
    {
        _edges[i] = new SegmentComp ( *(orig._edges[i]) );
    }

    for ( ; i < MAX_EDGES; i++ )
    {
        _edges[i] = 0;
    }
}

Polygon::~Polygon() {
    for ( int i = 0; i < _nEdges; i++ )
    {
        delete _edges[i];
        _edges[i] = 0;
    }
}

float Polygon::area ()
{
    return (0);
}

void Polygon::newEdge ( SegmentComp& nE )
{
    if ( _nEdges >= MAX_EDGES )
    {
        throw std::length_error (".....");
    }

    _edges[_nEdges] = new SegmentComp ( nE );
    _nEdges++;
}

void Polygon::newEdge ( Point2D& p1, Point2D &p2 )
{
    _edges[_nEdges] = new SegmentComp ( p1, p2 );
    _nEdges++;
}

bool Polygon::operator> ( Polygon& other )
{
    return ( this->area() > other.area() );
}

Polygon& Polygon::operator = (Polygon& other)
{
   if ( this != &other )
   {

   }
}
