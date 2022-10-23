#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){


    //base case 
    if(n == 0 || n==1) return true;

    if(arr[0] > arr[1]){
        return false;
    }else{
        bool ans  = isSorted(arr+1, n-1);
        return ans;

    }
}


int main(){

    int arr[5] = { 2,4,10,7,9};
    int size = 5;

    bool ans = isSorted(arr, size);

    cout << ans <<endl;
}
