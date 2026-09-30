#include <iostream>
using namespace std;
void merge(int *arr, int st, int end) {
int mid = st + (end - st) / 2;

int leng1 = mid - st + 1;
int leng2 = end - mid;

int *first = new int[leng1];
int *second = new int[leng2];

// main array index
int mainindex = st;
for(int i = 0; i < leng1; i++) {
    first[i] = arr[mainindex++];
}
for(int i = 0; i < leng2; i++) {
    second[i] = arr[mainindex++];
}

int index1 = 0, index2 = 0;
mainindex = st;
while(index1 < leng1 && index2 < leng2) {
    if(first[index1] < second[index2]) {
        arr[mainindex++] = first[index1++];
    }
    else{
        arr[mainindex++] = second[index2++];
    }
    }
    while(index1 < leng1) {
        arr[mainindex++] = first[index1++];
    }
    while(index2 < leng2) {
        arr[mainindex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int st, int end) {
    if(st >= end) {
        return;
    }
    int mid = st + (end - st) / 2;
    // left side 
    mergeSort(arr, st, mid);
    
    //right side
    mergeSort(arr, mid + 1, end);

    merge(arr, st, end);
}
int main() {
    int arr[] = {2, 5, 6, 89, 536, 653782, 6378, 546};
    int n = 8;
    mergeSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++) {
    cout << arr[i] <<" ";
    }
    cout << endl;
    return 0;
}