#include<iostream>
using namespace std;

int main(){
    int mid, high, low;
    int n;
    int found = -1;

    cout << "Enter number of book ids" << endl;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "Enter id at position " << i << endl;
        cin >> arr[i];
    }

    int key;
    cout << "Enter the book id to search - " << endl;
    cin >> key;

    low = 0;
    high = n - 1;

    while(low <= high){
        mid = low + (high - low) / 2;

        if(arr[mid] == key){
            found = mid;
            break;
        }
        else if(key > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(found != -1)
        cout << "Book ID found at index " << found+1;
    else
        cout << "Book ID not found";

}