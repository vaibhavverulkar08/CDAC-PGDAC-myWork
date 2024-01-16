/*
//To write and read different datatypes from a file
#include<fstream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
float b;
char c;
char name[20];
ofstream outf("test.txt",ios::out | ios::binary);
cout<<"Enter a int,float,char,string value"<<endl;
cin>>a>>b>>c>>name;
outf<<a<<endl<<b<<endl<<c<<endl<<name<<endl;
outf.close();
ifstream inf("test.txt",ios::in | ios::binary);
inf>>a>>b>>c>>name;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<name<<endl;
getch();
inf.close();
}
*/