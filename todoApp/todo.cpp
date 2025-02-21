#include <iostream>

int main() {

  std::cout << "===============To-Do===============" << std::endl;
  std::cout << "'1' - add new item" << std::endl;
  std::cout << "'2' - check off item" << std::endl;
  std::cout << "'3' - list all items" << std::endl;
  std::cout << "'4' - exit" << std::endl;

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
