
#include <iostream>
#include "Queue.h"
using namespace std;

int main(){
	Queue myQueue(3);
	cout << "Apakah kosong: " << myQueue.isEmpty() << " Apakah penuh: " << myQueue.isFull() << " Jumlah elemen: " << myQueue.size()<< endl;
	myQueue.Print();
	myQueue.push(2);
	cout << "Apakah kosong: " << myQueue.isEmpty() << " Apakah penuh: " << myQueue.isFull() << " Jumlah elemen: " << myQueue.size() << endl;
	myQueue.Print();
	myQueue.push(21);
	cout << "Apakah kosong: " << myQueue.isEmpty() << " Apakah penuh: " << myQueue.isFull() << " Jumlah elemen: " << myQueue.size() << endl;
	myQueue.Print();
	myQueue.push(99);
	cout << "Apakah kosong: " << myQueue.isEmpty() << " Apakah penuh: " << myQueue.isFull() << " Jumlah elemen: " << myQueue.size() << endl;
	myQueue.Print();
	cout << myQueue.pop_front() << endl;
	cout << myQueue.pop_front() << endl;
	cout << "Apakah kosong: " << myQueue.isEmpty() << " Apakah penuh: " << myQueue.isFull() << " Jumlah elemen: " << myQueue.size() << endl;
	myQueue.Print();
	myQueue.push(77);
	myQueue.push(88);
	cout << myQueue.pop_back() << endl;
	myQueue.Print();
	cout << myQueue.size();
	cout << endl;
	cout << myQueue.status();
	cout << endl;
	Queue myQueue2;
	myQueue2 = myQueue;
	myQueue2.Print();
	myQueue = myQueue2;
	myQueue2.Print();
	return 0;
}