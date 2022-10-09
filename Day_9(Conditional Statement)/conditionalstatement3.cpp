// A student will not be allowed to sit in exam if his/her attendence is less than 75%. Take following input from user ---
// Number of classes held and Number of classes attended and And print. percentage of class attended. 
//Is student is allowed to sit in exam or not.

#include <iostream>

int main() {
    using namespace std;
    int ch, ca, ap;
    cout << "Enter the total no of classes held in the semester out of 100: " << endl;
    cin >> ch;
    cout << "The no of classes held: " << ch << endl;
    cout << "Enter the no of classes attended: " << endl;
    cin >> ca;
    cout << "The no of classes held: " << ca << endl;
    if (ca == 0) {
        cout << "This student can not sit in the exam." << endl;
    }
    else {
        if (ca > ch) {
            cout << "INvalid Input." << endl;
        }
        else {
            ap = ca*(ch/100);
            cout << "The attendence of this student is: " << ap << "%" << endl;
            if(ap < 75) {
            cout << "This Student can not sit in the exams." << endl;
            }
            else {
                cout << "This student can sit in the exam." << endl;
            }  
        }
    }
    return 0;   
}
