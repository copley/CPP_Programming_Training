#include <iostream>
class MyClass
{
private:
    int m_Member;

public:
    MyClass() = default;
    MyClass(const MyClass& rhs) = default;
};

int main()
{
    String someString = "entering date";
    cout << someString << "\n";
    
    MyClass objectA;
    MyClass objectB(MyClass());
    return 0;
}
