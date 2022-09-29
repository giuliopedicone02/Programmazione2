#include <iostream>
#include <cmath>
using namespace std;

void func(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < i * i; j++)
        {

            if (j % i == 0)
            {
                for (int k = 0; k < j; k++)
                {
                    cout << count << endl;
                    count++;
                }
            }
        }
    }
}
int main()
{
    /*int n = 10;

    for (int i = 2; i <= n; i = pow(i, 2)) // O(log log n)
    {
        cout << "i: " << i << endl;
    }

    cout << "\n\n*********************************\n\n";

    for (int i = 1; i <= n; i *= 2) // O(log n)
    {
        cout << "i: " << i << endl;
    }

    cout << "\n\n*********************************\n\n";

    for (int i = 1; i <= n; i++) // O(n) O(10)
    {
        cout << "i: " << i << endl;
    }

    cout << "\n\n*********************************\n\n";
    int a = 0, i = 20;
    while (i > 0)
    {
        a += i;
        i /= 2;
        cout << "a: " << a << endl;
        cout << "i: " << i << endl;
    }

    for (int i = 0; i < n; i++) // O(n)
    {
        for (int i = 0; i < n; i++) // O(n)
        {
            //---
        }
    }
    // O(n)*O(n) = O(n^2)

    for (int i = 0; i < n; i *= 2) // O(log n)
    {
        //---
    }*/

    func(10);
}