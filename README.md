# Foobar-Network Repo :rocket:

## How to Compile the Code:

__Make sure you have the g++ compiler installed.__

__With download:__  
Download the repository zip file. link to repo - https://github.com/shaharrazlan/Foobar-Network/tree/v2.0.6  
Extract the repository.  
Open the Linux terminal.  
Navigate to the repository directory by using the cd command. for example:  
`cd path/to/extracted/repo`  
Compile the code by running this:  
<code>g++ -o v1 ./src/InputOutput.cpp ./src/InputValidation.cpp ./src/BloomFilter.cpp ./src/Application.cpp ./src/UrlManager.cpp ./src/main.cpp ./src/CheckUrl.cpp ./src/SetHashParam.cpp ./src/AddUrl.cpp ./src/ICommand.h</code>

__With cloning:__  
1. Open your terminal.

2. Navigate to the directory where you want to clone the repository:
cd /path/to/your/desired/directory

3. Use git clone with the -b or --branch option to clone the specific version:
`git clone -b v2.0.6 https://github.com/shaharrazlan/Foobar-Network.git`

4. Navigate into the cloned repository:
cd Foobar-Network

Compile the code by running this:  
`g++ -o v1 ./src/InputOutput.cpp ./src/InputValidation.cpp ./src/BloomFilter.cpp ./src/Application.cpp ./src/UrlManager.cpp ./src/main.cpp ./src/CheckUrl.cpp ./src/SetHashParam.cpp ./src/AddUrl.cpp ./src/ICommand.h`

## How to Run the Code:  
After compiling, run the executable:  
`./v1`

## Development Process:
### Jira: 🌻:  
Utilized Jira for sprint management. Tasks were documented, assigned to team members, and tracked for organized workflow.

![Jira](proof/jira.png)

### Test-Driven Development (TDD): 🌻:  
-Followed a TDD workflow for creating new classes.  
-Wrote initial basic tests for each class.  
-Built code incrementally based on test results.  
-Refactored and updated tests as needed.

### Docker: 🌻:  
-Implemented Docker for automatic creation of Dockerized versions for each release.  
-Pushed Dockerized versions to a private repository on DockerHub.

### Refactoring: 🌻:  
-Initially released version v1.0.0 with basic functions and no consideration for edge cases.  
-Upgraded to version v2.0.0, introducing branches, an interface, and a command design pattern. as well as adressing edge cases and refined functions.  
-Made cosmetic changes and added a README file with version v2.5.0.

![Workflow](proof/workflow.png)





