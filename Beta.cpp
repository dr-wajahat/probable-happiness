#include <iostream>

using namespace std;

int main ()
{
	
	for (int i=0;i<5;i++)
		cout<<"Pak Turk Friendship Long live."<<endl;	

	bool doYouAgree;
	
	char opt;
	cout<<"Enter y for yes and n for no: ";
	cin>>opt;
	
	if(opt=='y')
	doYouAgree=true;
	else
	doYouAgree=false;
	
	if(doYouAgree)
	cout<<"Bhai Nahana Parey gaa";
	else
	cout<<"Khaire hi hia Cheetey";
	
	if(isTodayFriday)
	cout<<"Bhai Nahana Parey gaa";
	else
	cout<<"Khaire hi hia Cheetey";
}
