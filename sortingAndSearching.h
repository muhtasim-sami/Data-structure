#ifndef SORTINGANDSEARCHING_H_INCLUDED
#define SORTINGANDSEARCHING_H_INCLUDED

int LinearSearch(int *arr, int v, int length){
    int index=-1;
    for(int i=0; i<length;i++){
        if(*(arr+i) == v) return i;
    }
    return index;
}

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

int selectionSorting(int *arr, int length){
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


int bubbleSorting(int *arr, int length){
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
