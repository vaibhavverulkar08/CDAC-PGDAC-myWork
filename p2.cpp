#include <iostream>
using namespace std;

int main()
{

class Demo
{
private:
    int num1;

public:
    void get()
    {
        num1 = 10;
    }

    void show()
    {
        cout<< "num1:"<<num1<< endl;
    }
};

    Demo d;
    d.get();
    d.show();
    return 0;
}

