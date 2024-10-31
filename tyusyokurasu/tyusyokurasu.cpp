// tyusyokurasu.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
/*
純粋仮想関数のサンプル

*/
#include <iostream>
using namespace std;
class IAnimal {
public:
    virtual void bark()=0;
    virtual void run() = 0;
    virtual ~IAnimal() {}

};
class Dog :public IAnimal {
public:
    void bark() {
        cout << "WAN WAN" << endl;

    }
    void run() {


    }
    ~Dog() {


    }

};
class Cat :public IAnimal {
public:
    void bark() {

        cout << "NYAN NYAN " << endl;
    }
    void run() {

        
    }
    ~Cat() {


    }

};




int main()
{
    
    IAnimal* s[] = {
      new Dog,
      new Cat,
      //nullptr
    };
    for (const auto& p : s) {
        p->run();
        p->bark();
 
    }





}




