// yeh class mein argument wala hai 
#include<iostream>
using namespace std;
class car
{
    public:
    int speed(int maxspeed); // speed mein argument liya

};
 int car::speed(int maxspeed) // yaha se donon ko joint kiya
{
    return maxspeed;
}
int main()
{
    car x;
    cout<<x.speed(200)<<endl;
}