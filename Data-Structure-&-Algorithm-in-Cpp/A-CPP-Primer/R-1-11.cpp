#include<iostream>
#include<string>
using namespace std;
class Flower{
    string name;
    int pedals;
    float price;
    public:
    Flower(string n="",int p=0,float pr=00.00)
    {
        name=n;
        pedals=p;
        price=pr;
    }
    void setValue(string n,int p,float pr)
    {
        name=n;
        pedals=p;
        price=pr;
    }
    void getValue()
    {
        cout<<name<<" "<<pedals<<" "<<price<<endl;
    }
};
int main()
{
    Flower sunflower;
    sunflower.setValue("Sunflower",100,12.30);
    sunflower.getValue();
    return 0;
}