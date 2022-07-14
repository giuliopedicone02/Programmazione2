#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int vec[], int dim)
{
    for (int c = 0; c < dim; c++)
    {
        for (int i = c + 1; i < dim; i++)
        {
            if (vec[i] < vec[c])
            {
                swap(vec[c], vec[i]);
            }
        }
    }
}

int main()
{
    int vec[10] = {10, 7, 5, 8, 2, 6, 4, 3, 1, 9};

    cout << "Array non ordinato = [ ";
    for (int c = 0; c < 10; c++)
    {
        cout << vec[c] << " ";
    }
    cout << "]" << endl
         << endl;

    bubbleSort(vec, 10);

    cout << "Array ordinato = [ ";
    for (int c = 0; c < 10; c++)
    {
        cout << vec[c] << " ";
    }
    cout << "]";
}
