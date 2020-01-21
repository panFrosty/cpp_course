/**
 * @title: Stacks And Queues
 * @author: pgorny
 * 
 **/

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test
{
private:
    string name;

public:
    Test() : name("")
    {
    }
    ~Test()
    {
        // cout << "Destructor called!"<<endl;
    }

    Test(string name) : name(name)
    {
    }

    void print() const
    {
        cout << name << endl;
    }
};

int main()
{
    // LIFO - Stacks
    cout << "Stacks example:" << endl;

    stack<Test> testStack;
    testStack.push(Test("Frosty"));
    testStack.push(Test("Mia"));
    testStack.push(Test("Stefan"));

    /* Invalid code object, undef behaviour 
    Test &test1 = testStack.top();
    testStack.pop(); // Invalidates reference
    test1.print(); // Reference to already destroyed object
    */

    while (testStack.size() > 0)
    {
        Test &test1 = testStack.top();
        test1.print();
        testStack.pop();
    }

    // FIFO - Queue
    cout << "Queues example:" << endl;
    queue<Test> testQueue;
    testQueue.push(Test("Frosty"));
    testQueue.push(Test("Mia"));
    testQueue.push(Test("Stefan"));

    /* Invalid code object, undef behaviour 
    Test &test1 = testQueue.front();
    testQueue.pop(); // Invalidates reference
    test1.print(); // Reference to already destroyed object
    */

   testQueue.back().print();

    while (testQueue.size() > 0)
    {
        Test &test1 = testQueue.front();
        test1.print();
        testQueue.pop();
    }
    return 0;
}