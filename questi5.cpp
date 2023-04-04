#include<iostream>
using namespace std;
main()
{
    char nm;
    cin>>nm;
    switch(nm)
    {
        case 'a':
        cout<<"vowel"<<endl;
        break;
        case 'e':
        cout<<"vowel"<<endl;
        break;
        case 'i':
        cout<<"vowel"<<endl;
        break;
        case 'o':
        cout<<"vowel"<<endl;             // particular character ke liye hai
        break;
        case 'u':
        cout<<"vowel"<<endl;
        break;
        default:
        cout<<"consonents"<<endl;
        break;
    }
}
