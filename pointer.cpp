#include<iostream>
using namespace std;
class supercar {
public:
    string name;
    string price;
    string company;

    /**
     * Prints the name, price, and company of the car.
     */
    void printinfo() {
        cout << name << "\t\t" << price << "\t\t" << company << endl;
    }
};
int main()
{ 
  supercar car0,car1,car2,car3;
  car0.name="name";
  car0.price="price";
  car0.comapany="comapany";
  car1.name="Bently";
  car1.price="23B";
  car1.comapany="Bently";
  car2.name="M23";
  car2.price="3264B";
  car2.comapany="Marcediz";
car3.name="Efrde23";
  car3.price="34B";
  car3.comapany="Alioson";
car0.printinfo();
  car1.printinfo();
  car2.printinfo();
   car3.printinfo();

return 0;

}