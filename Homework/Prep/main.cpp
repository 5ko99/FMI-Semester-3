#include <iostream>
#include "QuickSort.h"
#include "Graph.h"
template <class T>
void printArray(std::vector<T> arr)
{
    int i,size=arr.size();
    for (i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
int main() {
    int n;
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i=0;i<n;++i)
        std::cin>>arr[i];
    QuickSort(arr,0,n-1);
    printArray(arr);

    Graph g(6);
    g.addEdge(0,1);g.addEdge(0,2);g.addEdge(0,3),g.addEdge(1,2),g.addEdge(2,3),
    g.addEdge(4,2),g.addEdge(4,3),g.addEdge(2,5);
    g.BFS();
    std::cout<<'\n';
    g.DFS();
    return 0;
}
