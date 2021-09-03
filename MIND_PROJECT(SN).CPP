#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<dos.h>
#include<process.h>
#include<math.h>
#include<stdlib.h>
#include<graphics.h>
char asc (char j)
{
return j;
}
void display(char* a,int v)
{
  int j=strlen(a);
  for(int i=0;i<j;i++)
  {cout<<a[i];
   delay(v);
}
}
void main()
{int i, j;
/*int gdriver = DETECT, gmode, errorcode;
int midx, midy;

// initialize graphics and local variables
initgraph(&gdriver, &gmode, "");
*/
clrscr();
for (i=3; i<9; i++)
{
    for (j=0; j<80; j++)
       cprintf("C");
    cprintf(" ");
    textcolor(i+1);
    textbackground(i);
}
clrscr();
int m=14;
int q=3;
textcolor(q+128);
gotoxy(1,47);
/*cprintf("TO VIEW FULL SCREEN, RIGHT CLICK ICON----> GOTOPROPERTIES---->SCREEN---->USAGE---->FULLSCREEN\n");
cout<<" ";
int o=4;
textcolor(o+128);
gotoxy(1,42);
cprintf("WARNING:");
int p=15;
textcolor(p);
gotoxy(1,43);
cprintf("^^^^^^^^");
int u=11;
textcolor(u);
gotoxy(1,47);
gotoxy(1,45);
display("WE RECOMMEND TO USE MIND VIEW DIRECTLY FROM FLOPPY DISK FOR BESTRESULTS  ",100);
*/
long int b,e,ch;
anoop:


	randomize();
	textcolor(random(8)+2);
display("*****    *****  ******  *****      ***  ********\n",10);
display("*** **  ** ***  ******  *** **     ***  ***    ***\n",10);
display("***  ****  ***    **    ***  **    ***  ***     ***\n",10);
display("***        ***    **    ***   **   ***  ***     ***\n",10);
display("***        ***    **    ***    **  ***  ***     ***\n",10);
display("***        ***  ******  ***     ** ***  ***    ***\n",10);
display("***        ***  ******  ***      *****  ********\n",10);
cout<<" \n\n\n";
display("    **********  **********  **********  **********  **********  **********\n",10);
display("    ***    ***  **********  **********  **********  **********  ***    ***\n",10);
display("    ***    ***  ***         ***    ***   ***   ***  ***         ***    ***\n",10);
display("    **********  ********    ***    ***   ***   ***  ********    **********\n",10);
display("    *****       ********    **********   ***   ***  ********    *****\n",10);
display("    *** ***     ***         ***    ***   ***   ***  ***         *** ***\n",10);
display("    ***   ***   **********  ***    ***  **********  **********  ***   ***\n",10);
display("    ***     *** **********  ***    ***  **********  **********  ***     ***\n",10);
/*cout<<"*****    *****  ******  *****      ***  ********\n";
cout<<"*** **  ** ***  ******  *** **     ***  ***    ***\n";
cout<<"***  ****  ***    **    ***  **    ***  ***     ***\n";
cout<<"***        ***    **    ***   **   ***  ***     ***\n";
cout<<"***        ***    **    ***    **  ***  ***     ***\n";
cout<<"***        ***  ******  ***     ** ***  ***    ***\n";
cout<<"***        ***  ******  ***      *****  ********\n";
cout<<" \n\n\n";
  cout<<"    **********  **********  **********  **********  **********  **********\n";
  cout<<"    ***    ***  **********  **********  **********  **********  ***    ***\n";
  cout<<"    ***    ***  ***         ***    ***   ***   ***  ***         ***    ***\n";
  cout<<"    **********  ********    ***    ***   ***   ***  ********    **********\n";
  cout<<"    *****       ********    **********   ***   ***  ********    *****\n";
  cout<<"    *** ***     ***         ***    ***   ***   ***  ***         *** ***\n";
  cout<<"    ***   ***   **********  ***    ***  **********  **********  ***   ***\n";
  cout<<"    ***     *** **********  ***    ***  **********  **********  ***     ***\n"; */

cout<<"\n\n\n\n\n\n\n\                            MAIN MENU\n";
cout<<"                                   *********\n";
cout<<"                                   1. Play Game\n";
cout<<"                                   ************\n";
cout<<"                                   2. About our Game \n";
cout<<"                                   ******************\n";
cout<<"                                   3.Credits\n";
cout<<"                                   ******************\n";
cout<<"                                   4. Exit\n";
cout<<"                                   **********\n\n\n\n\n\n\n\n\n";
/*for(int z=3000;z<5000;z+=50)
  { sound(z);
   delay(100);
   nosound();
   }*/
cout<<"\tEnter Your choice\n\n\n";
cout<<" ";
cin>>ch;
cout<<"\n\n\n\n\n\n";
//delay(500);
clrscr();
char a=201,b1=187,c=200,d=188;
char block=178,h=205,v=186;
char string[240];
string[0]=a;
for(int i1=1;i1<79;i1++)
string[i1]=h;
string[79]=b1;
string[80]=v;
for(i1=81;i1<159;i1++)
string[i1]=' ';
string[159]=v;
string[160]=c;
for(i1=161;i1<239;i1++)
string[i1]=h;
string[239]=d;
for(i1=81;i1<159;i1++)
{
//display("\nL o a d i n g ....",200);
//outtextxy(20, 10, "L o a d i n g........");
cout<<"\n\n\n\n\t L o a d i n g....... ";
cout<<"\n\n\n\n\n\n";
cout<<string;
string[i1]=block;
//for( z=5000;z<7000;z+=50)
int w=5000+i1;
   sound(w);
   delay(100);
   nosound();


/*display("l",4);
display("o",4);
display("a",4);
display("d",4);
display("i",4);
display("n",4);
display("g",4); */
delay(30);			//   loading   delay
//cout<<" ";
clrscr();
//delay(5);
}
cout<<" ";
clrscr();
switch(ch)
{
case 1:  //case for  play
{
  display(" \n\n\t\t***************  Rules to Play  ***************",100);
  display(" \n\n\n\t 1) Select any number from given Number ,Ex : 28\n\t",50);
  display(" 2) Add this Two Digits,2+8=10\n\t",50);
  display(" 3) Subtract it from no. you had selected, 28-10=18\n\t",50);
  display(" 4) See the symbol in front of that no.\n\t",50);
  display(" 5) Now check that mind reader give you same symbol\n",50);
  display(" \n\n\n\t SO GET READY TO PLAY THE GAME................",50);
  cprintf("\n\n\n\n\n\n\nPress Enter to Strat the Game................");
  getch();
  clrscr();
  again:
  int b[100];
  clrscr();
  int n;  randomize();
  char a[]={ '','','','','','','@','$','#','*','¤','é','â','ä','ê','ë','è','ì','û','á','í','÷'};
   for(int i=0;i<101;i++)
  {
   b[i] =a[random(22)];
  }
 for(int g=0;g<12;g++)
 {
 b[g*9]=b[9];
  }
 cout<<"\n\n\n\n";
 for(int m=0;m<10;m++)
 cout<<"\t "<<m<<" "<< asc(b[m])<<"  "<<m+10<<" "<<asc(b[10+m] )<<"  "<<m+20<<" "<<asc(b[m+20])<<"  "<<m+30<<" "<<asc(b[30+m] )<<"  "<<m+40<<" "<<asc(b[40+m] )<<"  "<<m+50<<" "<<asc(b[50+m] )<<"  "<<m+60<<" "<<asc(b[60+m] )<<"  "<<m+70<<" "<<asc(b[70+m] )<<"  "<<m+80<<" "<<asc(b[80+m] )<<"  "<<m+90<<" "<<asc(b[90+m] )<<"\n\n";
{
display("\n\n\t Press any key to check that mind reader give you which symbol ",50);
getch();
}
 for(int z=100;z<3000;z+=50)
  { sound(z);
   delay(100);
   nosound();
   }
   display("\n\n\t  Your Answer is ***************** ",100);
 /* char f[]={'y','o','u','r',' ','a','n','s','w','e','r',' ','i','s',' ','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'};
for(int x=0;x<30;x++)
 { cout<<f[x];
 delay(150);
 } */
cout<<"\t"<<asc(b[9]);

display(" ",5);
display("\n\n\n\tWant to play again ? (Y/N)",112);
char ch;
cin>>ch;
if (ch=='Y' || ch=='y')
goto again;
else
{
//getch();
clrscr();
goto anoop1;

break;
}
case 4:
 clrscr();
 char cha;
 exit1:
 cout<<"\n\n\n\n\n\n\n\t\t You want to exit ? (Y/N)";
 cin>>cha;
 if(cha=='Y'||cha=='y')
 exit (0);
 else
 {
 clrscr();
 goto anoop;
 }
}
case 2: {
display("\n\n\n\n\n\n\n\n\n\n\t\t\t  This Game is MIND READER..... ,\n\n\n\n\t      It reads what is happening in your mind !!!!!!!!!!!!!!!!!! ",100);
delay(100);
display("\n\n\n\n\n\n\n\t\t\t\t It's not a J O K E .................. ",300);
display("\n\n\n\n\n\n\t\t\t Check it out ...........! ",300);
cprintf("\n\n\n\n\n Press Enter to cont..................");
getch();
clrscr();
goto anoop;
break;
}
//case 2:
{
ofstream filout;
filout.open("pair.mv",ios::app);
{
{
int i, j;
clrscr();
for (i=0; i<0; i++)
{
    for (j=0; j<0; j++)
       cprintf("MIND VIEW ");
    cprintf(" ");
    textcolor(i+3);
    textbackground(i+4);
}}
}
//case 3:
{
{
int i, j;
clrscr();
for (i=6; i<0; i++)
{
    for (j=0; j<0; j++)
       cprintf("MIND VIEW ");
    cprintf(" ");
    textcolor(i+3);
    textbackground(i+2);
}}
clrscr();
cout<<"Created by:";
display("......",1000);
cout<<"Saurabh Nikam";
cout<<"\n";
cout<<"\n";
cout<<"\nPlease send suggestions to ";
cout<<"\n";
cout<<"\n";
display("\nPRESS ANY KEY TO CONTINUE",112);
getch();
clrscr();
goto anoop1;

//break;
//case 4:
{
int i, j;
clrscr();
for (i=3; i<0; i++)
{
    for (j=0; j<0; j++)
       cprintf("MIND VIEW ");
    cprintf(" ");
    textcolor(i+2);
    textbackground(i+1);
}
cout<<"*****    *****  ******  *****      ***  ********\n";
cout<<"*** **  ** ***  ******  *** **     ***  ***    ***\n";
cout<<"***  ****  ***    **    ***  **    ***  ***     ***\n";
cout<<"***        ***    **    ***   **   ***  ***     ***\n";
cout<<"***        ***    **    ***    **  ***  ***     ***\n";
cout<<"***        ***  ******  ***     ** ***  ***    ***\n";
cout<<"***        ***  ******  ***      *****  ********\n";
cout<<" ";
cout<<"               ***           ***  ******  *********  ******           ******\n";
cout<<"                 ***         ***   ******  *********  ******           ******\n";
cout<<"                  ***       ***      **    ***        ******           ******\n";
cout<<"                   ***     ***       **    ******     ******           ******\n";
cout<<"                    ***   ***        **    ***        *******  *****  *******\n";
cout<<"                     *** ***       ******  *********  *****  ** *** **  *****\n";
cout<<"                      *****        ******  *********  **********   **********\n";
cout<<"\n";
cout<<"\n";
cout<<"\n";
display("Behind MIND VIEW....",200);
display("        Aniket B.",200);
cout<<"\n";
display("\nOur Special Thanks To....",200);
display("        OUR TEACHERS",200);
cout<<"\n";
cout<<"\n";
display("\nPRESS ANY KEY TO CONTINUE",112);
getch();
clrscr();
goto anoop1;
//break;
}
{
//default:
clrscr();
int i, j;
clrscr();
for (i=2; i<0; i++)
{
    for (j=0; j<0; j++)
       cprintf(" MIND VIEW ");
    cprintf(" ");
    textcolor(i+2);
    textbackground(3);
}
cout<<"Your Choice is Incorrect. Please Choose a Valid One.\n";
goto anoop1;
}}
getch();
}
anoop1:
cout<<"Enter your choice...(1,2)\n";
cout<<"                ^^^^^^^^^^^^^^^^^^^^^^^^^\n";
cout<<"                 1. GO TO MAIN MENU\n";
cout<<"                 2. EXIT MIND VIEW\n";
int ch1;
cin>>ch1;
switch(ch1)
{
case 1:
clrscr();
display(" ",5);
display("loading....",200);
clrscr();
goto anoop;
clrscr();
break;
default:
clrscr();
display(" ",5);
display("loading....",200);
clrscr();
int ma=13;
textcolor(ma+128);
textmode(BW40);
cprintf("Thanks for using this program....\n");
display(" ",5);
exit: display("\nPLEASE WAIT WHILE EXITING....",200);
exit(0);
}
getch;
}}