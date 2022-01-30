#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "GoodBasic.h"
#include "Freezer.h"
#include "Software.h"
#include "WorkClass.h"
#include "Chipsi.h"

class Mushroom
{
private:
    int count;
    string color;
    bool poisonous;
public:
    Mushroom()
    {
        count = 1;
        color = "red";
        poisonous = 1;
    }
    Mushroom(int c, string co, bool p)
    {
        count = c;
        color = co;
        poisonous = p;
    }
    int getCount()
    {
        return count;
    }
    string getColor()
    {
        return color;
    }
    bool getPoison()
    {
        return poisonous;
    }
    void setCount(int c)
    {
        count = c;
    }
    void setCol(string c)
    {
        color = c;
    }
    void setP(bool p)
    {
        poisonous = p;
    }
    void toString()
    {
        cout << "toString inside Mushrooms: count: " << getCount() << ", color: " << getColor() << ", Poison: " << getPoison() << "\n";
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Mushroom* a = new Mushroom();
    static_cast<Mushroom*>(a)->toString();

    /*WorkClass workClass;
    workClass.startWork();*///Теперь создание всех классов производится в классе WorkClass


    //std::cout << "Hello Привет World!\n";
    // Freezer freezer01(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
    // Freezer* pointerFreezer01 = &freezer01;

    // freezer01.printAllInfo();
     //pointerFreezer01->printAllInfo();
    // freezer01.toString();
    // Software software01(1, 234, "OS Windows", "Some thing...", 2, 3);
    // software01.toString();
     //int array01[5] = {1,2,3,4,5};
     //int* pointerToArray = array01;
    // cout << pointerToArray[2];
    // freezer01.printString(freezer01.getName());
     //freezer01.goodsPublicFunction();
     //Универсальный указатель

     /*GoodBasic* universalPointer01 = new GoodBasic;
     GoodBasic* universalPointer02 = new Freezer(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
     GoodBasic* universalPointer03 = new Software(1, 234, "Soft FOR Samsung", "Very Good thing...", 2, 34);
     static_cast<GoodBasic*>(universalPointer01)->toString();
     static_cast<GoodBasic*>(universalPointer02)->toString();
     static_cast<GoodBasic*>(universalPointer03)->toString();*/
}