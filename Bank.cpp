#include "Bank.h"

int Bank::i=0;
Bank::Bank(){
}
Bank::Bank(DateTime datetime, int _N){
	TMax	=	datetime;
	N	=	_N;
	arrayQ =  new Queue[N];
}
Bank::Bank(const Bank& bank){
	TMax	=	bank.TMax;
	N	=	bank.N;
	arrayQ = bank.arrayQ;
	for(int i=0;i<N;i++){
		arrayQ[i] = bank.arrayQ[i];
	}
}
Bank& Bank::operator=(const Bank& bank){
	TMax	=	bank.TMax;
	N	=	bank.N;
	*arrayQ = *bank.arrayQ;
	for(int i=0;i<N;i++){
		arrayQ[i] = bank.arrayQ[i];
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
	arrayQ[i]	=	queue;
}
	
int Bank::getN(){
	return N;
}
DateTime Bank::getDateTime(){
	return TMax;
}
Queue Bank::getQueue(int i){
	return this->arrayQ[i];
}
		
int Bank::Jockeying(int iOrigin){
	int iResult = -1, abs1, abs2;
	for(int i=0; i<N; i++)
	{
		if((int(arrayQ[iOrigin].size()) - int(arrayQ[i].size())) > 2)
		{
			if(iResult == -1)
			{
				iResult = i;
			}
			else
			{
				if(i - iOrigin > 0)
					abs1 = i - iOrigin;
				else
					abs1 = iOrigin - i;

				if(iResult - iOrigin > 0)
					abs2 = iResult - iOrigin;
				else
					abs2 = iOrigin - iResult;
				
				if((abs1 < abs2) || ((abs1 == abs2) && (i < iResult)))
					iResult = i;
			}
		}
	}
	if(iResult != -1)
	{
		int temp = arrayQ[iOrigin].pop_back();
		arrayQ[iOrigin].pop_back();
		arrayQ[iResult].push(temp);
	}

	return iResult;
}
void Bank::Arrival(int intI){
	int iPush=0;
	int temp = arrayQ[0].size();
	for(int i=1;i<N;i++){
		if(arrayQ[i].size()<temp){
			iPush	=	i;
			temp=	arrayQ[i].size();
		}
	}
	arrayQ[iPush].push(intI);
}
void Bank::Departure(int no){

	int itemp;
	for(int j =0;j<N;j++){
		if(arrayQ[j].T[0] == no){
			itemp =	j;
		}
	}
	arrayQ[itemp].pop_front();
	int temp = this->Jockeying(itemp);
}
void Bank::Print(){
	for(int i=0;i<N;i++){
		if(!arrayQ[i].isEmpty()){
			cout <<"Q["<< i << "] : ";
			getQueue(i).Print();
		}
	}
}
void Bank::Sweep(){
	bool exist;
	do{
		exist=	false;
		for(int i=0;i<N;i++){
			if(!arrayQ[i].isEmpty()){
				exist	=	true;
			}
		}
		if(exist){
			for(int i=0; i<N;i++){
				if(!arrayQ[i].isEmpty()){
					cout << "Departure " << arrayQ[i].T[0] << endl;
					arrayQ[i].pop_front();
				}
			}
		}
	}while(exist);
}
void Bank::Push(int _nQ,int _n){
	arrayQ[_nQ].push(_n);
}