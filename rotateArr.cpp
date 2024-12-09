#include <iostream>
using namespace std;

void printarr(int arr[], int size);

void rotatearr(int arr[], int size, int pos = 1);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printarr(arr, size);
    rotatearr(arr, size);
    cout << ("\n");
    printarr(arr, size);

    int pos;
    cout << ("Enter the pos where arr has to be rotate :");
    cin >> pos;

    rotatearr(arr, size, pos);
    printarr(arr, size);
    return 0;
}

void rotatearr(int arr[], int size, int pos)
{
    pos = (pos >= 0) ? pos % size : size - (-pos % size);
    int temp[size];
    int i, j;

    for (i = pos, j = 0; i < size; i++, j++)
    {
        temp[j] = arr[i];
    }

    for (i = 0; i < pos; i++, j++)
    {
        temp[j] = arr[i];
    }

    for (i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

void printarr(int arr[], int size)
{

    cout << ("[");
    for (int i = 0; i < size; i++)
    {
        cout << ("%d ", arr[i]);
    }
    cout << ("]\n");
}