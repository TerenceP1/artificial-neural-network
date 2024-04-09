#include <vector>
#include <exception>
using namespace std;
class network {
private:
bool isInit = false; // Turns true when user initializes neural network
public:
class public std::exception: NeuralNetworkInitializedError {
public:
    char* err;
    char* what(){return err;}
};
class public std::exception: NeuralNetworkNotInitializedError {
public:
    char* err;
    char* what(){return err;}
};
};
