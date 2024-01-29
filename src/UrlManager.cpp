#include "UrlManager.h"
    // Constructor to initialize the URL set
    

    // Function to add a URL to the set
    void UrlManager::addUrl(std::string url) {
       std::ofstream outputFile("urlFile.txt");
    // Check if the file is opened successfully
       if (outputFile.is_open()) {
            // Write data to the file
            outputFile << url << std::endl;

            // Close the file when done
            outputFile.close(); 
       }
    }   
    

    // Function to check if a URL is present in the set
    bool UrlManager::checkUrl(std::string url) {
         std::ifstream inputFile("urlFile.txt");

        if (!inputFile.is_open()) {
            std::cerr << "Unable to open the file for reading." << std::endl;
            return false;
        }

        std::string line;
        while (std::getline(inputFile, line)) {
            if (line == url) {
                inputFile.close();
                return true;  // URL found in the file
            }
        }

        inputFile.close();
        return false;  // URL not found in the file
}
