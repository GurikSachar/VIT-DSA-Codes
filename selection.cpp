#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, temp,flag=0; // size stores the size of the array, temp is a temporary variable which will be used later in the program
    cout << "Enter the size of the array to be sorted:" << endl;
    cin >> size;
    int arr[size]; // create the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Array before selection sort:" << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    for (int i = 0; i < size - 1; i++)
    {
        int smallest = arr[i]; // assuming the ith element of the array to be smallest element in the array, this value is compared with other variables in the array
        int pos;               // stores the position of the current smallest value in the array
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < smallest) // checking if jth element in the array is smaller than the current ith element
            {
                smallest = arr[j];
                pos = j;
                flag = 1;
            }
        }
        if(flag==1) //flag is used to check if a smaller element has been found, if yes, swap is performed, else it is not
        {
            temp = arr[i];
            arr[i] = smallest;
            arr[pos] = temp;
            flag = 0;
        }
    }
    cout << "\nArray after selection sort:" << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}