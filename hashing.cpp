#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tablesize, arrsize, key, hashvalue, index, i, j; // key is a variable which stores an array value, hash value stores the corresponding hash value, index stores the successive hash values of the corresponding array value
    cout << "Enter the size of the hash table to be created: " << endl;
    cin >> tablesize;
    int hashtable[tablesize];
    for (i = 0; i < arrsize; i++)
        hashtable[i] = -1; //assuming that -1 indicates the spot in the hash table is empty
    cout << "Enter the size of the array to be created: " << endl;
    cin >> arrsize;
    int arr[arrsize];
    cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < arrsize; i++)
        cin >> arr[i];
    for (i = 0; i < arrsize; i++) // iterating through each element of the array
    {
        key = arr[i];                   // storing the array element as the key
        hashvalue = key % tablesize;    // finding out the corresponding hash value
        for (j = 0; j < tablesize; j++) // iterating through the hash table
        {
            index = (hashvalue + j) % tablesize; // this is the linear probing part of the program
            if (hashtable[index] == -1)        // if the spot in the hash table is empty, array element is inserted
            {
                hashtable[index] = key;
                break;
            }
        }
        if (j == tablesize)
            cout << "Element cannot be inserted in the table" << endl;
    }
    cout << "Array is: " << endl;
    for (i = 0; i < arrsize; i++)
        cout << arr[i] << " ";
    cout << "\nHash table looks like: " << endl;
    for (j = 0; j < tablesize; j++)
        cout << hashtable[j] << endl;
    return 0;
}