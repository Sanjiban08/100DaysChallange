// calculate and shpow the factors of a number given by tha user ----

#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << " Input a number: ";
    cin >> num;
    cout << "The factors are: ";
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
