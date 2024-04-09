#include <iostream>
using namespace std;


//
//Inheritance
//

//Parent Class
class Animal
{
   public: 
      int age;
      int weight;

      void function(){
        cout << "Not in a condition of eating. " << endl;
        cout << "Sleeping" << endl;
      }
};

//Child Class
class dog:public Animal{

};


int main() {
  // Inheritance

  dog d1;
  d1.function();

  
}