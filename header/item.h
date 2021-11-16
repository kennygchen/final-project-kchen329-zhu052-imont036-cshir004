#include<iostream>
#include<vector>

using namespace std;

class Item
{
    string name;
    string description;
    int amount;

    vector<string> itemName;
    vector<string> itemInventory;
    vector<string> playerInventory;
    
    bool isUsed(string);

public:
    Item();
   ~Item();

    string GetName() { return name; }
    void SetName(string val) { name = val; }

    string GetDescription() { return description; }
    void SetDescription(string val) { description = val; }

    int GetAmount() { return amount; }
    void SetAmount(int val) { amount = val; }

};

class Weapon: public Item
{
    int damage;
   
public:
    Weapon();
   ~Weapon();

    int GetDamage() { return damage; }
    void SetDamage(int val) { damage = val; }

};


class Armor : public Item
{
    int durability;

    public:
    Armor();
   ~Armor();

    int GetDurability() { return durability; }
    void SetDurability(int val) { durability = val; }

};


class Potion : public Item
{
    int restoreHP;
    int increaseATT;
  
    public:
    Potion();
   ~Potion();

    int GetRestoreHP() { return restoreHP; }
    void SetRestoreHP(int val) { restoreHP = val; }

    int GetIncreaseATT() { return increaseATT; }
    void SetIncreaseATT(int val) { increaseATT = val; }

    };



