#include<iostream>
using namespace std;
int ToggleBit(int ino,int ipos)
{
	int imask=0,ians=0;
	imask=0x00000001;
	imask=imask<<ipos-1;
	ians=imask^ino;
	return ians;
}
int main()
{
	int ival,iret=0,ipos=0;
	cout<<"enter no"<<endl<<"enter position";
	cin>>ival>>ipos;
    iret=ToggleBit(ival);
    cout<<"no after toggling bit"<<endl<<iret;
	return 0;
}