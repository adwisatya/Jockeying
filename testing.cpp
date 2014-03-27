#include<iostream>
#include<string>
using namespace std;
int main(){
	cout << "Question 2\na.  Please select the dimension of square matrices you wish to use in this demonstration.  n=";
	float n;  //n must be an integer, however the declaration of n as float allows the while loop below to filter out any user intput float number.  This is better than the float being cast to an int by the program, because the user is made aware of their error, and a message will appear.
	cin >> n;
	//cout << "cin.good is " << cin.good();
	while(n <1 || n - floor(n) != 0 || !(cin.good()))
		{cout << "\nPlease enter an integer value of n greater than or equal to 1.  n=";
		cin >> n;
		cout << n;};

return 0; }


