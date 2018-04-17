/**
 * @file Pair.h
 * @author algarcia
 *
 * @date 17 de abril de 2018
 */

#ifndef PAIR_H
#define PAIR_H

template <typename T1, typename T2>
class Pair
{
   private:
      T1 _first;
      T2 _second;
   public:
      Pair ();
      Pair ( const Pair<T1, T2>& orig );
      Pair ( T1& first, T2& second );
      virtual ~Pair ();
      Pair<T1, T2>& operator= ( const Pair<T1, T2>& other );
      T1& first ();
      T2& second ();
};

template <typename T1, typename T2>
Pair<T1, T2>::Pair (): _first (), _second ()
{ }

template <typename T1, typename T2>
Pair<T1, T2>::Pair ( const Pair<T1, T2>& orig ): _first ( orig._first ),
                                                 _second ( orig._second )
{ }

template <typename T1, typename T2>
Pair<T1, T2>::Pair ( T1& first, T2& second ): _first (first),
                                              _second (second)
{ }

template <typename T1, typename T2>
Pair<T1, T2>::~Pair ()
{ }

template <typename T1, typename T2>
Pair<T1, T2>& Pair<T1, T2>::operator= ( const Pair<T1,T2>& other )
{
   if ( this != &other )
   {
      _first = other._first;
      _second = other._second;
   }

   return (*this);
}

template <typename T1, typename T2>
T1& Pair<T1, T2>::first ()
{
   return ( _first );
}

template <typename T1, typename T2>
T2& Pair<T1, T2>::second ()
{
   return ( _second );
}

#endif   /* PAIR_H */

