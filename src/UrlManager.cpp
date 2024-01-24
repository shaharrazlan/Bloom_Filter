    #include "UrlManager.h"
    // Constructor to initialize the URL set
    

    // Function to add a URL to the set
    void UrlManager::addUrl(std::string url) {
        urlSet.insert(url);
    }

    // Function to check if a URL is present in the set
    bool UrlManager::checkUrl(std::string url) {
        return (urlSet.find(url) != urlSet.end());
    }