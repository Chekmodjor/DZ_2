#pragma once
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