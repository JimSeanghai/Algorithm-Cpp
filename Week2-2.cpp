#include <iostream>
using namespace std;

double computeAverage(const int arr[], int size){
    double average=0;
    for(int i=0; i<size; i++){
        average += arr[i];
    }
    return average/size;
}

int findMin(const int arr[], int size){
    int min = arr[0];
    for(int i=0; i<size ;i++){
        if( arr[i] < arr[0]){
            min = arr[i];
        }
    }
    return min;
}
int findMax(const int arr[], int size){
    int max = arr[0];
    for(int i=0; i<size ;i++){
        if( arr[i] > arr[0]){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    int arr[size];
    cout << "Array contents:";
    for (int i=0; i<size;i++){
        cin >> arr[i];
    }
    
    cout << "Average = " << computeAverage(arr, size) << endl;
    cout << "Min = " << findMin(arr, size) << endl; 
    cout << "Max = " << findMax(arr, size) << endl;

    return 0;
}
