#include<iostream>
using namespace std;
class heyman
{ 
    private: 
    int a,b,c;
    string name;
    public:
    heyman(){ 
       
        a=25;
        b=65;
    }
    heyman(int a,int b){ 
        //a=b=x;
       this->a=a;
       this->b=b;
       
    }
     heyman(int a,int b,int c){ 
        //a=b=x;
       this->a=a;
       this->b=b;
        this->c=c;
    }
    heyman (string name){ 
        this->name=name;
    }
    void getdata(){ 
        cout<<"------------------"<<endl;
        cout<<"the A: "<<a<<endl;
        cout<<"the A: "<<b<<endl;
        cout<<"The my name: "<<name<<endl;
    }
    void getdatas(){ 
        cout<<"The C ::::: "<<c<<endl;
    }
};
int main()
{  
    heyman adnan;
    heyman adnan1(5,34);
    heyman adnan3(5,34,65);
    heyman adnan4("Esteak Ahmed Adnan");
    adnan.getdata();
    adnan1.getdata();
    adnan3.getdatas();
    adnan4.getdata();
 return 0;
}