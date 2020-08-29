#include <iostream>
using namespace std;

class State
{
public:
    virtual short GetId() = 0;
};

//class State
//{
//public:
//    virtual void Handle() = 0;
//};

class Context
{
public:
    void Request()
    {
        if (_state->GetId() == 1)
            printf("We'll tell ConcreteStateA to handle this request.\n");
        if (_state->GetId() == 2)
            printf("We'll tell ConcreteStateB to handle this request.\n");
        printf("If you have any more requests add them here like this:\n");
        printf("  if (_state->GetId() == n)\n");
        printf("    printf(We'll tell ConcreteStateN to handle this request.')\n");
        //printf("The Context makes a request by calling _state.Handle()\n");
        //_state->Handle();
    }

    void SetState(State* state)
    {
        _state = state;
    }
private:
    State* _state;
};

class ConcreteStateA : public State
{
public:
    ConcreteStateA() : State(){}
    short GetId() { return 1; }
        
    //void Handle()
    //{
    //    printf("The current state(ConcreteStateA) handles the request.\n");
    //}
    
};

class ConcreteStateB : public State
{
public:
    
    ConcreteStateB() : State() {}
    short GetId() { return 2; }
    //void Handle()
    //{
    //    printf("The current state(ConcreteStateB) handles the request.\n");
    //}

};

int main(int argc, char* argv[])
{
    printf("State Pattern\n");
    printf("Intent:\nAllow an object to alter its behavior when its internal state changes.\n");
    printf("The object will appear to change its class.\n");
    printf("---\n");
    Context context;
    ConcreteStateA cteStA;
    printf("First, we set the Context's state to ConcreteStateA.");
    context.SetState(&cteStA);
    printf("...and then make a request.\n");
    context.Request();
    ConcreteStateB cteStB;
    printf("Then, we set the Context's state to ConcreteStateB.");
    context.SetState(&cteStB);
    printf("...and then make another request.\n");
    context.Request();
    printf("And its like that shee?\n");
    
    int in;
    cin >> in;
}