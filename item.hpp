#ifndef _ITEM_HPP_
#define _ITEM_HPP_

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Item
{
    string name;
    string description;
    int amount;

    string itemName;
    string Inventory[100];
    int Inventory_counter = 0;

   
    void isUse(bool);

    public:
    
    Item();
    ~Item();

    string GetName() { return name; }
    void SetName(string val) { name = val; }

    string GetDescription() { return description; }
    void SetDescription(string val) { description = val; }

    int GetAmount() { return amount; }
    void SetAmount(int val) { amount = val; }
                                                                 

    void addItem(string itemName)
    {
        Inventory[Inventory_counter + 1] = itemName;
        Inventory_counter + 1;
    }

   
    void removeItem(string itemName)
    {
        for (int i = 0; i < Inventory_counter; i++)
        {
            if (Inventory[i] == "itemName")
            {
                for (int j = i; j < Inventory_counter; j++)
                {
                    Inventory[j] = Inventory[j+1];
                }

               
            }
        }
        Inventory_counter - 1;
    }

   
    void showInventory()
    {
        cout << "The Inventory has: " << endl;

       
        for (int i = 0; i < Inventory_counter; i++)
        {
            cout <<"The "<<i<<"thing is: " << Inventory[i] << endl;
        }
    }

};

class Weapon: public Item
{
    int damage=10;
    int price = 100;

   
    public:
   
    Weapon();
    ~Weapon();


   
    void isUse(bool current_state,int player_damage,int player_money)
    {
        if (current_state==true) {
            player_damage = player_damage + damage;
            player_money = player_money - price;
        }
    }
};


class Armor : public Item
{
    int durability=10;
    int price = 100;

   
    public:
   
    Armor();
    ~Armor();


    void isUse(bool current_state, int player_durability,int player_money)
    {
        if (current_state == true) {
            player_durability = player_durability + durability;
            player_money = player_money - price;
        }
    }

};


class Potion : public Item
{

    int restoreHP=100;
    int increaseDamage=10;
    int price = 100;

   
    public:
   
    Potion();
    ~Potion();


   
    void isUse(bool current_state, int player_HP,int player_damage,int player_money)
    {
        if (current_state == true) {
            player_HP = player_HP + restoreHP;
            player_damage = player_damage + increaseDamage;
            player_money = player_money - price;
        }
    }

};





#endif //_ITEM_HPP_
