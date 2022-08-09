#include <stdlib.h>
#include <iostream>
using namespace std;
void swap(int a,int b){
    a = b;
}

int main(){

    int a = 110;
    int b = 100;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}