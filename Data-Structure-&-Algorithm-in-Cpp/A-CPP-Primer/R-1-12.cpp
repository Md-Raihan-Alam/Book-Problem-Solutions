#include<iostream>
#include<string>
using namespace std;
class CreditCard{
    string name;
    string number;
    int balance;
    int limit;
    public:
    CreditCard(const string &no,const string &nm,int lm,double bl)
    {
        number=no;
        name=nm;
        balance=bl;
        limit=lm;
    }
    bool charelt(double price)
    {
        if(price<=0) return false;
        if(price+balance>double(limit))
            return false;
        balance+=price;
        return true;
    }
    void makePayment(double payment)
    {
        if(payment>=0)
            balance-=payment;
    }
};