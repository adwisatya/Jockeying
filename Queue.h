#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
    public:
        Queue();
        Queue(int);
        Queue(const Queue& q);
        Queue& operator=(const Queue& q);
        ~Queue();
        bool isEmpty();
        bool isFull();
        void push(int);
        int pop();
        int size();
        void Print();
        bool status();
    public:
        int* T;
        int nElmt;
};

#endif // QUEUE_H
