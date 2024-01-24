FROM gcc:latest

WORKDIR /usr/src/v1

COPY ./src/ .

RUN g++ -o v1 ./input_output.cpp ./InputValidation.cpp ./bloomfilter.cpp ./application.cpp ./UrlManager.cpp main.cpp

CMD ["./v1"]