#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copyN = n;
    int sumOfCubes = 0;

    while(n != 0){
        int dig = n % 10;
        sumOfCubes += dig * dig * dig;
        n = n / 10;
    }

    return copyN == sumOfCubes;
}

int main(){
    int n = 152;
    if(isArmstrong(n)){
        cout << "Armstrong number";
    }
    else{
        cout << "Not Armstrong";
    }
}
