#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

const int SIZE = 20;
int arrayOne[SIZE] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int arrayTwo[SIZE] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

bool bubbleSort(int arrayOne[], const int SIZE);
bool selectionSort(int arrayTwo[], const int SIZE);

int main()
{
bubbleSort(arrayOne, SIZE);
selectionSort(arrayTwo, SIZE);

}

bool bubbleSort(int arrayOne[], const int SIZE)
{
    bool ret = true;

    int swapCount;
    int swapTotal = 0;

    do
    {
        swapCount = 0;
        for (int index = 0; index < (SIZE-1); index ++)
        {
            if (arrayOne[index] > arrayOne[index + 1])
           {
                swap(arrayOne[index], arrayOne[index + 1]);
                swapCount++;
                swapTotal++;
            }
        }

    } while (swapCount > 0);

    cout << "Total number of swaps is " << swapTotal << "."<<endl;




    return ret;
}

bool selectionSort(int arrayTwo[], const int SIZE)
{
    bool ret = true;
    int totalSwap = 0;

    for (int index = 0; index < SIZE; index ++)
    {
    int numSwap = 0;
    int nMinValue = arrayTwo[index];
    int nMinIndex = index;

    for (int i = index; i<SIZE; i++)
    {
        if (arrayTwo[i]<nMinValue)
        {
            nMinValue = arrayTwo[i];
            nMinIndex = i;
        }
    }

    swap(arrayTwo[nMinIndex], arrayTwo[index]);
    numSwap++;
    totalSwap++;


    }

    cout << "Total Swaps is " << totalSwap;
    return ret;
}

