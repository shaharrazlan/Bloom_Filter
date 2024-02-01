markdown
Copy code
# 🚀 How to Compile the Code

1. Download the repository zip locally from [this link](#).
2. Extract the repository from the downloaded zip file.
3. Open the Linux terminal.
4. Navigate to the repository directory using the `cd` command, for example:
   ```bash
   cd path/to/extracted/repo
Compile the Code
To compile, run the following command in your Linux terminal:

bash
Copy code
g++ -o v1 ./src/InputOutput.cpp ./src/InputValidation.cpp ./src/BloomFilter.cpp ./src/Application.cpp ./src/UrlManager.cpp ./src/main.cpp ./src/CheckUrl.cpp ./src/SetHashParam.cpp ./src/AddUrl.cpp ./src/ICommand.h
Make sure you have installed the g++ compiler.

How to Run the Code
After you have compiled, run:

bash
Copy code
./v1
Our Process
Jira

Used Jira to manage our sprint. Tasks were documented, assigned, and tracked for an organized workflow.

TDD

Worked in a TDD workflow. For every new class, we first created a test, starting from basic to advanced. Tests guided our step-by-step code building.

Docker

Utilized Docker for automatic creation of Dockerized versions for each release, pushing them to a private repository on DockerHub.

Refactoring

Started with a naive code (v1.0.0) and upgraded to v2.0.0. Added branches, interface, command design pattern, and handled edge cases. Finished with cosmetic changes and added this README file.



# 🚀 How to Compile the Code

1. Download the repository zip locally from [this link](#).
2. Extract the repository from the downloaded zip file.
3. Open the Linux terminal.
4. Navigate to the repository directory using the `cd` command, for example:
   ```bash
   cd path/to/extracted/repo

**Compile the Code**

To compile, run the following command in your Linux terminal:
   ```bash
   g++ -o v1 ./src/InputOutput.cpp ./src/InputValidation.cpp ./src/BloomFilter.cpp ./src/Application.cpp ./src/UrlManager.cpp ./src/main.cpp ./src/CheckUrl.cpp ./src/SetHashParam.cpp ./src/AddUrl.cpp ./src/ICommand.h



 **Make sure you have installed g++ compiler.**

How to run the code - After you have compiled Run -
```bash
./v1

Our proccess -
jira - We used jira to run our sprint. We wrote down tasks that needed to be done and handed each one out to someone on our team. It helped us work in an organized matter, we always knew who had what task to do, and we could see our progress.

![Jira](proof/jira.png)


![Workflow](proof/workflow.png)





