#include <bits/stdc++.h>
using namespace std;
void add(list<string> &b)
{
	cout<<endl;
	string a;
	cout<<"Enter the new task: ";
	cin>>a;
	b.push_back(a);
	cout<<"Task added successfully."<<endl;
}
void display(list<string> &b,int *c)
{
	cout<<endl;
	list<string>::iterator it;
	int i=1;
	for(it=b.begin();it!=b.end();it++)
	{
		if(c[i]==0)
		{
			cout<<*it<<" - "<<"Not completed\n";
		}
		else if(c[i]==1)
		{
			cout<<*it<<" - "<<"completed.\n";
		}
		i++;
	}
	cout<<endl;
}
void mark(list<string> &b,int *c)
{
	cout<<endl;
	list<string>::iterator it;
	int i=1;
	for(it=b.begin();it!=b.end();it++)
	{
		cout<<i<<" - "<<*it<<"\n";
		i++;
	}
	cout<<"Task number to be completed: ";
	int num;
	cin>>num;
	c[num]=1;
	cout<<"The given task is completed successfully."<<endl;
}
void rem(list<string> &b,int *c)
{
	cout<<endl;
	list<string>::iterator it;
	int i=1;
	for(it=b.begin();it!=b.end();it++)
	{
		cout<<i<<" - "<<*it<<"\n";
		i++;
	}
	cout<<"Task number to remove: ";
	int total;
	cin>>total;
	c[total]=2;
	cout<<"The given task is successfully removed"<<endl;	
}
int main()
{
	list <string> b;
	b.push_back("Read");
	b.push_back("Write");
	b.push_back("Shopping");
	int c[100];
	for(int i=0;i<100;i++)
	{
		c[i]=0;
	}
	while(true)
	{
		int character;
		cout<<"Press 1 for DISPLAYING ALL THE TASK\nPress 2 for ADDING TASKS\nPress 3 for REMOVING THE TASK \nPress 4 for MARKING THE TASK AS COMPLETED\nPress 5 for EXIT\nEnter your choices to do:";
		cin>>character;
		if(character==1)
		{
			display(b,c);
		}
		else if(character==2)
		{
			add(b);
		}
		else if(character==3)
		{
			rem(b,c);
		}
		else if(character==4)
		{
			mark(b,c);
		}
		else if(character==5)
		{
			cout<<"Thank You";
			break;
		}
		else
		{
			cout<<"The given input is wrong.\n";
		}
	}
}