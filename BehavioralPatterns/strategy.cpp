#include <iostream>
using namespace std;

class Strategy
{
public: 
    virtual void AlgorithmInterface() = 0;
};

class ConcreteStrategyA : public Strategy
{
public:
    virtual void AlgorithmInterface()
    {
        printf("ConcreteStrategyA.AlgorithmInterface()\n");
    }
};

class Context
{
public:
    Context(Strategy* strategy)
    {
        _strategy = strategy;
    }
private:
    Strategy* _strategy;    
};

int main(int argc, char* argv[])
{
    printf("Hello, world!");
}