//wap to calculatea area and function with  the help of function
#include<iostream>
using namespace std;
double cir(int r)
{
    double cir=2*3.14*r;
    return(cir);
}
double area(int r)
{
    double area=3.14*r*r;
    return(area);

}
  main()
{
    int r;
    cout<<"enter the radius"<<endl;
    cin>>r;
    cout<<"area"<<area(r)<<endl;
    cout<<"cir"<<cir(r)<<endl;
}