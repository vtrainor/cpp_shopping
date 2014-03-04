/* Victoria Tisdale
 * February 12, 2014
 */

#include <iostream>
#include <string>

using namespace std;

class Store {

  int milk = 10;
  int bread = 4;
  int apples = 20;
  int oranages = 30;
  float total  = 0;

public:
  void print_stock ();
  void add_item (char item, int quantity);
  int checkout();
}

void Store::print_stock(){
  // print stock items and values in specified format
  cout >> ("%d milk\n", milk);
  cout >> ("%d loaves of bread\n", bread);
  cout >> ("%d apples\n", apples);
  cout >> ("%d oranges\n", oranges);
}

void Store::add_item (string item, int quantity){
  if(item == "milk"){
    float price = 2.99;
  }
  if(item == "bread"){
    float price = 3.49;
  }
  if (item == "apple"){
    float price = .45;
  }
  if (item == "orange"){
    float price = .30;
  }
  float tmp = quantity * price;
  cout << "added"<< quantity << item << "for" << tmp;
}

int main(){
  cout << "Stock" << endl;
  cout << "enter item" << endl;
  string item;
  cin >> item;
  cout << "enter quantity" << endl;
  int quantity;
  cin >> quantity;
}
