#include <iostream>
#include "display.h"

int main() {

  startDisplay();
  int input;
  while (true) {
    std::cin >> input;
    switch(input) {
      case(1):
        std::cout << "You entered 1" << std::endl;
        break;
      case(2):
        std::cout << "You entered 2" << std::endl;
        break;
      case(3): 
        std::cout << "You entered 3" << std::endl;
        break;
      case(4):
        std::cout << "Exiting Program." << std::endl;
        return 0;
      default:
	break;
    }



  }


  return 0;
}
