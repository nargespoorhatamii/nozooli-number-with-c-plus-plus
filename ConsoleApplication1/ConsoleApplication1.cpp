// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a[5], i, j, temp = 0;
    for (i = 4; i >= 0; i--)
    {
        cout << "enter array[" << i << "]";
        cin >> a[i];
    }
    for (i = 4; i >= 0; i--)
    {
        for (j = i - 1; j >= 0; j--)
        {if(a[i]>a[j])
            temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        }
        for (i = 4; i >= 0; i--)
        {
            cout << a[i] << endl;
        }
    }
    return 0;
    
}
