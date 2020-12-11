/*
 * MySubClass.cpp
 *
 * Created by Andy Tran
 */

#include "MySubClass.h"

using namespace std;

MySubClass::MySubClass()
{
    subClassData = 0;
}

MySubClass::MySubClass(const MySubClass& orig)
{
    copy(orig);
    subClassData = orig.subClassData;
}

void MySubClass::copy(const MySubClass& other)
{
    subClassData = other.subClassData;
}

void MySubClass::setSubClassData(int newSubClassData)
{
    subClassData = newSubClassData;
}

int MySubClass::getSubClassData() const
{
    return subClassData;
}
