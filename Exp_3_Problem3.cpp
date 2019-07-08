#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
char character[5];

    cout << "Enter any number: " << endl;
    for (int counter = 0; counter < 5; counter ++)
    {
        cout << counter + 1 << ") ";
        cin >> character[counter];
        cout << endl;
    }

    cout << endl;
    cout << "The output in reverse: " << endl;
    for (int counter2 = 4 ; counter2 >= 0; counter2--)
    {
        cout << counter2 + 1 << ") " << character[counter2] << endl;
        cout << endl;
    }
        cout << endl;
_getch();        
return 0;
}
