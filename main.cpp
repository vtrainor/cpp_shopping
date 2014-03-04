#include "inventory.h"
#include "item.h"
#include <iostream>

int main (int argc, char* argv[]){
  Item item_apple = Item("apple", .45);
  Item item_milk = Item ("milk", 2.99);
  Item item_bread = Item("bread", 3.49);
  Item item_orange = Item("orange", .30);
  Inventory store_inventory = Inventory();
  store_inventory.add_items(item_apple, 6);
  store_inventory.add_items(item_orange, 8);
  store_inventory.print_items();
  store_inventory.remove_item("apple", 4);
  store_inventory.remove_item("orange", 10);
  store_inventory.print_items();
}
