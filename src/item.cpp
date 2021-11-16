Include"item.h"

Item::Item()
{
    SetName("Weapon");
    SetDescription("Cause damage to monster");
    SetAmount(1);

    SetName("Armor");
    SetDescription("Protect player");
    SetAmount(1);

    SetName("Potion");
    SetDescription("Cure player");
    SetAmount(1);

}

//For deletion
Item::~Item()
{
    cout<<"Memory Free!"<<endl;
}

bool Item::isUsed(string name)
{

}





void Item::showInfo()
{

}








