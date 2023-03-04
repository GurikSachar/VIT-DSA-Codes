#include<bits/stdc++.h>
using namespace std;

int Partition(int arr[], int s, int e) //function to partition the array
{
    int pivot = arr[e]; //taking the last element as the pivot
    int pIndex = s; //Assuming the initial pivot index as starting index of array
    for(int i = s; i<e; i++)
    {
        if(arr[i]<=pivot) //checking if current element is smaller than the pivot element
        {
            int temp = arr[i];     //swapping the current element and the assumed pivot index element
            arr[i] = arr[pIndex]; //swapping the current element and the assumed pivot index element
            arr[pIndex] = temp; //swapping the current element and the assumed pivot index element
            pIndex++;
        }
    }
    int temp = arr[e];    //swapping the last element with the assumed pivot index variable
    arr[e] = arr[pIndex]; //swapping the last element with the assumed pivot index variable
    arr[pIndex] = temp; //swapping the last element with the assumed pivot index variable
    return pIndex;
}
void QuickSort(int arr[], int s, int e)
{
    if(s<e) //checking if start index of the array is lesser than end index of the array
    {
        int p = Partition(arr, s, e);
        QuickSort(arr, s, (p-1)); //recursive call for left partition
        QuickSort(arr, (p+1), e); //recursive call for right partition
    }
}

int main()
{
    int size;
    cout << "Enter size of the array: " << endl;
    cin >> size; 
    int arr[size];
    for(int i = 0; i<size; i++) //accepting elements into the array
    {
        cout << "Enter an element: " << endl;
        cin >> arr[i];
    }
    cout << "Array before sorting:" << endl;
    for(int i = 0; i<size; i++) //printing unsorted array
    {
        cout << arr[i] << " ";
    }
    QuickSort(arr,0,(size-1)); //Quick sort function is called
    cout << "\nArray after sorting: " << endl;
    for(int i = 0; i<size; i++) //printing sorted array
    {
        cout << arr[i] << " ";
    }
    return 0;
}
