#include "CheckUrl.h"

CheckUrl::CheckUrl() : manager(new UrlManager()) {
    // Constructor implementation
}

CheckUrl::~CheckUrl() {
    delete manager;
    // Destructor implementation
}

void CheckUrl::execute(std::vector<std::string> input, BloomFilter* bf) {
    // Assuming 'bf' is a member of the class or passed as a parameter
    // Ensure 'bf' is initialized and accessible in this scope
      if(bf->containsElement(input[1])){
         std::cout << "true ";
         if(manager->checkUrl(input[1])) {
         std::cout << "true" << std::endl;
         
                } else {
        std::cout << "false" << std::endl;
      }
       }
         else {
        std::cout << "false" << std::endl;
      }
        
  }