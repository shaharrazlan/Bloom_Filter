🚀 **How to Compile the Code**

1. Download the repository zip locally from [this link](https://github.com/shaharrazlan/Foobar-Network.git).
2. Extract the repository from the downloaded zip file.
3. Open the Linux terminal.
4. Navigate to the repository directory using the `cd` command, for example:
   ```bash
   cd path/to/extracted/repo

🚀 **Compile the Code**

To compile, run the following command in your Linux terminal:

g++ -o v1 ./InputOutput.cpp ./InputValidation.cpp ./BloomFilter.cpp ./Application.cpp ./UrlManager.cpp ./main.cpp ./CheckUrl.cpp ./SetHashParam.cpp ./AddUrl.cpp ICommand.h && ./v1


Make sure you have installed g++ compiler.

How to run the code - After you have compiled Run - "./v1"

Our proccess -
jira - We used jira to run our sprint. We wrote down tasks that needed to be done and handed each one out to someone on our team. It helped us work in an organized matter, we always knew who had what task to do, and we could see our progress.

![Jira](proof/jira.png)

TDD - We worked in a TDD workflow, meaning for every new class we first created a test. This test starts out as a very basic test that we then use to build our code step by step. At first we test for very simple things and according to that we wrote our classes. Then when we wanted to refactor we would re-write the test to be more specific and advanced.

Docker - We used docker so that for every release version of the code it will automatically push a dockerized version to a private repository on DockerHub.

Refactoring - At first we programmed a very naive code which has basic functions that didn't take into account edge cases. This was the first version which we release - v1.0.0.
After that we upgraded our program, we added branches and used an interface and command design pattern, And we took care of edge cases with our functions. with that we released our second version v2.0.0.
In the end we added some cosmetic changes and added our README file.
How to compile our code -

![Workflow](proof/workflow.png)





