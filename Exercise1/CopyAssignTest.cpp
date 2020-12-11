/*
 * CopyAssignTest
 
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/15/2018
 */

#include <iostream>
#include "MyClass.h"
#include "MySubClass.h"

using namespace std;

int main(int argc, char** argv)
{
	// create object m1 using default constructor
    MyClass m1;
	// update data members
    m1.setD(3.14159);
    m1.setI(42);
    m1.setS("This is a test");
    m1.setIp(7);

    cout << "m1 values:" << endl;
    cout << '\t' << m1.getD() << ", " << m1.getI() << ", " << m1.getS() 
         << ", " << m1.getIp() << endl;

	// create object m2 from m1 using copy constructor
    MyClass m2(m1);
    cout << "m2 values:" << endl;
    cout << '\t' << m2.getD() << ", " << m2.getI() << ", " << m2.getS() 
         << ", " << m2.getIp() << endl;

	// create object m3 from m1 using assignment operator
	MyClass m3 = m1;
    cout << "m3 values:" << endl;
    cout << '\t' << m3.getD() << ", " << m3.getI() << ", " << m3.getS() 
         << ", " << m3.getIp() << endl;

	// update m2's data
    m2.setD(1.7172);
    m2.setI(100);
    m2.setS("This is a NEW test");
    m2.setIp(8);
	// copy m2 to m1
    m1 = m2;
    cout << "m1 values:" << endl;
    cout << '\t' << m1.getD() << ", " << m1.getI() << ", " << m1.getS() 
         << ", " << m1.getIp() << endl;
	// only update m2's data IP which is using dynamically allocated memory
    m2.setIp(23);
    cout << "m1 values:" << endl;
    cout << '\t' << m1.getD() << ", " << m1.getI() << ", " << m1.getS() 
         << ", " << m1.getIp() << endl;
    cout << "m2 values; last should be different:" << endl;
    cout << '\t' << m2.getD() << ", " << m2.getI() << ", " << m2.getS() 
         << ", " << m2.getIp() << endl;

    // create object ms1 using default constructor
    MySubClass ms1;
    
    // update data members
    ms1.setD(3.14159);
    ms1.setI(42);
    ms1.setS("This is a test");
    ms1.setIp(7);
    ms1.setSubClassData(177013);

    cout << "ms1 values:" << endl;
    cout << '\t' << ms1.getD() << ", " << ms1.getI() << ", " << ms1.getS() 
         << ", " << ms1.getIp() << ", " << ms1.getSubClassData() << endl;

	// create object ms2 from ms1 using copy constructor
    MySubClass ms2(ms1);
    cout << "ms2 values:" << endl;
    cout << '\t' << ms2.getD() << ", " << ms2.getI() << ", " << ms2.getS() 
         << ", " << ms2.getIp() << ", " << ms2.getSubClassData() << endl;

    // create object ms3 from ms1 using assignment operator
	MySubClass ms3 = ms1;
    cout << "ms3 values:" << endl;
    cout << '\t' << ms3.getD() << ", " << ms3.getI() << ", " << ms3.getS() 
         << ", " << ms3.getIp() << ", " << ms3.getSubClassData() << endl;

	// update m2's data
    ms2.setD(1.7172);
    ms2.setI(100);
    ms2.setS("This is a NEW test");
    ms2.setIp(8);
    ms2.setSubClassData(265918);
	// copy ms2 to ms1
    ms1 = ms2;
    cout << "ms1 values:" << endl;
    cout << '\t' << ms1.getD() << ", " << ms1.getI() << ", " << ms1.getS() 
         << ", " << ms1.getIp() << ", " << ms1.getSubClassData() << endl;
	// only update ms2's data IP which is using dynamically allocated memory
    ms2.setIp(23);
    cout << "ms1 values:" << endl;
    cout << '\t' << ms1.getD() << ", " << ms1.getI() << ", " << ms1.getS() 
         << ", " << ms1.getIp() << ", " << ms1.getSubClassData() << endl;
    cout << "ms2 values; last should be different:" << endl;
    cout << '\t' << ms2.getD() << ", " << ms2.getI() << ", " << ms2.getS() 
         << ", " << ms2.getIp() << ", " << ms2.getSubClassData() << endl;

    return 0;
}
