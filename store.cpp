/* Victoria Tisdale
 * 2/23
 */

#include "store.h"
#include "inventory.h"
#include "item.h"
#include <string>
#include <iostream>

std::void Store::print_inventory() const{
  inventory.print_items();
}

