//Write a program in C++ to convert a decimal number to binary number ----

#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int dec_num, rem, quot, i=1, j;
    int bin_num[100];
	cout << " Input a decimal number: ";
	cin>> dec_num;
    quot = dec_num;
    while(quot != 0) {
        bin_num[i++] = quot%2;
        quot = quot/2;
    }
    cout<<" The binary number is: ";
    for(j=i-1; j>0; j--){
        cout<<bin_num[j];
    }
    cout<<("\n");  
}  
