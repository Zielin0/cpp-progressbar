#include "util.h"

string input;

void Menu();

int main() {
  Menu();
  Progress(input);
  return 0;
}

void Menu() {
  std::cout << UYEL << "Available themes:\n";
  std::cout << WHT << "- " << BLU << "Blue\n";
  std::cout << WHT << "- White\n";
  std::cout << WHT << "- " << MAG << "Magenta\n";

  std::cout << UCYN << "Enter theme:" << reset << " ";
  std::cin >> input; 
  std::cout << "\n";
}
