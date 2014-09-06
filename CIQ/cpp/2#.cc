/*
 * 0.2: Design a Class that can not be inherited using C++.
 */
class Base
{
    private:
        Base(){}
        ~Base(){}
        friend class A;
};

class A: virtual public Base
{
    public:
        A(){}
        ~A(){}
    private:
        int m_v;
};

class B: public A
{
}

int main()
{
    B a;
    return 0;
}
