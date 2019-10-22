#include "Sort.h"
int main() {
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    sort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}