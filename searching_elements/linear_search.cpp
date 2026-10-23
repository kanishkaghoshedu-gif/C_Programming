#include <iostream>

int main(){
    int n;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    int key;
    std::cout << "Enter the element to be searched: ";
    std::cin >> key;

    int flag = 0;
    int pos;

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            flag = 1;
            pos = i;
            break;
        }
    }

    if(flag == 1)
        std::cout << "Element is found at " << pos + 1 << " position";
    else
        std::cout << "Element is not found";

    return 0;
}