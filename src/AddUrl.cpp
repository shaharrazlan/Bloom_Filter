#include "AddUrl.h"

// Constructor implementation
AddUrl::AddUrl() : manager(new UrlManager()) {
    // Create a new instance of UrlManager and assign it to the 'manager' member
}

// Destructor implementation
AddUrl::~AddUrl() {
    delete manager;  // Deallocate memory for the UrlManager instance
}

// Implementation of the execute method
void AddUrl::execute(std::vector<std::string> input, BloomFilter* bf) {
    bf->addElement(input[1]);  // Add the specified URL to the BloomFilter
    manager->addUrl(input[1]);  // Add the specified URL to the UrlManager
}
