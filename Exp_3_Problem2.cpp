
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num[7];
    
    
     cout<<"Input the temperature of Province A for separate day :"  <<endl;
    
    for (int counter = 0; counter < 7; counter ++)
        {

            cout << counter+1 << ") "; cin >> num[counter];
        }
     
     cout<< endl;
    
     int man[7];
    cout<<"Input the temperature of Province B for separate day :"  <<endl;
    
    for (int counter = 0; counter < 7; counter ++)
        {

            cout << counter+1 << ") "; cin >> man[counter];
        }
        
    cout<< endl;
     int ham[7];   
        cout<<"Input the temperature of Province C for separate day :"  <<endl;
    cout << endl;
        
    for (int counter = 0; counter < 7; counter ++)
        {

            cout << counter+1 << ") "; cin >> ham[counter];
        }
    cout << endl;
    
    cout<<"Province A, Day 1 = " << num[0] <<endl <<"Province A, Day 2 = " << num[1] <<endl <<"Province A, Day 3 = " << num[2] <<endl <<"Province A, Day 4 = " << num[3] <<endl <<"Province A, Day 5 = " << num[4] <<endl <<"Province A, Day 6 = " << num[5] <<endl <<"Province A, Day 7 = " << num[6] <<endl;
    cout<<"Province B, Day 1 = " << man[0] <<endl <<"Province B, Day 2 = " << man[1] <<endl <<"Province B, Day 3 = " << man[2] <<endl <<"Province B, Day 4 = " << man[3] <<endl <<"Province B, Day 5 = " << man[4] <<endl <<"Province B, Day 6 = " << man[5] <<endl <<"Province B, Day 7 = " << man[6] <<endl;
    cout<<"Province C, Day 1 = " << ham[0] <<endl <<"Province C, Day 2 = " << ham[1] <<endl <<"Province C, Day 3 = " << ham[2] <<endl <<"Province C, Day 4 = " << ham[3] <<endl <<"Province C, Day 5 = " << ham[4] <<endl <<"Province C, Day 6 = " << ham[5] <<endl <<"Province C, Day 7 = " << ham[6] <<endl;
    

  
    _getch();  
    return 0;
    }

