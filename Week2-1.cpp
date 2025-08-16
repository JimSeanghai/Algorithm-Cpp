#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}

int subtract(int a , int b){
    if( a > b){
        return a-b;
    }else if(a<b){
        return b-a;
    }else {
        return 0;
    }
}

int multiply(int a , int b){
    return a*b;
}

double divide(int a , int b){
    if(b !=0){
        return a/b;
    }else {
        return 0;
    }
}
int main(){
    int a, b;
    cout << "Please Input Number of a: ";
    cin >> a;
    cout << "Please Input Number of b: ";
    cin >> b;

    cout << "add integer number of a and b: " <<add(a, b) << endl;
    cout << "add float number of a and b: "<<add(2.5, 4.2)<< endl;
    cout << "subtract of a and b: " << subtract(a, b) << endl; 
    cout << "multiply of a and b: " << multiply(a, b) << endl;
    cout << "divide of a and b: " << divide(a, b) << endl;

    return 0;
}


