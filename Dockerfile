FROM gcc:latest

WORKDIR /usr/src/v1

COPY ./src/ .

RUN g++ -o v1 ./InputOutput.cpp ./InputValidation.cpp ./BloomFilter.cpp ./Application.cpp ./UrlManager.cpp ./main.cpp ./CheckUrl.cpp ./SetHashParam.cpp ./AddUrl.cpp ICommand.h


CMD ["./v1"]