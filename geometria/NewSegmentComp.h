/**
 * @file NewSegmentComp.h
 * @author algarcia
 *
 * @date 13 de abril de 2018
 */

#ifndef NEWSEGMENTCOMP_H
#define NEWSEGMENTCOMP_H

template <typename T>
class NewSegmentComp
{
   private:
      T* _start;
      T* _end;
   public:
      NewSegmentComp ();
      NewSegmentComp ( T& start, T& end );
      NewSegmentComp ( const NewSegmentComp<T>& orig );
      virtual ~NewSegmentComp ();
};

template <typename T>
NewSegmentComp<T>::NewSegmentComp (): _start ( new T () ),
                                      _end ( new T () )
{ }

template <typename T>
NewSegmentComp<T>::NewSegmentComp (const NewSegmentComp<T>& orig): _start (0),
                                                                   _end (0)
{
   _start = new T ( *orig._start );
   _end = new T ( *orig._end );
}

template <typename T>
NewSegmentComp<T>::NewSegmentComp ( T& start, T& end ): _start ( &start ),
                                                        _end ( &end )
{ }

template <typename T>
NewSegmentComp<T>::~NewSegmentComp ()
{
   delete _start;
   _start = 0;
   delete _end;
   _end = 0;
}

#endif   /* NEWSEGMENTCOMP_H */

