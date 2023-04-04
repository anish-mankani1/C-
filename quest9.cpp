// there are 45 pupils in a classs ,25 are of whom boys.write a program to find how many girls received grade A,if 17 boys made up to 80% of the student receive grade a.
#include<iostream>
using namespace std;
main()
{
    int total,boys,girls;
     cin>>boys;
     total=(80*45)/100;
     girls=total-boys;
     cout<<" number of girls getting grade "<<girls<<endl;
     return 0;
}
