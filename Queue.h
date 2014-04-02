#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

class Queue
{
    public:
        /**
         * @brief Constructor
         * @details Instansiasi objek Queue dengan nilai awal
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
        /**
         * @brief Fungsi isEmpty
         * @details Mengecek apakah suatu objek Queue tidak memiliki elemen
         * @return Boolean true atau false
         */
        bool isEmpty();
        /**
         * @brief Fungsi isFull
         * @details Mengecek apakah suatu ibjek Queue memiliki jumlah elemen maksimal dengan daya tampung
         * @return boolean true atau false
         */
        bool isFull();
        /**
         * @brief Methode push
         * @details Menambahkan elemen baru pada tail objek Queue
         * 
         * @param  integer masukan dari pengguna
         */
        void push(int);
        /**
         * @brief Methode pop_back
         * @details Mengambil elemen terakhir dari suatu objek Queue dan memberikan nilai kembalian
         * @return integer nilai elemen terakhir suatu objek Queue
         */
        int pop_back();
        /**
         * @brief Methode pop_front
         * @details Mengambil elemen pertama dari suatu objek Queue dan memberikan nilai kembalian
         * @return integer nilai elemen pertama suatu objek Queue
         */
		int pop_front();
        /**
         * @brief Method size
         * @details Mengetahui jumlah elemen dari suatu objek Queue
         * @return integer jumlah elemen objek Queue
         */
        int size();
        /**
         * @brief Methode Print
         * @details Mencetak semua elemen objek Queue dengan formal [elemen1,elemen2,elemen3]
         */
        void Print();
        /**
         * @brief Methode status
         * @details Memberikan informasi apakah suatu objek Queue kosong
         * @return boolean true atau false
         */
        bool status();
    public:
        int* T;
        int nElmt;
		int nMax;
};

#endif // QUEUE_H
