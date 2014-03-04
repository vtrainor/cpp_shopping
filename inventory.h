/* Victoria Tisdale
*/

#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>
#include <utility>
#include "item.h"

class Inventory {

public:
  Inventory(){}
  std::vector<std::pair<Item, int> > get_items() const;
  void print_items() const;
  void add_items(Item new_item, int quantity);
  bool remove_item (std::string type, int quantity);
private:
  std::vector<std::pair<Item, int> > items;
};

#endif //INTVENTORY_H
