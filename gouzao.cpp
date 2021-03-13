#include<iostream>
using namespace std;

class  Thing 
{
public: 
    Thing (int a=10,int b=20,int c=30)     //默认构造函数带默认参数
    {  x=a;y=b;z=c;}                       //函数参数有默认值，调用该函数可以不传实参，形参将采用默认值

    void printThing(){
        cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
    }
private:
    int x;
    int y;
    int z;
};

int main(int argc,const char * argv[]){
    Thing t;
    t.printThing();

    Thing s(1);
    s.printThing();

    Thing r(1,2);
    r.printThing();

    Thing v(1,2,3);
    v.printThing();
    return 0;
}