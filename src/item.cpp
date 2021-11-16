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


bool Item::isUsed(string name)
{

}


void Inventory:: addItem(string)
{

}


void Inventory::removeItem(string)
{

}

