#include <iostream>
#include "StackFactory.hpp"

using namespace std;

int main() {

    Stack<int>* s1 = StackFactory<int>::GetStack();
    s1->push(10);
    s1->push(20);
    s1->push(30);
    s1->print();

    cout << "Top: " << s1->peek() << endl;

    s1->pop();
    s1->print();

    s1->rotate(Stack<int>::RIGHT);
    s1->print();

    delete s1;

    Stack<int>* s2 = StackFactory<int>::GetStack(5);
    s2->push(1);
    s2->push(2);
    s2->push(3);
    s2->print();

    delete s2;
}