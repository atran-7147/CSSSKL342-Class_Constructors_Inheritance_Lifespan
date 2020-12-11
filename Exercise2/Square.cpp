/*
 *  Square.cpp
 *  Class-example
 *
 */
#ifndef SQUARE_CPP
#define SQUARE_CPP
#include <iostream>
#include "Square.h"

using namespace std;

template<class ItemType>
void Square<ItemType>::setSize(int newSize)
{
	theSize = newSize;
}
template<class ItemType>
int Square<ItemType>::getSize(void) const
{
	return theSize;
}
template<class ItemType>
ItemType & Square<ItemType>::operator=(const ItemType& other)
{
	theSize = other.getSize();
	return *this;
}
template<class ItemType>
ostream& operator<<(ostream &os, const Square<ItemType> &c)
{
	os << c.getSize();
	return os;
}
template<class ItemType>
bool Square<ItemType>::operator<(const Square<ItemType>& other)
{
	return theSize < other.getSize();
}
#endif