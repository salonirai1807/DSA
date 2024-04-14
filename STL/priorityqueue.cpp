#include<iostream>
#include<queue>

using namespace std;

int main() {
    // max heap
    priority_queue<int> maxi;

    maxi.push(2);
    maxi.push(4);
    maxi.push(3);
    maxi.push(1);

    int n = maxi.size();

    cout<<"Priority Queue (Max Heap) maxi : ";
    for(int i=0 ; i<n ; i++) {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(2);
    mini.push(4);
    mini.push(3);
    mini.push(5);
    mini.push(1);

    int m = mini.size();

    cout<<"Priority Queue (Min Heap) mini : ";
    for(int i=0 ; i<m ; i++) {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl<<endl;

    cout<<"maxi is empty or not : "<<maxi.empty()<<endl;
    cout<<"mini is empty or not : "<<mini.empty()<<endl;

    return 0;
}