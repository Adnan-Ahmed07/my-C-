#include<iostream>
#include<string>
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
     int chioce;
     string ch;
 calcu adnan;
  do
 {
 cout<<"Enter calcu (1 to 2): ";
 cin>>chioce;

switch (chioce)
{
case 1:  adnan.getdata();
    break;
case 2:  adnan.getdata2();
    break;
}
 cout<<"Do you want to contione? . please try again : ";
 cin>>ch;    
 }  while (ch == "Yes" || ch == "yes");
   
 return 0;
}