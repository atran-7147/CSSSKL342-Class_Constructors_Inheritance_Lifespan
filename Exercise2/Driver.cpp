/*
 * Driver for simple int Square class.
 *
 * Author: Kelvin Sung
 * Date: Oct 2018
 */

#include <iostream>
#include "Square.h"

using namespace std;

template<class ItemType>
void MySwap(ItemType& item1, ItemType& item2) {
    ItemType temp = item1;
    item1 = item2;
    item2 = temp;
}

template<class ItemType>
void MyBubbleSort(ItemType *data, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (data[j] < data[j + 1])
                MySwap(data[j], data[j + 1]);
        }
    }
}

template<class ItemType>
void printArray(string msg, ItemType *data, int size) {
    cout << msg << endl;
    for (int i = 0; i<size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}


int main(int argc, char** argv)
{
    Square<float> s1, s2;

    s1.setSize(5);
    s2.setSize(3);

    cout << "S1 is: " << s1 << endl;
    cout << "S2 is: " << s2 << endl;

    if (s1 < s2) 
        cout << "s1 is smaller" << endl;
    else 
        cout << "s2 is smaller" << endl;

    s1 = s2;
    cout << "after assignment" << endl;
    cout << "s1 is:" << s1 << endl;
    cout << "s2 is:" << s2 << endl;
    
    // do bubble sort
    int  num[10] = {10, 9, 8, 1, 0, 7, 20, 14, 2, 4};
    Square<float> sArray[10];  // call initialize by default constructors
    for (int i = 0; i<10; i++) {
        sArray[i].setSize(num[i]);
    }
    printArray("Array before sorting:", sArray, 10);
    MyBubbleSort(sArray, 10);
    printArray("Array after sorting:", sArray, 10);
    cout << "--------------------" << endl;

    // do bubble sort again
    Square<float> *sArr = new Square<float>[10];
    for (int i = 0; i<10; i++) {
        sArr[i].setSize(num[i]);
    }
    printArray("DArray before sorting:", sArr, 10);
    MyBubbleSort(sArr, 10);
    printArray("DArray after sorting:", sArr, 10);
}
