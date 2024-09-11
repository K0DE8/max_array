#include <iostream>
using namespace std;
int findMax(const int arr[], int size){
    int max=arr[0];
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            max=arr[i];
        }
    }
    return max;
}
int main () {
    int a;
    cin >> a;
    int x[a];
    for(int i=0;i<a;i++){
        cin >> x[i];
    }
    cout << findMax(x,a);
    return 0;
}