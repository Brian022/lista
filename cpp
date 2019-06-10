#include <iostream>

using namespace std;

template<typename T>
class node
{
    T data;
    node<T> *nPointer;


    public:
    node(T data){cout<<"constructor node\n"<<data;}


};

template<typename T>
class lista
{
    T *head;
    public:
    lista(T data)
    {
        head = &data;
        cout<<"constructor";
    }
    T add(T x)
    {
        T *ptr = new T();
        nPointer = ptr;
        cout<<"success\n";
        delete ptr;

    }

};

int main()
{
    lista<int> a (5);
    a.add(4);
    return 0;
}
