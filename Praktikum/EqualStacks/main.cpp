#include <iostream>
#include <vector>
#include <algorithm>
void reduceStack(std::vector<int>&,int&);
int inputStack(std::vector<int>& arr){
    int len=arr.size();
    int size=0;
   for(int i=0;i<len;i++){
       std::cin>>arr[i];
       size+=arr[i];
   }
    return size;
}
int equalStacks(int s1,int s2,int s3,std::vector<int>& v1,std::vector<int>& v2,std::vector<int>& v3){
    while(s1!=s2 || s1!=s3 || s2!=s3){
        int maxS=std::max(std::max(s1,s2),s3);
        if(maxS==s1){
            reduceStack(v1,s1);
        }else if(maxS==s2){
            reduceStack(v2,s2);
        }else{
            reduceStack(v3,s3);
        }
    }
    return s1;
}
void reduceStack(std::vector<int>& v1,int& s1){
    for(int i=0;i<v1.size();i++){
        if(v1[i]>0){
            s1-=v1[i];
            v1[i]=-1;
            return;
        }
    }
}
int main() {
    int x,y,z,sizeV1,sizeV2,sizeV3;
    std::cin>>x>>y>>z;
    std::vector<int> v1(x),v2(y),v3(z);
    sizeV1=inputStack(v1);
    sizeV2=inputStack(v2);
    sizeV3=inputStack(v3);
    std::cout<<equalStacks(sizeV1,sizeV2,sizeV3,v1,v2,v3)<<std::endl;
    return 0;
}
