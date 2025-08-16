#include <iostream>
using namespace std;

int recursive(int num){
    if( num == 0){
        return 1;
    }
    return num * recursive(num - 1);
}

int iterative(int num){
    int result = 1;
    for(int i=1 ; i<= num ; i++){
        result *= i;
    }
    return result;
}

int main (){
    int num;
    cout << "Enter the number: "; cin >> num;

    cout << num <<"! recursive = " << recursive(num) << endl;
    cout << num <<"! iterative = " << iterative(num) << endl;
    return 0;
}