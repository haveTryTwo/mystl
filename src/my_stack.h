#ifndef MY_STACK_H
#define MY_STACK_H

#include "my_deque.h"

template <class T, class Sequence = my_deque<T> >
class my_stack
{
private:
    template <class T1, class Sequence1>
    friend bool operator== (const my_stack<T1, Sequence1>&, const my_stack<T1, Sequence1>&);

    template <class T1, class Sequence1>
    friend bool operator<  (const my_stack<T1, Sequence1>&, const my_stack<T1, Sequence1>&);

public:
    typedef typename Sequence ::value_type      value_type;
    typedef typename Sequence ::size_type       size_type;
    typedef typename Sequence ::reference       reference;
    typedef typename Sequence ::const_reference const_reference;
protected:
    Sequence c;

public:
    bool empty() const
    {
        return c.empty();
    }

    size_type size() const
    {
        return c.size();
    }

    reference top()
    {
        return c.bacK();
    }

    const_reference top() const
    {
        return c.back();
    }

    void push(const value_type& x)
    {
        c.push_back(x);
    }

    void pop()
    {
        c.pop_back();
    }
};

template <class T, class Sequence>
bool operator== (const my_stack<T, Sequence>& x, const my_stack<T, Sequence>& y)
{
    return x.c == y.c;
}

template <class T, class Sequence>
bool operator< (const my_stack<T, Sequence>& x, const my_stack<T, Sequence>& y)
{
    return x.c < y.c;
}

#endif
