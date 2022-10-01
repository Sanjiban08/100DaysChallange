//ADDING TWO NUMBERS GIVEN BY THE USER--
#include <iostream>
using namespace std;

int addTwoNumber(int A, int B)
{
	return A + B;
}
int main()
{
	int A, B;
    cout << "Enter two numbers to add: \n";
    cin >> A;
    cin >> B;
	cout << "the sum is = " << addTwoNumber(A, B);
	return 0;
}



