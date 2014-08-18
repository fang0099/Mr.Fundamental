#include <stdexcept>

template<typename T>
class Queue
{
public:
    Queue(int capacity = 10);
    ~Queue();

    bool empty() const;
    bool full() const;
    int size() const;
    T front() const;
    T back() const;

    Queue<T>& push_back(T val);
    Queue<T>& pop_front();

private:
    T* m_queue;
    int m_capacity;
    int m_front;
    int m_rear;
    int m_size;  
};

template<typename T>
Queue<T>::Queue(int capacity):m_capacity(capacity),m_front(0),m_rear(-1),m_size(0)
{
    m_queue = new T[capacity];
}

template<typename T>
Queue<T>::~Queue()
{
    delete []m_queue;
}

template<typename T>
bool Queue<T>::empty() const
{
    return (size()==0)?true:false;
}

template<typename T>
bool Queue<T>::full() const
{
    return (size()==m_capacity)?true:false;
}

template<typename T>
int Queue<T>::size() const
{
    return m_size;
}

template<typename T>
T Queue<T>::front() const
{
    if(empty())
      throw std::runtime_error("queue is empty");
    return m_queue[m_front];
}

template<typename T>
T Queue<T>::back() const
{
    if(empty())
      throw std::runtime_error("queue is empty");
    return m_queue[m_rear];
}

template<typename T>
Queue<T>& Queue<T>::push_back(T val)
{
    if(full())
      throw std::runtime_error("queue is full");
    m_rear = (m_rear + 1) % m_capacity;
    m_queue[m_rear] = val;
    ++m_size;
    
    return *this;
}

template<typename T>
Queue<T>& Queue<T>::pop_front()
{
    if(empty())
      throw std::runtime_error("queue is empty");
    m_front = (m_front + 1) % m_capacity;
    --m_size;

    return *this;
}
