#include <iostream>
#include <list>
#include <stack>

int main()
{
    std::list<double> decimalList;
    decimalList.push_back(20.8);
    decimalList.push_back(17.8);
    decimalList.push_back(3.6);
    decimalList.push_back(5.4);

    std::stack<double, std::list<double>> decimalStack(decimalList);
