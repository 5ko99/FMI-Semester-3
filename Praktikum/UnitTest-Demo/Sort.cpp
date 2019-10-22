//
// Created by petko on 16/10/2019.
//

#include "Sort.h"
void sort(int* arr,int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
bool testSort(int* inputData,int len,int* expectedData){
    sort(inputData,len);
    for(int i=0;i<len;i++){
        if(inputData[i]!=expectedData[i]) return  false;
    }
    return  true;
}