#include <iostream>
using namespace std;
int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
// ascending
    for(int i =  0; i < n ; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i]>arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
// descending
   /* for(int i =  0; i < n ; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i]<arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }*/
    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}