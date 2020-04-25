#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<fstream.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
clrscr();
int gd=DETECT,gm,l,i,c;
int s[9]={0};
int r=0,y=0,e=0;
int w=0,j=0,k=0;
char f,a,ax[50],ao[50],p1[30],p2[30],m,ch[50];
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(100,100,"FIRST PLAYER HAS BEEN ASSIGNED X");
outtextxy(100,150,"SECOND PLAYER HAS BEEN ASSIGNED O");
outtextxy(100,200,"PRESS 0(ZERO) TO QUIT AT ANY TIME");
setcolor(YELLOW);
outtextxy(100,275,"PRESS ANY KEY TO CONTINUE");
getch();
cleardevice();
outtextxy(200,100,"ENTER FIRST PLAYER NAME");
gotoxy(40,10);
gets(p1);
outtextxy(200,200,"ENTER SECOND PLAYER NAME");
gotoxy(40,16);
gets(p2);
cleardevice();
setcolor(YELLOW);
outtextxy(100,275,"PRESS ANY KEY TO START");
getch();
cleardevice();
setcolor(WHITE);
for(i=0;i<5;i++)
{
line(300+i,100,300+i,325);
line(400+i,100,400+i,325);
line(200,175+i,500,175+i);
line(200,250+i,500,250+i);
}
setcolor(MAGENTA);
settextstyle(BOLD_FONT,HORIZ_DIR,2);
outtextxy(300,5,"TIC TOE");
gotoxy(1,1);
cout<<" \n\n\nEnter in which block you want to insert from 1-9:\n";
cout<<p1;
int xx=wherex();
int yy=wherey();
gotoxy(xx+50,yy);
cout<<p2<<endl;
ofstream fout;
ifstream fin;
int x=wherex();
int z=wherey();
while(1)
{
setcolor(RED);
settextstyle(SMALL_FONT,HORIZ_DIR,3);
outtextxy(550,440,"Press 0 to exit");
settextstyle(SMALL_FONT,HORIZ_DIR,4);
outtextxy(5,440,"If wrong input or existing input choosen PRESS any key to continue");
if(r%2==0)
{
r++;
gotoxy(x,z);
cout<<endl;
cin>>m;
}
else
{
r++;
gotoxy(x+70,z);
cin>>m;
}
if(!isdigit(m))
{
cout<<"Invalid choice";
getch();
cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b               ";
}
else
{
fout.open("tac.txt",ios::app);
fout<<m;
fout.close();
settextstyle(0,HORIZ_DIR,6);
	   /*	for(i=0;ax[i]!='\0';i++)
		{
		for(j=0;ax[j]!='\0';j++)
		{
		for(k=0;ax[k]!='\0';k++)
		{
		if((ax[i]=='1' && ax[j]=='2' && ax[k]=='3')||
		(ax[i]=='1' && ax[j]=='3' && ax[k]=='2')||
		(ax[i]=='1' && ax[j]=='4' && ax[k]=='7')||
		(ax[i]=='1' && ax[j]=='7' && ax[k]=='4')||
		(ax[i]=='1' && ax[j]=='5' && ax[k]=='9')||
		(ax[i]=='1' && ax[j]=='9' && ax[k]=='5')||
		(ax[i]=='2' && ax[j]=='5' && ax[k]=='8')||
		(ax[i]=='2' && ax[j]=='8' && ax[k]=='5')||
		(ax[i]=='2' && ax[j]=='1' && ax[k]=='3')||
		(ax[i]=='2' && ax[j]=='3' && ax[k]=='1')||
		(ax[i]=='3' && ax[j]=='6' && ax[k]=='9')||
		(ax[i]=='3' && ax[j]=='9' && ax[k]=='6')||
		(ax[i]=='3' && ax[j]=='1' && ax[k]=='2')||
		(ax[i]=='3' && ax[j]=='2' && ax[k]=='1')||
		(ax[i]=='3' && ax[j]=='5' && ax[k]=='7')||
		(ax[i]=='3' && ax[j]=='7' && ax[k]=='5')||
		(ax[i]=='4' && ax[j]=='5' && ax[k]=='6')||
		(ax[i]=='4' && ax[j]=='6' && ax[k]=='5')||
		(ax[i]=='4' && ax[j]=='1' && ax[k]=='7')||
		(ax[i]=='4' && ax[j]=='7' && ax[k]=='1')||
		(ax[i]=='5' && ax[j]=='6' && ax[k]=='4')||
		(ax[i]=='5' && ax[j]=='4' && ax[k]=='6')||
		(ax[i]=='5' && ax[j]=='3' && ax[k]=='7')||
		(ax[i]=='5' && ax[j]=='7' && ax[k]=='3')||
		(ax[i]=='5' && ax[j]=='1' && ax[k]=='9')||
		(ax[i]=='5' && ax[j]=='9' && ax[k]=='1')||
		(ax[i]=='5' && ax[j]=='2' && ax[k]=='8')||
		(ax[i]=='5' && ax[j]=='8' && ax[k]=='2')||
		(ax[i]=='6' && ax[j]=='5' && ax[k]=='4')||
		(ax[i]=='6' && ax[j]=='4' && ax[k]=='5')||
		(ax[i]=='6' && ax[j]=='3' && ax[k]=='9')||
		(ax[i]=='6' && ax[j]=='9' && ax[k]=='3')||
		(ax[i]=='7' && ax[j]=='8' && ax[k]=='9')||
		(ax[i]=='7' && ax[j]=='9' && ax[k]=='8')||
		(ax[i]=='7' && ax[j]=='1' && ax[k]=='4')||
		(ax[i]=='7' && ax[j]=='4' && ax[k]=='1')||
		(ax[i]=='7' && ax[j]=='5' && ax[k]=='3')||
		(ax[i]=='7' && ax[j]=='3' && ax[k]=='5')||
		(ax[i]=='8' && ax[j]=='2' && ax[k]=='5')||
		(ax[i]=='8' && ax[j]=='5' && ax[k]=='2')||
		(ax[i]=='8' && ax[j]=='7' && ax[k]=='9')||
		(ax[i]=='8' && ax[j]=='9' && ax[k]=='7')||
		(ax[i]=='9' && ax[j]=='5' && ax[k]=='1')||
		(ax[i]=='9' && ax[j]=='1' && ax[k]=='5')||
		(ax[i]=='9' && ax[j]=='6' && ax[k]=='3')||
		(ax[i]=='9' && ax[j]=='3' && ax[k]=='6')||
		(ax[i]=='9' && ax[j]=='7' && ax[k]=='8')||
		(ax[i]=='9' && ax[j]=='8' && ax[k]=='7'))
		{
		y++;
		cleardevice();
		setcolor(CYAN);
		settextstyle(BOLD_FONT,HORIZ_DIR,9);
		outtextxy(100,100,"X WIN");
		getch();
		exit(0);
		}
		}
		}
		}
		for(i=0;ao[i]!='\0';i++)
		{
		for(j=0;ao[j]!='\0';j++)
		{
		for(k=0;ao[k]!='\0';k++)
		{
		if(((ao[i]=='1' && ao[j]=='2' && ao[k]=='3')||
		(ao[i]=='1' && ao[j]=='3' && ao[k]=='2')||
		(ao[i]=='1' && ao[j]=='4' && ao[k]=='7')||
		(ao[i]=='1' && ao[j]=='7' && ao[k]=='4')||
		(ao[i]=='1' && ao[j]=='5' && ao[k]=='9')||
		(ao[i]=='1' && ao[j]=='9' && ao[k]=='5')||
		(ao[i]=='2' && ao[j]=='5' && ao[k]=='8')||
		(ao[i]=='2' && ao[j]=='8' && ao[k]=='5')||
		(ao[i]=='2' && ao[j]=='1' && ao[k]=='3')||
		(ao[i]=='2' && ao[j]=='3' && ao[k]=='1')||
		(ao[i]=='3' && ao[j]=='6' && ao[k]=='9')||
		(ao[i]=='3' && ao[j]=='9' && ao[k]=='6')||
		(ao[i]=='3' && ao[j]=='1' && ao[k]=='2')||
		(ao[i]=='3' && ao[j]=='2' && ao[k]=='1')||
		(ao[i]=='3' && ao[j]=='5' && ao[k]=='7')||
		(ao[i]=='3' && ao[j]=='7' && ao[k]=='5')||
		(ao[i]=='4' && ao[j]=='5' && ao[k]=='6')||
		(ao[i]=='4' && ao[j]=='6' && ao[k]=='5')||
		(ao[i]=='4' && ao[j]=='1' && ao[k]=='7')||
		(ao[i]=='4' && ao[j]=='7' && ao[k]=='1')||
		(ao[i]=='5' && ao[j]=='6' && ao[k]=='4')||
		(ao[i]=='5' && ao[j]=='4' && ao[k]=='6')||
		(ao[i]=='5' && ao[j]=='3' && ao[k]=='7')||
		(ao[i]=='5' && ao[j]=='7' && ao[k]=='3')||
		(ao[i]=='5' && ao[j]=='1' && ao[k]=='9')||
		(ao[i]=='5' && ao[j]=='9' && ao[k]=='1')||
		(ao[i]=='5' && ao[j]=='2' && ao[k]=='8')||
		(ao[i]=='5' && ao[j]=='8' && ao[k]=='2')||
		(ao[i]=='6' && ao[j]=='5' && ao[k]=='4')||
		(ao[i]=='6' && ao[j]=='4' && ao[k]=='5')||
		(ao[i]=='6' && ao[j]=='3' && ao[k]=='9')||
		(ao[i]=='6' && ao[j]=='9' && ao[k]=='3')||
		(ao[i]=='7' && ao[j]=='8' && ao[k]=='9')||
		(ao[i]=='7' && ao[j]=='9' && ao[k]=='8')||
		(ao[i]=='7' && ao[j]=='1' && ao[k]=='4')||
		(ao[i]=='7' && ao[j]=='4' && ao[k]=='1')||
		(ao[i]=='7' && ao[j]=='5' && ao[k]=='3')||
		(ao[i]=='7' && ao[j]=='3' && ao[k]=='5')||
		(ao[i]=='8' && ao[j]=='2' && ao[k]=='5')||
		(ao[i]=='8' && ao[j]=='5' && ao[k]=='2')||
		(ao[i]=='8' && ao[j]=='7' && ao[k]=='9')||
		(ao[i]=='8' && ao[j]=='9' && ao[k]=='7')||
		(ao[i]=='9' && ao[j]=='5' && ao[k]=='1')||
		(ao[i]=='9' && ao[j]=='1' && ao[k]=='5')||
		(ao[i]=='9' && ao[j]=='6' && ao[k]=='3')||
		(ao[i]=='9' && ao[j]=='3' && ao[k]=='6')||
		(ao[i]=='9' && ao[j]=='7' && ao[k]=='8')||
		(ao[i]=='9' && ao[j]=='8' && ao[k]=='7') && y==0))
		{
		e++;
		cleardevice();
		setcolor(CYAN);
		settextstyle(BOLD_FONT,HORIZ_DIR,9);
		outtextxy(100,100,"O WIN");
		getch();
		exit(0);
		}
		}
		}
		}  */
switch(m)
{
	case '1': {
	if(c%2==0 && s[0]==0)
	{
		c++;
		s[0]++;
		setcolor(GREEN);
		outtextxy(240,110,"x");
	}
	else if(c%2!=0 && s[0]==0)
	{
		c++;
		s[0]++;
		setcolor(CYAN);
		outtextxy(240,110,"o");
	}
	else
	{	if(r%2!=0)
		{
		cout<<"PLACE ALREADY FILLED";
		getch();
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                    ";
		}
		else
		{
		gotoxy(x+60,z);
		cout<<"PLACE ALREADY FILLED";
		getch();
		gotoxy(x+78,z);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                         ";
		}
	}
	break;
	}
	case '2':{
	if(c%2==0 && s[1]==0)
	{
		c++;
		s[1]++;
		setcolor(GREEN);
		outtextxy(330,110,"x");
	}
	else if(c%2!=0 && s[1]==0)
	{
		c++;
		s[1]++;
		setcolor(CYAN);
		outtextxy(330,110,"o") ;
	}
	else
	{	if(r%2!=0)
		{
		cout<<"PLACE ALREADY FILLED";
		getch();
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
		else
		{
		gotoxy(x+60,z);
		cout<<"PLACE ALREADY FILLED";
		getch();
		gotoxy(x+78,z);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
	}
	break;
	}
	case '3':{
	if(c%2==0 && s[2]==0)
	{
		c++;
		s[2]++;
		setcolor(GREEN);
		outtextxy(430,110,"x");
	}
	else if(c%2!=0 && s[2]==0)
	{
		c++;
		s[2]++;
		setcolor(CYAN);
		outtextxy(430,110,"o");
	}
	else
	{	if(r%2!=0)
		{
		getch();
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		cout<<"PLACE ALREADY FILLED";
		}
		else
		{
		gotoxy(x+60,z);
		cout<<"PLACE ALREADY FILLED";
		getch();
		gotoxy(x+78,z);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
	}
	break;
	}
	case '4':{
	if(c%2==0 && s[3]==0)
	{
		c++;
		s[3]++;
		setcolor(GREEN);
		outtextxy(240,190,"x");
	}
	else if(c%2!=0 && s[3]==0)
	{
		c++;
		s[3]++;
		setcolor(CYAN);
		outtextxy(240,190,"o");
	}
	else
	{	if(r%2!=0)
		{
		cout<<"PLACE ALREADY FILLED";
		getch();
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
		else
		{
		gotoxy(x+60,z);
		cout<<"PLACE ALREADY FILLED";
		getch();
		gotoxy(x+78,z);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
	}
	break;
	}
	case '5':{
	if(c%2==0 && s[4]==0)
	{
		c++;
		s[4]++;
		setcolor(GREEN);
		outtextxy(330,190,"x");
	}
	else if(c%2!=0 && s[4]==0)
	{
		 c++;
		 s[4]++;
		 setcolor(CYAN);
		 outtextxy(330,190,"o");
	}
	else
	{	if(r%2!=0)
		{
		cout<<"PLACE ALREADY FILLED";
		getch();
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
		else
		{
		gotoxy(x+60,z);
		cout<<"PLACE ALREADY FILLED";
		getch();
		gotoxy(x+78,z);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
	}
	break;
	}
	case '6':{
	if(c%2==0 && s[5]==0)
	{
		c++;
		s[5]++;
		setcolor(GREEN);
		outtextxy(430,190,"x");
	}
	else if(c%2!=0 && s[5]==0)
	{
		c++;
		s[5]++;
		setcolor(CYAN);
		outtextxy(430,190,"o");
	}
	else
	{	if(r%2!=0)
		{
		cout<<"PLACE ALREADY FILLED";
		getch();
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
		else
		{
		gotoxy(x+60,z);
		cout<<"PLACE ALREADY FILLED";
		getch();
		gotoxy(x+78,z);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
	}
	break;
	}
	case '7': {
	if(c%2==0 && s[6]==0)
	{
		c++;
		s[6]++;
		setcolor(GREEN);
		outtextxy(240,270,"x");
	}
	else if(c%2!=0 && s[6]==0)
	{
		c++;
		s[6]++;
		setcolor(CYAN);
		outtextxy(240,270,"o");
	}
	else
	{	if(r%2!=0)
		{
		cout<<"PLACE ALREADY FILLED";
		getch();
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
		else
		{
		gotoxy(x+60,z);
		cout<<"PLACE ALREADY FILLED";
		getch();
		gotoxy(x+78,z);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
	}
	break;
	}
	case '8':{
	if(c%2==0 && s[7]==0)
	{
		c++;
		s[7]++;
		setcolor(GREEN);
		outtextxy(330,270,"x");
	}
	else if(c%2!=0 && s[7]==0)
	{
		c++;
		s[7]++;
		setcolor(CYAN);
		outtextxy(330,270,"o");
	}
	else
	{	if(r%2!=0)
		{
		cout<<"PLACE ALREADY FILLED";
		getch();
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
		else
		{
		gotoxy(x+60,z);
		cout<<"PLACE ALREADY FILLED";
		getch();
		gotoxy(x+78,z);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
	}
	break;
	}
	case '9':{
	if(c%2==0 && s[8]==0)
	{
		c++;
		s[8]++;
		setcolor(GREEN);
		outtextxy(430,270,"x");
	}
	else if(c%2!=0 && s[8]==0)
	{
		c++;
		s[8]++;
		setcolor(CYAN);
		outtextxy(430,270,"o");
	}
	else
	{	if(r%2!=0)
		{
		cout<<"PLACE ALREADY FILLED";
		getch();
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
		else
		{
		gotoxy(x+60,z);
		cout<<"PLACE ALREADY FILLED";
		getch();
		gotoxy(x+78,z);
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b                       ";
		}
	}
	break;
	}
	case '0':{
		fout.close();
		i=0;
		fin.open("tac.txt");
		while(!fin.eof())
		{
		 fin>>ch[i];
		 if(w%2==0)
		 {
		 ax[k]=ch[i];
		 k++;
		 w++;
		 }
		 else
		 {
		 ao[j]=ch[i];
		 j++;
		 w++;
		 }
		 i++;
		}
		fout.open("tac.txt");
		fout.close();
		fin.close();
		for(i=0;ax[i]!='\0';i++)
		{
		for(j=0;ax[j]!='\0';j++)
		{
		for(k=0;ax[k]!='\0';k++)
		{
		if((ax[i]=='1' && ax[j]=='2' && ax[k]=='3')||
		(ax[i]=='1' && ax[j]=='3' && ax[k]=='2')||
		(ax[i]=='1' && ax[j]=='4' && ax[k]=='7')||
		(ax[i]=='1' && ax[j]=='7' && ax[k]=='4')||
		(ax[i]=='1' && ax[j]=='5' && ax[k]=='9')||
		(ax[i]=='1' && ax[j]=='9' && ax[k]=='5')||
		(ax[i]=='2' && ax[j]=='5' && ax[k]=='8')||
		(ax[i]=='2' && ax[j]=='8' && ax[k]=='5')||
		(ax[i]=='2' && ax[j]=='1' && ax[k]=='3')||
		(ax[i]=='2' && ax[j]=='3' && ax[k]=='1')||
		(ax[i]=='3' && ax[j]=='6' && ax[k]=='9')||
		(ax[i]=='3' && ax[j]=='9' && ax[k]=='6')||
		(ax[i]=='3' && ax[j]=='1' && ax[k]=='2')||
		(ax[i]=='3' && ax[j]=='2' && ax[k]=='1')||
		(ax[i]=='3' && ax[j]=='5' && ax[k]=='7')||
		(ax[i]=='3' && ax[j]=='7' && ax[k]=='5')||
		(ax[i]=='4' && ax[j]=='5' && ax[k]=='6')||
		(ax[i]=='4' && ax[j]=='6' && ax[k]=='5')||
		(ax[i]=='4' && ax[j]=='1' && ax[k]=='7')||
		(ax[i]=='4' && ax[j]=='7' && ax[k]=='1')||
		(ax[i]=='5' && ax[j]=='6' && ax[k]=='4')||
		(ax[i]=='5' && ax[j]=='4' && ax[k]=='6')||
		(ax[i]=='5' && ax[j]=='3' && ax[k]=='7')||
		(ax[i]=='5' && ax[j]=='7' && ax[k]=='3')||
		(ax[i]=='5' && ax[j]=='1' && ax[k]=='9')||
		(ax[i]=='5' && ax[j]=='9' && ax[k]=='1')||
		(ax[i]=='5' && ax[j]=='2' && ax[k]=='8')||
		(ax[i]=='5' && ax[j]=='8' && ax[k]=='2')||
		(ax[i]=='6' && ax[j]=='5' && ax[k]=='4')||
		(ax[i]=='6' && ax[j]=='4' && ax[k]=='5')||
		(ax[i]=='6' && ax[j]=='3' && ax[k]=='9')||
		(ax[i]=='6' && ax[j]=='9' && ax[k]=='3')||
		(ax[i]=='7' && ax[j]=='8' && ax[k]=='9')||
		(ax[i]=='7' && ax[j]=='9' && ax[k]=='8')||
		(ax[i]=='7' && ax[j]=='1' && ax[k]=='4')||
		(ax[i]=='7' && ax[j]=='4' && ax[k]=='1')||
		(ax[i]=='7' && ax[j]=='5' && ax[k]=='3')||
		(ax[i]=='7' && ax[j]=='3' && ax[k]=='5')||
		(ax[i]=='8' && ax[j]=='2' && ax[k]=='5')||
		(ax[i]=='8' && ax[j]=='5' && ax[k]=='2')||
		(ax[i]=='8' && ax[j]=='7' && ax[k]=='9')||
		(ax[i]=='8' && ax[j]=='9' && ax[k]=='7')||
		(ax[i]=='9' && ax[j]=='5' && ax[k]=='1')||
		(ax[i]=='9' && ax[j]=='1' && ax[k]=='5')||
		(ax[i]=='9' && ax[j]=='6' && ax[k]=='3')||
		(ax[i]=='9' && ax[j]=='3' && ax[k]=='6')||
		(ax[i]=='9' && ax[j]=='7' && ax[k]=='8')||
		(ax[i]=='9' && ax[j]=='8' && ax[k]=='7'))
		{
		y++;
		cleardevice();
		setcolor(CYAN);
		settextstyle(BOLD_FONT,HORIZ_DIR,9);
		outtextxy(100,100,"X WIN");
		getch();
		exit(0);
		}
		}
		}
		}
		for(i=0;ao[i]!='\0';i++)
		{
		for(j=0;ao[j]!='\0';j++)
		{
		for(k=0;ao[k]!='\0';k++)
		{
		if(((ao[i]=='1' && ao[j]=='2' && ao[k]=='3')||
		(ao[i]=='1' && ao[j]=='3' && ao[k]=='2')||
		(ao[i]=='1' && ao[j]=='4' && ao[k]=='7')||
		(ao[i]=='1' && ao[j]=='7' && ao[k]=='4')||
		(ao[i]=='1' && ao[j]=='5' && ao[k]=='9')||
		(ao[i]=='1' && ao[j]=='9' && ao[k]=='5')||
		(ao[i]=='2' && ao[j]=='5' && ao[k]=='8')||
		(ao[i]=='2' && ao[j]=='8' && ao[k]=='5')||
		(ao[i]=='2' && ao[j]=='1' && ao[k]=='3')||
		(ao[i]=='2' && ao[j]=='3' && ao[k]=='1')||
		(ao[i]=='3' && ao[j]=='6' && ao[k]=='9')||
		(ao[i]=='3' && ao[j]=='9' && ao[k]=='6')||
		(ao[i]=='3' && ao[j]=='1' && ao[k]=='2')||
		(ao[i]=='3' && ao[j]=='2' && ao[k]=='1')||
		(ao[i]=='3' && ao[j]=='5' && ao[k]=='7')||
		(ao[i]=='3' && ao[j]=='7' && ao[k]=='5')||
		(ao[i]=='4' && ao[j]=='5' && ao[k]=='6')||
		(ao[i]=='4' && ao[j]=='6' && ao[k]=='5')||
		(ao[i]=='4' && ao[j]=='1' && ao[k]=='7')||
		(ao[i]=='4' && ao[j]=='7' && ao[k]=='1')||
		(ao[i]=='5' && ao[j]=='6' && ao[k]=='4')||
		(ao[i]=='5' && ao[j]=='4' && ao[k]=='6')||
		(ao[i]=='5' && ao[j]=='3' && ao[k]=='7')||
		(ao[i]=='5' && ao[j]=='7' && ao[k]=='3')||
		(ao[i]=='5' && ao[j]=='1' && ao[k]=='9')||
		(ao[i]=='5' && ao[j]=='9' && ao[k]=='1')||
		(ao[i]=='5' && ao[j]=='2' && ao[k]=='8')||
		(ao[i]=='5' && ao[j]=='8' && ao[k]=='2')||
		(ao[i]=='6' && ao[j]=='5' && ao[k]=='4')||
		(ao[i]=='6' && ao[j]=='4' && ao[k]=='5')||
		(ao[i]=='6' && ao[j]=='3' && ao[k]=='9')||
		(ao[i]=='6' && ao[j]=='9' && ao[k]=='3')||
		(ao[i]=='7' && ao[j]=='8' && ao[k]=='9')||
		(ao[i]=='7' && ao[j]=='9' && ao[k]=='8')||
		(ao[i]=='7' && ao[j]=='1' && ao[k]=='4')||
		(ao[i]=='7' && ao[j]=='4' && ao[k]=='1')||
		(ao[i]=='7' && ao[j]=='5' && ao[k]=='3')||
		(ao[i]=='7' && ao[j]=='3' && ao[k]=='5')||
		(ao[i]=='8' && ao[j]=='2' && ao[k]=='5')||
		(ao[i]=='8' && ao[j]=='5' && ao[k]=='2')||
		(ao[i]=='8' && ao[j]=='7' && ao[k]=='9')||
		(ao[i]=='8' && ao[j]=='9' && ao[k]=='7')||
		(ao[i]=='9' && ao[j]=='5' && ao[k]=='1')||
		(ao[i]=='9' && ao[j]=='1' && ao[k]=='5')||
		(ao[i]=='9' && ao[j]=='6' && ao[k]=='3')||
		(ao[i]=='9' && ao[j]=='3' && ao[k]=='6')||
		(ao[i]=='9' && ao[j]=='7' && ao[k]=='8')||
		(ao[i]=='9' && ao[j]=='8' && ao[k]=='7') && y==0))
		{
		e++;
		cleardevice();
		setcolor(CYAN);
		settextstyle(BOLD_FONT,HORIZ_DIR,9);
		outtextxy(100,100,"O WIN");
		flushall();
		getch();
		exit(0);
		}
		}
		}
		}
		if(e==0 && y==0)
		{
		cleardevice();
		setcolor(CYAN);
		settextstyle(BOLD_FONT,HORIZ_DIR,4);
		outtextxy(100,100,"GAME DRAW");
		getch();
		exit(0);
		}
		break;
		}
	default:{
		cout<<"Invalid choice";
		getch();
		cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b               ";
		break;
		}
}
}
}
cleardevice();
closegraph();
}
