#include "inventory.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cerr;

std::vector<std::pair<Item, int> > Inventory::get_items() const{
  return items;
}
void Inventory::print_items() const{
  for (const auto& p : items) {
    cout << p.second << " " << p.first.get_type() << "(s)" << endl;
  }
}
void Inventory::add_items(Item new_item, int quantity){
  for (auto& p : items) {
    if (p.first.get_type() == new_item.get_type()){
      p.second += quantity;
      return;
    }
  }
  items.push_back(std::make_pair(new_item, quantity));
}
bool Inventory::remove_item (std::string type, int quantity){
  for (auto& p : items) {
    if (p.first.get_type() == type){
      if (p.second < quantity){
        cerr << "WARNING: quantity to remove too large, removed all items of type" << type << endl;
        p.second = 0;
        return false;
      }
      p.second -= quantity;
      return true;
    }
  }
  cerr << "ERROR: no items in inventory of type " << type << endl;
  return false;
}


/* vector<pair<Item, int> >::const_iterator iter = items.begin();
 (can also have interator instead const_iterator if you want to 
 change things in the loop.
 for (; iter != items.end(); ++iter) {
   ...
 * }
 * (*iter)
 * iter->
 */
