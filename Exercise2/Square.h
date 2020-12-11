/*
 *  Square.h
 *  Class-example
 *
 */

#ifndef SQUARE_H
#define SQUARE_H

template<class ItemType>
class Square {
	template <typename T>
	friend std::ostream& operator<<(std::ostream&, const Square<T>&);
public:
	ItemType & operator=(const ItemType&);
	bool operator<(const Square<ItemType>&);
	void setSize(int newSize);
	int getSize(void) const;

private:
	int theSize;
};
#include "Square.cpp"
#endif
