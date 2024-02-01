#include "CheckUrl.h"

// Constructor implementation for CheckUrl
CheckUrl::CheckUrl() : manager(new UrlManager()) {
    // Create a new instance of UrlManager and assign it to the 'manager' member
}

// Destructor implementation for CheckUrl
CheckUrl::~CheckUrl() {
    delete manager;  // Deallocate memory for the UrlManager instance
}

// Implementation of the execute method for CheckUrl
void CheckUrl::execute(std::vector<std::string> input, BloomFilter* bf) {
    // Check if the BloomFilter contains the specified URL
    if (bf->containsElement(input[1])) {
        std::cout << "true ";  // Output "true" if the BloomFilter contains the URL

        // Check if the UrlManager also confirms the presence of the URL
        if (manager->checkUrl(input[1])) {
            std::cout << "true" << std::endl;  // Output "true" if the UrlManager confirms the URL
        } else {
            std::cout << "false" << std::endl;  // Output "false" if the UrlManager does not confirm the URL
        }
    } else {
        std::cout << "false" << std::endl;  // Output "false" if the BloomFilter does not contain the URL
    }
}
