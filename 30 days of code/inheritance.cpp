#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{  //interface in C++ is virtual
public:
    virtual int divisorSum(int n)=0;
};
//Write your code here
class Calculator:public AdvancedArithmetic{ //<-- this is the inheritance bit
//Calculator class inherits public properties from the AdvancedArithmetic class
public:
    
    int divisorSum(int n)
    {
        int sum =0;
        for (int i = 1;i<=n;i++)
        {
            if (n%i==0)
            {
                sum += i;
            }
        }
        return sum;
    }
};
int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
