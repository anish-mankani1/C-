#include<iostream>
using namespace std;
class bank
{
    private:
    int wallet;
       public:    
    int depositer(int cash)
    {
        wallet=cash;
    }
  void checkbankbalance()
  {
    cout<<"balance"<< " "<<wallet<<endl;
  }
};
int main()
{
    bank account;
    account.depositer(5000);
    account.checkbankbalance();
    return 0;
}
