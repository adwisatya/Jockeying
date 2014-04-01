#include "Bank.h"

int Bank::i=0;
Bank::Bank(){
}
Bank::Bank(DateTime datetime, int _N){
	TMax	=	datetime;
	N	=	_N;
	T =  new Queue[N];
}
Bank::Bank(const Bank& bank){
	TMax	=	bank.TMax;
	N	=	bank.N;
	T = bank.T;
	for(int i=0;i<N;i++){
		T[i] = bank.T[i];
	}
}
Bank& Bank::operator=(const Bank& bank){
	TMax	=	bank.TMax;
	N	=	bank.N;
	*T = *bank.T;
	for(int i=0;i<N;i++){
		T[i] = bank.T[i];
	}
	return *this;
}
Bank::~Bank(){

}

void Bank::setN(int _N){
	N	=	_N;
}
void Bank::setDateTime(DateTime datetime){
	TMax = datetime;
}
void Bank::setQueue(Queue queue, int i){
	T[i]	=	queue;
}
	
int Bank::getN(){
	return N;
}
DateTime Bank::getDateTime(){
	return TMax;
}
Queue Bank::getQueue(int i){
	return this->T[i];
}
		
int Bank::Jockeying(int iOrigin){

}
void Bank::Arrival(int no){
	int iPush=0;
	int temp = T[0].size();
	for(int i=1;i<N;i++){
		if(T[i].size()<temp){
			iPush	=	i;
			temp=	T[i].size();
		}
	}
}
void Bank::Departure(int no){
	int i;
	for(int j=0;j<N;j++){
		if(T[j].T[0] == no){
			i=j;
		}
	}
	T[i].pop_front();
}
void Bank::Print(){
	for(int i=0;i<N;i++){
		if(!T[i].isEmpty()){
			this->getQueue(i).Print();
		}
	}
}
void Bank::Sweep(){
	bool exist;
	do{
		exist=	false;
		for(int i=0;i<N;i++){
			if(!T[i].isEmpty()){
				exist	=	true;
			}
		}
		if(exist){
			for(int i=0; i<N;i++){
				if(!T[i].isEmpty()){
					cout << "Departure " << T[i].T[0] << endl;
					T[i].pop_front();
				}
			}
		}
	}while(exist);
}
void Bank::Push(int _nQ,int _n){
	T[_nQ].push(_n);
}