// Longest word in a sentence with its length using Character Array. ----

#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char arr1[] = "Snowfall on this scale is no impediment we can keep moving";
    int n = strlen(arr1);
    int maxlen = 0, currentlen = 0;
    int longestWord = 0, word = 0;
    for(int i=0; i<n+1; i++){
        if(arr1[i] == ' ' || arr1[i] == '\0') {            
            if(currentlen > maxlen) {
                maxlen = currentlen;
                longestWord = word;                
            }
            currentlen = 0;           
            word = i+1;
        }
        else { 
        currentlen++;
        }
    }
    cout<<maxlen<<endl;
    for(int i=0; i<maxlen; i++) {
        cout<<arr1[i+longestWord];
    }
    cout<<endl;
    return 0;
}