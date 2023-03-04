#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements needed in the array: " << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) //Accepting elements into the array
    {
        cout << "Enter an element: " << endl; 
        cin >> arr[i];
    }
    cout << "Array before insertion sort: ";
    for(int i = 0; i<n; i++) //Printing elements of the array before sorting
    {
        cout << arr[i] << " "; 
    }
    cout << endl;
    int temp;
    for(int i = 0; i<n-1; i++)
    {
        int current = arr[i+1]; //Storing (i+1)th element of array in current, elements before current are considered sorted
        for(int j = i; j>=0; j--) 
        {
            if(arr[j]>current) //Comparing elements of sorted portin of array with the element stored in current
            {
                temp = arr[j];
                arr[j] = current;
                arr[j+1] = temp;
            }
        }
    }
    cout << "Array after insertion sort: ";
    for(int i = 0; i<n; i++) //Printing elements of the array after sorting
    {
        cout << arr[i] << " "; 
    }
    return 0;
}
