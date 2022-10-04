//Write a program in C++ to make such a pattern like a pyramid with numbers increased by 1. Go to the editor

#include <iostream>
#include <string>
using namespace std;

int main() {
    int i,j,spc,rows,k,t=1;
    cout << " Input number of rows: ";
    cin >> rows;
    spc=rows+4-1;
    for(i=1;i<=rows;i++) {
        for(k=spc;k>=1;k--) {
              cout<<" ";
            }
	    for(j=1;j<=i;j++)
	        cout<<t++<<" ";
	cout<<endl;
    spc--;
   }
}
