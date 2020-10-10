#include <iostream>

using namespace std;

void printBar()
{
	for (int i=0;i<9;i++)
	cout<<"*";
	
	cout<<endl;
	for (int i=0;i<9;i++)
{	
	if (i>2 && i<7)
	cout<<"*";
	else
	cout<<"-";
}
cout<<endl;
}

int main ()
{
	cout<<"Hello There"<<endl;
	printBar();
	for (int i=0;i<5;i++)
		cout<<"Pak Turk Friendship Long live."<<endl;	
	printBar();

	bool doYouAgree;
	
	char option;
	cout<<"Enter y for yes and n for no: ";
	cin>>option;
	
	if(option=='y')
	doYouAgree=true;
	else
	doYouAgree=false;
	
	cout<<endl;
	if(doYouAgree)
	cout<<"Khsuh Giyaal'din Ottomon Empire";
	else
	cout<<"Tu mera Put Chut'tey kr";
}
