
#include <iostream>
#include <cstdint>
using namespace std;

class Power
{
private:
    int RealNum2;
    int RealNum1;
public:
    void setRealNum(int v2, int v1)
    {
        RealNum2 = v2;
        RealNum1 = v1;
    }

    int CalculateNum()
    {
        return pow(RealNum2, RealNum1);
    }

    Power() : RealNum2(2), RealNum1(1)
    {}

};

class RGBA
{
private:
    uint8_t m_red;
    uint8_t m_green;
    uint8_t m_blue;
    uint8_t m_alpha;

public:

    RGBA() : m_red(0), m_green(0), m_blue(0), m_alpha(255)
    {}

    RGBA(uint8_t r, uint8_t g, uint8_t b, uint8_t a) : m_red(r), m_green(g), m_blue(b), m_alpha(a)
    {}

    void print()
    {
        cout << "Red:" << static_cast<unsigned int>(m_red) << " Green:" << static_cast<unsigned int>(m_green) << " Blue:" << static_cast<unsigned int>(m_blue) << " Alpha:" << static_cast<unsigned int>(m_alpha) << endl;
    }


};

class Stack
{
private:
    int arr[10];
    int LenghtOfStack;
public:
    Stack()
    {
        LenghtOfStack = 0;
    }

    void reset()
    {
        LenghtOfStack = 0;
    }

    bool push(int NumArr)
    {
        if (LenghtOfStack == sizeof(arr))
        {
            return false;
        }
        else
        {
            arr[LenghtOfStack] = NumArr;
            ++LenghtOfStack;
            return true;
        }
    }

    void pop()
    {
        if (LenghtOfStack == 0)
        {
            cout << "Stack empty";
        }
        else
        {
            --LenghtOfStack;
        }

    }

    void print()
    {
        cout << "(";
        for (int i = 0; i < LenghtOfStack; ++i)
        {
            cout << arr[i];
        }
        cout << ")" << endl;
    }

};


int main()
{
    std::cout << "Hello World!\n";
    Power pov;
    cout << pov.CalculateNum() << endl;

    int m_red;
    int m_green;
    int m_blue;
    int m_alpha;

    cout << "Enter red:";
    cin >> m_red;
    cout << endl;

    cout << "Enter green:";
    cin >> m_green;
    cout << endl;


    cout << "Enter blue:";
    cin >> m_blue;
    cout << endl;

    cout << "Enter alpha:";
    cin >> m_alpha;
    cout << endl;

    RGBA color(m_red, m_green, m_blue, m_alpha);
    color.print();


    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}