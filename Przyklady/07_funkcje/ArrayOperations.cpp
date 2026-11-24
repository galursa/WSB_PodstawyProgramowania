#include <iostream>
#include <ctime>
using namespace std;

/*
    1. generator l. pseudolosowych dla dowolnego zakresu.
    rand()%range to pierwsza mozliwa to 0 ostatnia range -1
    2. Generowanie losowo tablicy
    3. wypisanie tablicy
    4. sortowanie selectionsort
    5. (opcjonanlne) Przeszukiwanie liniowe
    6. (opcjonalne) Przeszukiwanie binarne.
*/

int randRange(int from, int to)
{
    return from+rand()%(to-from+1);
}

void printArray(int arr[], int arrSize)
{
    for(int i=0; i<arrSize; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void randArray(int arr[], int arrSize, int from, int to)
{
    for(int i=0; i<arrSize; i++)
    {
        arr[i]=randRange(from, to);
    }
}

void selectionSort(int arr[], int arrSize)
{
    for(int i=0; i<arrSize-1; i++)
    {
        int minOfArray = i;
        for(int j=i+1; j<arrSize;j++)
        {
            if (arr[minOfArray] > arr[j])
            {
                minOfArray = j;
            }
        }
        swap(arr[i],arr[minOfArray]);
    }
}

int linearSearch(int arr[], int arrSize, int number)
{
    for(int i=0; i<arrSize; i++)
    {
        if(number==arr[i])
        {
            return i;
        }
    }
    cout<<"Number: "<<number<<" was not found"<<endl;
    return -1;
}

int binarySearch(int arr[], int arrSize, int number)
{
    int mid;
    int left=0, right=arrSize-1;
    while(left<=right)
    {
       mid=(left+right)/2;
       if(arr[mid]==number)
       {
            return mid;
       } else {
            if(number>arr[mid])
            {
                left=mid+1;
            }else{
                right=mid-1;
            }
       }
    }
    return -1;
}

int main()
{
    srand(time(NULL));
    int arrSize = 10, number = 6;
    int arr[arrSize];
   // printArray(arr, arrSize);
    randArray(arr, arrSize, 0,10);
    printArray(arr, arrSize);
    selectionSort(arr, arrSize);
    printArray(arr, arrSize);
    cout<<"We search number: "<<endl;
    cout<<"Number: "<<number<<" on position: "<<linearSearch(arr,arrSize,number)<<endl;
    cout<<"We search number: "<<endl;
    cout<<"Linear search: "<<endl;
    cout<<linearSearch(arr,arrSize,21)<<endl;
    cout<<"Binary search: "<<endl;
    cout<<"Number: "<<number<<" on position: "<<binarySearch(arr,arrSize,number)<<endl;

    return 0;
}
