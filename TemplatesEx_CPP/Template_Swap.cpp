#include <iostream>
using namespace std;
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int n1 = 5, n2 = 10;
    cout << "Before swapping: num1="<< n1 << ", num2 = " << n2 <<endl;

    swapValues(n1, n2);
    //OR
    //swapValues <int>(n1, n2);

    cout <<"After swapping: num1 = " <<n1 <<", num2 = " <<n2 <<endl;

    // double pi = 3.14, e = 2.71;
    // swapValues(pi, e);
    // std::cout << "After swapping: pi = " << pi << ", e = " << e << std::endl;

    // char ch1 = 'A', ch2 = 'B';
    // swapValues(ch1, ch2);
    // std::cout << "After swapping: ch1 = " << ch1 << ", ch2 = " << ch2 << std::endl;

    return 0;
}
