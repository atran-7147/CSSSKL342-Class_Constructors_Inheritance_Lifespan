/*
 * MySubClass.h
 *
 * Created by Andy Tran
 */

#include "MyClass.h"
#pragma once

class MySubClass : public MyClass
{
public:
    // default constructor
    MySubClass();

    // copy constructor
    MySubClass(const MySubClass& orig);

    void copy(const MySubClass& other);

    //setter
    void setSubClassData(int newSubClassData);

    //getter
    int getSubClassData(void) const;
private:
    int subClassData;
};