#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int largestRectangle(vector<int>);
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largestRectangle(arr)<<endl;
    return 0;
}

int largestRectangle(vector<int> h)
{
    int index,height,leftPart,rightPart,hSize;
    h.push_back(0);
    int maxArea = 0;
    stack<int> indexesStack;
    hSize=h.size();
    for (int i=0;i<hSize;i++) {
        while (!indexesStack.empty() && h[indexesStack.top()] >= h[i]) {
            index = indexesStack.top();
            height = h[index];
            indexesStack.pop();
            leftPart = indexesStack.empty() ? 0 : indexesStack.top() + 1;
            rightPart = i - 1;
            maxArea = max(maxArea, ((rightPart - leftPart + 1) * height));
        }
        indexesStack.push(i);
    }
    return maxArea;
}