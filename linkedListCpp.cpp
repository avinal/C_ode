#include<iostream>
template <class E>
class linkedList
{
private:
    struct node
    {
        E data;
        struct node *next;

        node(E e, node n)
        {
            data = e;
            next = n;
        }
    };

    node head = nullptr;
    node tail = nullptr;
    int size = 0;

public:
    linkedList();
    int size(){
        return this.size;
    }
    void add(E e);
    void remove();

};



int main(int argc, char const *argv[])
{
    linkedList<int> list;
    return 0;
}
