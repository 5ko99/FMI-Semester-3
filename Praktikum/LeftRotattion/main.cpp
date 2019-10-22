#include<iostream>
#include<vector>
using namespace std;
vector<int> leftRotation(const vector<int>&,int,int);
int main(){
    int n,d;
    cin>>n>>d;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> output=leftRotation(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<output[i]<<' ';
    }
    cout<<endl;
    return 0;
}
vector<int> leftRotation(const vector<int>& arr,int n,int d){
    vector<int> result(n);
    d%=n;
    for(int i=0;i<n;i++){
        result[i]=arr[(i+d)%n];
    }
    return result;
}