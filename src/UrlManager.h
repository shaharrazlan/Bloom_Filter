#ifndef URL_MANAGER_H
#define URL_MANAGER_H

#include <iostream>
#include <fstream>
#include <unordered_set>
#include <string>

class UrlManager {
private:
    std::unordered_set<std::string> urlSet;

public:
    // Constructor to initialize the URL set
    UrlManager() {};

    // Function to add a URL to the set
    void addUrl(std::string url);

    // Function to check if a URL is present in the set
    bool checkUrl(std::string url);
};

#endif // URL_MANAGER_H
