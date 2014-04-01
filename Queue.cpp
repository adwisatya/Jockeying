#include "Queue.h"

Queue::Queue(){
    T       =    new int[99];
    nElmt   =   0;
	nMax	=	99;
}
Queue::Queue(int _N){
    T       =   new int[_N];
	nMax	=	_N;
    nElmt   =   0;
}
Queue::Queue(const Queue& q){

    nElmt   =    q.nElmt;
	T       =    new int[q.nElmt];
    for(int i=0; i<nElmt; i++){
        T[i] = q.T[i];
    }
}
Queue& Queue::operator=(const Queue& q){
    if(T != NULL){
        delete T;
    }
    for(int i=0; i<nElmt; i++){
       T[i]    =   q.T[i];
    }
    return *this;
}
Queue::~Queue(){
}
bool Queue::isEmpty(){
    return (nElmt==0);
}
bool Queue::isFull(){
	return nElmt==nMax;
}
void Queue::push(int input){
    if(!isFull()){
        T[nElmt]    =   input;
        nElmt++;
    }
}
int Queue::pop_front(){
    int temp	=	T[0];
	this->nElmt	=	nElmt-1;
	for(int i=0;i<nElmt;i++){
		this->T[i] = T[i+1];
	}
	return temp;
}
int Queue::pop_back(){
	int temp	=	T[nElmt-1];
	nElmt	=	nElmt-1;
	return temp;
}
int Queue::size(){
    return nElmt;
}
bool Queue::status(){
    return isEmpty();
}
void Queue::Print(){
    cout << "[";
    for(int i=0;i<nElmt;i++){
        cout << T[i];
        if((i+1) < nElmt){
            cout << ",";
        }
    }
    cout << "]" << endl;
}

