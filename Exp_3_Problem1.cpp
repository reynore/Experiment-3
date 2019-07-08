#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    double integers[10];
    int index, maxIndex, minIndex;
    double smallest, largest, total, average;
    
    
    cout << "Input a 10 integers" << endl;
    for (index = 0; index < 10; index++)
        integers[index]=0.0;
    
    for (index = 0; index < 10; index++)
        cin >> integers[index];
    
    for (index = 0; index < 10; index++)
        cout << integers[index] << " ";
    
    total = 0;
    
    for (index = 0; index < 10; index++)
        total = total + integers[index];
    
    average = total / 10;
    
        cout << " \n" ;
        cout << "Total = \t" << total << endl;
        cout << "Average = \t" << average << endl;
    
    maxIndex = 0;
    
    for (index = 1; index < 10; index++)
        if (integers[maxIndex] < integers[index])
            maxIndex = index;
    largest = integers[maxIndex];
    
        cout << "Largest integer = \t" << largest << endl;
    
    minIndex = 0;
    
    for(index = 1; index < 10; index++)
        if (integers[minIndex] > integers[index])
            minIndex = index;
    smallest = integers[minIndex];
    
    cout << "Smallest integer = \t" << smallest << endl;
   
    
    _getch();
    return 0;
}
