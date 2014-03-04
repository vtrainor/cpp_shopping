
/* Victoria Tisdale
 */

#include "inventory.h"
#include "shopper.h"
 
std::float Inventory::get_total() const{
  std::float total = 0.0;
  for (auto& item : inventory) { 
    total += item.first.get_price() * p.second;
  }
  return total;
}
