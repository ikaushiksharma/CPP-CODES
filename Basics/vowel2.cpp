#include <iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the alphabet ";
    cin>>a;
    switch(a)
    {
        case 'a':
        cout<<"It is a vowel";
        break;
        case 'e':
        cout<<"It is a vowel";
        break;
        case 'i':
        cout<<"It is a vowel";
        break;
        case 'o':
        cout<<"It is a vowel";
        break;
        case 'u':
        cout<<"It is a vowel";
        break;
        default:
        cout<<"It is a consonant";
    }
    return 0;
}