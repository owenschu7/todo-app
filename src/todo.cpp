#include <iostream>
#include "display.h"
#include <vector>
#include <string>

int main() {

  //create new vector
  std::vector<std::string> todoList;
  
  




  startDisplay();
  int input;
  std::string strInput;
  while (true) {
    std::cin >> input;
    switch(input) {
      case(1):
	//add item to list
	//prompt user for name of item
	//append item to vector and store it in data.txt      
        std::cout << "What would you like to add to the list" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, strInput);
	todoList.push_back(strInput);
        break;
      case(2):
	//remove item
	//prompt user for name of item
	//remove item from vector and data.txt
	std::cout << "You entered 2" << std::endl;

        break;
      case(3): 
        //list all items
	std::cout << "===== To-Do list =====" << std::endl;
	for (std::string str : todoList) {
          std::cout << " - " << str << std::endl;
	}



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
