#include<iostream>
using namespace std;
class calcu
{ 
    private:
    int a,b;
    void calcusum(){ 
        cout<<"Enter num: "<<endl;
        cin>>a>>b;
    }
    public:
    void getdata(){ 
        calcusum();
        cout<<a+b<<endl;
    }
    void getdata2(){ 
        calcusum();
        cout<<a-b<<endl;
    }
};
int main()
{
    calcu adnan;
    adnan.getdata();
    adnan.getdata2();
 return 0;
}