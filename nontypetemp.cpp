#include <array>
#include <cassert>

template <typename T, std::size_t Maxsize>
class Stack
{
private:
    std::array<T, Maxsize> elements;
    std::size_t num_elem;

public:
    Stack();
    void push(T const &elem);
    void pop();
    T const &top() const;
    bool empty() const
    {
        return num_elem == 0;
    }
    std::size_t size() const
    {
        return num_elem;
    }
};

template <typename T, std::size_t Maxsize>
Stack<T, Maxsize>::Stack() : num_elem(0) {}

template <typename T, std::size_t Maxsize>
void Stack<T, Maxsize>::push(T const &elem)
{
    assert(num_elem < Maxsize);
    elements[num_elem] = elem;
    ++num_elems;
}

template <typename T, std::size_t Maxsize>
void Stack<T, Maxsize>::pop()
{
    assert(!elem.empty());
    --num_elem;
}

template <typename T, std::size_t Maxsize>
T const &Stack<T, Maxsize>::top() const
{
    assert(!elem.empty());
    return elem[num_elem - 1];
}