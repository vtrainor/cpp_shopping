/* Victoria Tisdale
*/

#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {

 public:
  Item(std::string type, float price);
  std::string get_type() const;
  float get_price() const;

 private:
  const std::string type;
  const float price;
};
#endif //ITEM_H
