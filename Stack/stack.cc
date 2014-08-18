#include <stdexcept>

template<typename T>
class Stack
{
public:
    Stack(int capacity = 10);
    ~Stack();

    bool empty() const;
    bool full() const;
    int size() const;
    T top() const;

    Stack<T>& push(T val);
    Stack<T>& pop();
private:
    T *m_stack;
    int m_capacity;
    int m_pos;

};

template<typename T>
Stack<T>::Stack(int capacity):m_capacity(capacity),m_pos(-1)
{
    m_stack = new T[capacity];
}

template<typename T>
Stack<T>::~Stack()
{
    delete []m_stack;
}

template<typename T>
bool Stack<T>::empty() const
{
    return (size()==0)?true:false;
}

template<typename T>
bool Stack<T>::full() const
{
    return (size()==m_capacity)?true:false;
}

template<typename T>
int Stack<T>::size() const
{
    return (m_pos+1);
}

template<typename T>
T Stack<T>::top() const
{
    if(empty())
      throw std::runtime_error("stack is empty");
    return m_stack[m_pos];
}

template<typename T>
Stack<T>& Stack<T>::push(T val)
{
    if(full())
      throw std::runtime_error("stack is full");
    m_stack[++m_pos] = val;

    return *this;
}

template<typename T>
Stack<T>& Stack<T>::pop()
{
    if(empty())
      throw std::runtime_error("stack is empty");
    --m_pos;

    return *this;
}
