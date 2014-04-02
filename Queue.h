#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

class Queue
{
    public:
        /**
         * @brief Constructor
         * @details Instansiasi objek Queue dnegan nilai awal
         */
        Queue();
        /**
         * @brief Constructor Parameter
         * @details Instansiasi objek Queue dengan nilai masukan dari user
         * 
         * @param _N nilai maksimal jumlah element Queue
         */
        Queue(int _N);
        /**
         * @brief Copy constructor
         * @details Menyalin objek Queue pad aobjek Queue lain
         * 
         * @param q Objek Queue hasil penyalinan
         */
        Queue(const Queue& q);
        /**
         * @brief Operator overloading=
         * @details [long description]
         * 
         * @param q [description]
         */
        Queue& operator=(const Queue& q);
        /**
         * @brief Destructor
         * @details Menghapus objek Queue dari memory
         */
        ~Queue();
        bool isEmpty();
        bool isFull();
        void push(int);
        int pop_back();
		int pop_front();
        int size();
        void Print();
        bool status();
    public:
        int* T;
        int nElmt;
		int nMax;
};

#endif // QUEUE_H
