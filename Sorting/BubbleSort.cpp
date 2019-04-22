// Worst and Average Case Time Complexity: O(n*n)
// Best Case Time Complexity: O(n)
// Auxiliary Space: O(1)
#include <iostream>
using namespace std; 
  
void swapElement(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void bubbleSorting(int arr[], int n) 
{ 
   int i, j; 
   b swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swapElement(&arr[j], &arr[j+1]); 
           swapped = true; 
        } 
     }
     
     if (swapped == false) 
        break; 
   } 
}


void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<"["<<arr[i]<<"] ";
}


int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSorting(arr, n); 
    cout<<"Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 
