#include<iostream>
#include <stdio.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    if (c == 'a' || c == 'e' || c == 'o' || c == 'i' || c == 'u' 
        || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        cout<<c<<" is a vowel";
    }else cout<<c<<" is a consonant";
    return 0;
}