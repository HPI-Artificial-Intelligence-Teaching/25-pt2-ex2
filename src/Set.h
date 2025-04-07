#ifndef __LIST_SET_H__
#define __LIST_SET_H__

#include <stdexcept>
#include <stdio.h>

template <typename T>
class Set
{
public:
    // constructor
    // destructor
    // copy constructor
    // copy assignment
    // size
    const int size()
    {
        return 0;
    }
    // operator[]
    T operator[](int index) const
    {
        throw std::out_of_range("Index out of range");
    }
    // operator==
    T operator==(const Set<T> &other) const
    {
        return false;
    }
    // add
    Set<T> add(const T &el)
    {
        // TODO: Implement
        return *this;
    }
    // remove
    Set<T> remove(const T &el)
    {
        // TODO: Implement
        return *this;
    }
    // contains
    bool contains(const T &elem)
    {
        return false;
    }
};
#endif