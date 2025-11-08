#ifndef SORTINGANDSEARCHING_H_INCLUDED
#define SORTINGANDSEARCHING_H_INCLUDED

/*
* This header file contains the implementation of various sorting and searching algorithms.
* The algorithms are implemented using pointers to access array elements.
* This is done to demonstrate pointer arithmetic and dereferencing in C++.
*/

/*
* The following searching algorithms are implemented:
* 1. Linear Search
* 2. Binary Search
*/

/*
* Linear Search: This function searches for a given value in an array using the linear search algorithm.
* It returns the index of the value if found, otherwise returns -1.
* Parameters:
* - arr: Pointer to the array to be searched.
* - v: The value to be searched.
* - length: The length of the array.
*/


int LinearSearch(int *arr, int v, int length){
    int index=-1;
    for(int i=0; i<length;i++){
        if(*(arr+i) == v) return i;
    }
    return index;
}

/*
* Binary Search: This function searches for a given value in a sorted array using the binary search algorithm.
* It returns the index of the value if found, otherwise returns -1.
* Parameters:
* - arr: Pointer to the sorted array to be searched.
* - v: The value to be searched.
* - length: The length of the array.
*/

int binarySearch(int *arr, int v, int length){
    int first = 0, last = length - 1 , index = -1;
    int mid = (first + last)/2;

    while (true){
        int mid = (first + last)/2;

        if (*(arr+mid) == v)
            index = mid;
            break;
        if (first > last) break;
        else if (v > *(arr+mid)) first = mid+1;
        else if (v < *(arr+mid)) last = mid-1;

        if (*(arr+mid) == v) return mid;
    }
    return index;
}

/*
 * The following sorting algorithms are implemented:
 * 1. Selection Sort
 * 2. Bubble Sort
 * 3. Insertion Sort
 */

/*
 * Note: The sorting algorithms are implemented using pointers to access array elements.
* This is done to demonstrate pointer arithmetic and dereferencing in C++.
*/

/*
* Selection Sort: This function sorts an array using the selection sort algorithm.
* Parameters:
* - arr: Pointer to the array to be sorted.
* - length: The length of the array.
*/

void selectionSorting(int *arr, int length){
    int i,j,k, temp;
    for (i = 0; i < length-1; i++){
        k = i;
        for (j = i+1; j < length; j++){
            if (*(arr+j) < *(arr+k)){
                k = j;
            }
        }
        if(k != i){
            temp = *(arr+i);
            *(arr+i) = *(arr+k);
            *(arr+k) = temp;

        }
    }
}

/*
* Bubble Sort: This function sorts an array using the bubble sort algorithm.
* Parameters:
* - arr: Pointer to the array to be sorted.
* - length: The length of the array.
*/

void bubbleSorting(int *arr, int length){
    int temp,i,j;
    for ( i = 0; i < length-1; i++){
        for ( j = 0; j < length-i-1; j++){
            if (*(arr+j) > *(arr+j+1)){
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}

/*
* Insertion Sort: This function sorts an array using the insertion sort algorithm.
* Parameters:
* - arr: Pointer to the array to be sorted.
* - length: The length of the array.
*/

void insertionSort(int *arr, int length){
    int i,j,k;
    for ( i = 1; i < length-1; i++){
        k = *(arr+i);

        for(j = i-1; j >=0 && *(arr+j) > k; j--){
            *(arr+j+1) = *(arr+j);
        }
        *(arr+j+1) = k;
    }
}


#endif // SORTINGANDSEARCHING_H_INCLUDED
