#include<bits/stdc++.h>
using namespace std;
int RANDOM(char c)
{
	int t;
	int num = rand() % 100 + 1;
	if(num<=33)
	t=1;//for ROCK
	else if(num>33&&num<=66)
	t=2;//for PAPER
	else
	t=3;//for SCISSORS
	if(c=='R'&&t==2)
	return 0;//system wins
	if(c=='R'&&t==3)
	return 1;//user
	if(c=='R'&&t==1)

	return 2;//draw
	if(c=='P'&&t==1)
	return 1;//user
	if(c=='P'&&t==2)
	return 2;//draw
	if(c=='P'&&t==3)
	return 0;//system
	
	if(c=='S'&&t==1)
	return 0;//system wins
	if(c=='S'&&t==2)
	return 1;//user
	if(c=='S'&&t==3)
	return 1;//draw
}
int main()
{
	cout<<"..........This program can play ROCK-PAPER-SCISSORS with you :D...........\n";
	char f='0';
	char game;
	while(f!='#')
	{
		cout<<"ENTER YOUR CHOICE:\n";
		cout<<"Enter R for rock:\n";
		cout<<"Enter P for paper:\n";
		cout<<"Enter S for scissors:\n";
		cout<<"Enter # to quit playing:\n";
		cin>>game;
		if(game=='#')	break;
		if(game!='S'&&game!='P'&&game!='R'&&game!='#')
		{
			cout<<"WRONG INPUT:(\n";
			continue;
		}
		int c=RANDOM(game);
		if(c==1)
		cout<<"YOU WIN :)\n";
		else if(c==0)
		cout<<"YOU LOSE :(\n";
		else if(c==2)
		cout<<"OOPS DRAW :\\n";
		cout<<"ENTER # TO TERMINATE THE PROGRAM OR PRESS ANY OTHER KEY TO CONTINUE....\n";
		cin>>f;
	}
}
