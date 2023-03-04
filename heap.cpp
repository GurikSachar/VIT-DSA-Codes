#include<bits/stdc++.h>
using namespace std;

void maxHeap(int arr[], int size, int i) //function to build max heap of the given array
{
    int l,r; //variables to store the left and right children of the current node
    int largest = i; //stores index of the parent node which is assumed to be largesr than both of its children
    if(largest==0)
    {  
        l = i+1; //stores the index of the left child
        r = 2*(i+1); //stores the index of the right child
    }
    else
    {
        l = 2*i; //stores the index of the left child
        r = (2*i)+1; //stores the index of the right child
    }
    while(l<size && arr[l]>arr[largest]) //checks if value stored in left child is greater than parent's value and if the parent is a leaf node or not
        largest = l; 
    while(r<size && arr[r]>arr[largest]) //checks if value stored in right child is greater than parent's value and if the parent is a leaf node or not
        largest = r;
    if(largest!=i) //checks if the index of the largest value between the parent and its children has been updated or not
    {
        int temp = arr[i]; //swapping the larger child's value with the parent's value
        arr[i] = arr[largest]; //swapping the larger child's value with the parent's value
        arr[largest] = temp; //swapping the larger child's value with the parent's value
        maxHeap(arr,size,largest); //recursive call to the function and is used to move to the next level of the tree
    }
}

int main()
{
    int size; //array size variable
    cout << "Enter the size of the array:" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i<size; i++) //taking elements into the array
        cin >> arr[i];
    cout << "Array is: ";
    for(int i = 0; i<size; i++)
        cout << arr[i] << " ";
    cout << "\nMax heap is: ";
    for(int i = 0; i<=size/2; i++) //looping the algorithm to get as close as possible to the max heap
        maxHeap(arr,size,i);  
    for(int i = 0; i<size; i++)
        cout << arr[i] << " ";
    return 0;
}