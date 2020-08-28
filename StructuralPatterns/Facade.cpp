#include <iostream>

using namespace std;
class SubSystem1
{
public:
    void SubSystem_1_Function() { cout << "\tsub-system 1 does something changed." << endl; }
    char* GetSubSystem1Message() { return "sub-system 1 GetMessage() response."; }
};

class SubSystem2
{
public:
    void SubSystem_2_Function() { cout << "\tsub-system 2 does something." << endl; }
};

class SubSystem3
{
public:
    void SubSystem_3_Function() { cout << "\tsub-system 3 does something." << endl; }
};

class SubSystemN
{
public:
    void SubSystem_N_Function() { cout << "\tsub-system n does something." << endl; }
};

class Facade
{
public: 
    void DoABunchOfStuff()
    {
        cout << "\nFacade DoABunchOfStuff()" << endl;
        SubSystem1 ss1; ss1.SubSystem_1_Function();
        SubSystem2 ss2; ss2.SubSystem_2_Function();
        cout << "..." << endl;
        SubSystemN ssN; ssN.SubSystem_N_Function();
    }

    void DoABunchOfOtherStuff()
    {
        cout << "\nFacade DoABunchOfStuff()" << endl;
        SubSystem3 ss3; ss3.SubSystem_3_Function();
        SubSystemN ssN; ssN.SubSystem_N_Function();
        cout << "..." << endl;
        SubSystem2 ss2; ss2.SubSystem_2_Function();
    }

    void Do12and3()
    {
        cout << "\nFacade Do12and3()" << endl;
        SubSystem1 ss1; ss1.SubSystem_1_Function();
        SubSystem2 ss2; ss2.SubSystem_2_Function();
        SubSystem3 ss3; ss3.SubSystem_3_Function();
    }

    char* GetMessage()
    {
        SubSystem1 ss1;
        return ss1.GetSubSystem1Message();
    }
};

void makeArray()
{
    char myString[30];
    for (int i = 0; i < 30; i++)
        myString[i] = '*';
}

int main()
{
    makeArray();
    //Facade facade;
    //cout << facade.GetMessage() << endl;
    //facade.DoABunchOfStuff();
    //
    //facade.Do12and3();
    //facade.DoABunchOfOtherStuff();
    // TODO(ross): create build
    // TODO(ross): make destructors
    // int in;
    // cin >> in;
}
