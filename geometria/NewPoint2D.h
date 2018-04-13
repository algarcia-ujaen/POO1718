/**
 * @file NewPoint2D.h
 * @author algarcia
 *
 * @date 13 de abril de 2018
 */

#ifndef NEWPOINT2D_H
#define NEWPOINT2D_H

#include "Point2D.h"


template <typename T>
class NewPoint2D
{
   private:
      T _x;
      T _y;
   public:
      NewPoint2D();
      NewPoint2D ( T x, T y );
      NewPoint2D ( const NewPoint2D<T>& orig );
      virtual ~NewPoint2D ();
      void setY ( T y );
      T getY () const;
      void setX ( T x );
      T getX () const;
      NewPoint2D<T>& operator= (const NewPoint2D<T>& orig);
      bool operator== ( const NewPoint2D<T>& other );
      NewPoint2D<T>& operator+= ( const NewPoint2D<T>& other );
      T operator- ( const NewPoint2D<T>& other );
      T distanceTo ( const NewPoint2D<T>& other );
};

template <typename T>
NewPoint2D<T>::NewPoint2D(): _x(0), _y(0)
{ }

template <typename T>
NewPoint2D<T>::NewPoint2D ( T x, T y ): _x(x), _y(y)
{ }

template <typename T>
NewPoint2D<T>::NewPoint2D ( const NewPoint2D<T>& orig ): _x(orig._x), _y(orig._y)
{ }

template <typename T>
NewPoint2D<T>::~NewPoint2D ()
{ }

template <typename T>
void NewPoint2D<T>::setY ( T y )
{
   _y = y;
}

template <typename T>
T NewPoint2D<T>::getY () const
{
   return ( _y );
}

template <typename T>
void NewPoint2D<T>::setX ( T x )
{
   _x = x;
}

template <typename T>
T NewPoint2D<T>::getX () const
{
   return ( _x );
}

template <typename T>
NewPoint2D<T>& NewPoint2D<T>::operator= (const NewPoint2D<T>& orig)
{
   if ( this != &orig )
   {
      _x = orig._x;
      _y = orig._y;
   }

   return ( *this );
}

template <typename T>
bool NewPoint2D<T>::operator== ( const NewPoint2D<T>& other )
{
   bool returnValue = false;

   if ( ( this == &other ) ||
        ( ( _x == other._x ) &&
          ( _y == other._y )
        )
      )
   {
      returnValue = true;
   }

   return returnValue;
}

template <typename T>
NewPoint2D<T>& NewPoint2D<T>::operator+= ( const NewPoint2D<T>& other )
{
   this->_x += other._x;
   this->_y += other._y;

   return ( *this );
}

template <typename T>
T NewPoint2D<T>::operator- ( const NewPoint2D<T>& other )
{
    T dX = _x - other._x;
    T dY = _y - other._y;

    return ( sqrt ( dX*dX + dY*dY ) );
}

template <typename T>
T NewPoint2D<T>::distanceTo ( const NewPoint2D<T>& other )
{
    float dX = _x - other._x;
    float dY = _y - other._y;

    return ( sqrt ( dX*dX + dY*dY ) );
}

#endif   /* NEWPOINT2D_H */

