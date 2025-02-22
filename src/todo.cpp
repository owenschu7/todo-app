#include <iostream>
#include "display.h"
#include <vector>
#include <string>


void removeItem(std::vector<std::string>& vector, std::string str);

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
        std::cout << "What would you like to add to the list?" << std::endl;
	
	std::cin.ignore();
	std::getline(std::cin, strInput);
	
	todoList.push_back(strInput);
        startDisplay();
       
       	break;
      case(2):
	//remove item
	//prompt user for name of item
	//remove item from vector and data.txt
	std::cout << "What would you like to check off the list?" << std::endl;
	
	std::cin.ignore();
        std::getline(std::cin, strInput);

	removeItem(todoList, strInput);
        startDisplay();

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

void removeItem(std::vector<std::string>& vector, std::string str) {
  //find str in vector
  for (int i = 0; i < vector.size(); i++) {
    if (vector[i] == str) {
      //remove vector[i] from vector
      std::cout << "Found item in array, removing it now." << std::endl;
      vector.erase(vector.begin() + i);
    }
  }
}


