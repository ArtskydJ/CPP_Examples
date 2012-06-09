/* Exercise 7.27
 * 0.031S exec time, or 0.016S exec time; when not printing every board.
 * 2.605S exec time when printing every board.
 * Programmed by Joseph Dykstra, finished 05/11/2012. */
#include <iostream>
//#include <stdlib.h> //srand, in test code
//#include <time.h>   //randomization, in test code
using namespace std;
void cc(int),cb(),pbv(),pbh(),ckb(); //clear column, clear board, print board (h and v), check board
int valid(int,int), temp=0, board[8][8], mb(int);
int main()
  {
  cb();
  int cl=0;
  int rw=0;
  while (cl<8)
    {
    rw=0;
    while (rw<8)
      {
      if (valid(rw,cl)==0)
        {
        if (board[rw][cl]==0)
          {/*cc(cl);*/ board[rw][cl]=1; rw=10; cl++; temp=0;/*cout<<endl<<"Column "<<cl<<" completed:"<<endl;*/}
        else
          {board[rw][cl]=-1; temp=1;/*cout << endl << "Hey yo!" << endl;*/}
        }
      else
        {temp=1;}
      if (temp==1)
        {
        rw++;
        if (rw==8) {/*cout<< endl <<"Can't go into column "<<cl+1<<". Backing up:";cout<<endl<<"|";*/ cc(cl); cl-=1; rw=10;}
        }
      }
    //pbv(); //enable this with 'cout<<endl<<"|";' above
    }
  pbv();
  }

int valid(int ro,int co) //check if square's valid
  {
  int returnme=0; //chk<=currentcolumn;
  for (int chk=0; chk<co; chk++)                     //left
    {
    returnme+=mb(board[ro][chk]);
    }
  for (int chk=1; (chk<=ro) && (chk<=co); chk++)     //up&left diagonal
    {
    returnme+=mb(board[ro-chk][co-chk]);
    }
  for (int chk=1; ((ro+chk)<=7) && ((co-chk)>=0); chk++) //down&left diagonal
    {
    returnme+=mb(board[ro+chk][co-chk]);
    }

  //cout << returnme; //debugging code
  return  returnme; //was return !returnme;
  }

int mb(int jkl) //make boolean
  {
  if (jkl<0) {jkl=0;}
  if (jkl>1) {jkl=1;}
  return jkl;
  }

void cb() //clear board
  {
  for (int q=0; q<8; q++)
    {
    for (int w=0; w<8; w++)
      {
      board[w][q]=0;
      }
    }
  }

void cc(int clrcol) //clear column
  {
  for (int row=0; row<8; row++)
    {
    board[row][clrcol]=0;
    }
  }

void pbh() //print board horizontal
  {
  int blk=0;
  cout << "C 1.2.3.4.5.6.7.8C" << endl << "1|";
  for (int col=0; col<8; col++)
    {
    for (int row=0; row<8; row++)
      {
      if (board[row][col]==1)
        {cout<<"*|";}
      else
        {
        if (blk%2==1)
          {cout<<" |";}
        else
          {cout<<"=|";}
        }
      blk++;
      }
    blk++;
    cout << endl << col+2 << "|";
    }
  }

void pbv() //print board vertical
  {
  int blk=0;
  cout << "RC1_2_3_4_5_6_7_8C" << endl << "1|";
  for (int col=0; col<8; col++)
    {
    for (int row=0; row<8; row++)
      {
      if (board[col][row]==1)
        {cout<<"*|";}
      else
        {
        if (blk%2==1)
          {cout<<" |";}
        else
          {cout<<"=|";}
        }
      blk++;
      }
    blk++;
    if (col<7) {cout << endl << col+2 << "|";}
    else {cout << endl << "R" << endl;}
    }
  }

/* check board
void ckb() //check board
  {
  int temp=0;
  for (int q=0; q<8; q++)
    {
    for (int w=0; w<8; w++)
      {
      if (board[w][q]==1) {temp+=!valid(w,q);}
      }
    //cout << endl << "Temp==" << temp << endl;
    }
  if (temp==0) {cout << endl << "Cool" << endl;}
  else   {cout << endl << "Not Cool, " << temp << "X" << endl;}
  }
*/
/* old code,in main
while (cl<8)
    {
    cout << endl << "Column " << cl << endl;
    rw=0;
    while (rw<8)
      {
      if (board[rw][cl]==1 || board[rw][cl]==-1) {board[rw][cl]=-1;}
      else if (valid(rw,cl))
        {
        board[rw][cl]=1;
        cl++; rw=8;
        }
      rw+=1;
      if (rw==8) {cl--;}
      }
    }
*/
/* Test Code, put current main in comments
int main()
{
srand(time(0));
while (1)
  {
  int cl=0;
  int rw=0;
  for (int a=0; a<8; a++)
    {
    for (int s=0; s<8; s++)
      {
      board[a][s]=!mb(rand()%20); //about one in 20 are generated
      }
    }
  pb();
  cout<<"row:";
  cin>>rw;
  rw--;
  cout<<"column:";
  cin>>cl;
  cl--;
  cout<<"valid("<<rw<<","<<cl<<")== "<<valid(rw,cl)<<" , zero is clear.\n\n\n";
  }
}
*/
