//Snake
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <math.h>
using namespace std;
const int b=16,f=255,height=22,width=22;
void intro(),initlevel(int,int,int,int),makesnake(),snakegrow(),makefood(),move(),display();
int x,y,z,fx,fy,lx,ly,slct,dead,foodate,dir=27,score=0,length,grow,startlength,speedup,delaytime,pos[width+1][height+1];
bool foodate=false,dead=false;


int main()
{
intro();
if (slct==1)
  {
  grow=2;
  startlength=3;
  speedup=0.975;
  delaytime=200;
  }
else if (slct==2)
  {
  grow=3;
  startlength=3;
  speedup=0.9375;
  delaytime=150;
  }
else if (slct==3)
  {
  grow=4;
  startlength=3;
  speedup=0.9;
  delaytime=100;
  }
else if (slct==4)
  {
  grow=10;
  startlength=10;
  speedup=1;
  delaytime=120;
  }
while (dead==0)
  {
  makefood();
  foodate=false;
  dead=false;
  while (foodate==false and dead==false)
    {
    Sleep(delaytime);
    move();
    display();
    }
  snakegrow();
  }
cout<<endl<<"Game Over"<<endl<<"Press any key to Continue";
cin.get();
}

void intro()
{
cout<<" /-----\\  " <<"|\\      |        /\\        |   /  |-----" <<endl;
cout<<"(         "  <<"| \\     |       /  \\       |  /   |     " <<endl;
cout<<" \\        " <<"|  \\    |      /    \\      | /    |     " <<endl;
cout<<"  \\--\\    "<<"|   \\   |     /------\\     |(     |-----" <<endl;
cout<<"      \\   " <<"|    \\  |    /        \\    | \\    |     "<<endl;
cout<<"       )  "  <<"|     \\ |   /          \\   |  \\   |     "<<endl;
cout<<"\\-----/   " <<"|      \\|  /            \\  |   \\  |-----"<<endl;
cout<<endl;
cout<<"|\\    /|   /\\   |--\\ |--"<<"    |--\\ \\  / "<<"   --|--  /--\\  /--\\ |-- |-\\ |  |    |--\\"<<endl;
cout<<"| \\  / |  /--\\  |   ||--" <<"    |--<  \\/  " <<"     |   (    ) \\--\\ |-- |-/ |--|    |  |"  <<endl;
cout<<"|  \\/  | /    \\ |--/ |--" <<"    |--/  |    " <<"  \\-|    \\--/  \\--/ |-- |   |  |    |--/"  <<endl;
cout<<endl;
cout<<" \\    /\\    / -|- --|-- |  |    --|--  /--\\  /--\\ -|-   /\\   |  |    | /\n";
cout<<"  \\  /  \\  /   |    |   |--|      |   (    ) \\--\\  |   /--\\  |--|    |< \n";
cout<<"   \\/    \\/   -|-   |   |  |    \\-|    \\--/  \\--/ -|- /    \\ |  |    | \\\n\n";
cout<<"Choose:" <<endl;
cout<<"1"<<setw(10)<<"Easy"  <<endl;
cout<<"2"<<setw(10)<<"Medium"<<endl;
cout<<"3"<<setw(10)<<"Hard"  <<endl;
cout<<"4"<<setw(10)<<"Death" <<endl;
cin>>slct;
if (slct<1) {slct=1;}
if (slct>4) {slct=4;}
}

void  makesnake()
{
length=startlength;
x=1;
y=1;
z=1;
fx=startlength;
fy=1;
lx=1;
ly=1;
for (x=0;x<width+1;x++)    //was  for  x=1  to  width
  {
  for (y=0;y<height+1;y++) //was  for  y=1  to  height
    {
    pos[x][y]=0;
    }
  }
for  (x=0;x<startlength;x++)
  {
  pos[x][1]=x;
  }
}

void snakegrow()
{
if  (dead==0)
  {
  for  (x=0;x<width;x++)
    {
    for  (y=0;y<height;y++)
      {
      if  (pos[x][y]>0)  {pos[x][y]+=grow;}
      }
    }
  score+=1;
  }
delaytime*=speedup;
}

void  makefood()
{
z=0;
while (z=0)
  {
  x=round(rand()%(width-1)+1);
  y=round(rand()%(height-1)+1);
  if (pos[x][y]==0) {z=1; pos[x][y]=-1;}
  }
}

void move() ///////////////////////////////////////////////
{
//x=inkey /////////////////////////////////////////////////
//if  x=chr(27) + chr(4)  and  dir!=27 {dir=25} //(Left)
//if  x=chr(27) + chr(9)  and  dir!=28 {dir=26} //(Up)
//if  x=chr(27) + chr(5)  and  dir!=25 {dir=27} //(Right)
//if  x=chr(27) + chr(10) and  dir!=26 {dir=28} //(Down)
int n;
if (dir==25)  { //if  moving  LEFT
  n=pos[fx-1][fy];
  if  (fx<2)  {dead=1;}
  if  (n>1)   {dead=1;}
  if  (n<2)   {fx=fx-1;pos[fx][fy]=length+1;}
  if  (n==-1) {foodate=1;length=length+grow;}}

if  (dir==26)  { //if  moving  UP
  n=pos[fx][fy-1];
  if  (fy<2)  {dead=1;}
  if  (n>1)   {dead=1;}
  if  (n<2)   {fy=fy-1;pos[fx][fy]=length+1;}
  if  (n==-1) {foodate=1;length=length+grow;}}

if  (dir==27)  { //if  moving  RIGHT
  n=pos[fx+1][fy];
  if (fx+1>width) {dead=1;}
  if (n>1)        {dead=1;}
  if (n<2)        {fx=fx+1;pos[fx][fy]=length+1;}
  if (n==-1)      {foodate=1;length=length+grow;}}

if  (dir==28)  { //if  moving  DOWN
  n=pos[fx][fy+1];
  if (fy+1>height) {dead=1;}
  if (n>1)         {dead=1;}
  if (n<2)         {fy=fy+1;pos[fx][fy]=length+1;}
  if (n==-1)       {foodate=1;length=length+grow;}}

if  (dead==0)
  {
  for  (x=1;x<width;x++)
    {
    for  (y=1;y<height;y++)
      {
      if (pos[x][y]=1) {lx=x;ly=y;}
      if (pos[x][y]>0) {pos[x][y]-=1;}
      }
    }
  }
}

void  display()
{
cout<<endl<<string(width+2,'+')<<endl<<"+";
for (x=0;x<width;x++)
  {
  for (y=0;y<height;y++)
    {
    if (pos[x][y]>0)
      {//rect  x*b-(b-1),  y*b-(b-1),  STEP  b-1,  b-1,  color  rgb(0,255,0)  filled
      cout<<"*";
      }
    else if (pos[x][y]<0)
      {//rect  x*b-(b-1),  y*b-(b-1),  STEP  b-1,  b-1,  color  rgb(255,0,0)  filled
      cout<<"0";
      }
    else if (pos[x][y]==0)
      {
      cout<<" ";
      }
    else {cout<<"uh-oh";}
    }
  cout<<"+"<<endl<<"+";
  }
cout <<string(width+2,'+')<<endl<<"  Score: "<<score;
}