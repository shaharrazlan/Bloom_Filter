#include "AddUrl.h"

AddUrl::AddUrl() : manager(new UrlManager()) {
    // Constructor implementation
}

AddUrl::~AddUrl() {
    delete manager;
    // Destructor implementation
}

void AddUrl::execute(std::vector<std::string> input, BloomFilter* bf) {
    bf->addElement(input[1]);
    manager->addUrl(input[1]);
}