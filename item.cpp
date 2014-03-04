/* Victoria Tisdale
*/

#include "item.h"
#include <string>
using std::string;

Item::Item(string type, float price)
    : type(type), 
      price(price) {}

string Item::get_type() const{
  return type;
}

float Item::get_price() const{
  return price;
}
