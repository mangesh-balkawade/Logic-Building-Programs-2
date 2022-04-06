#include <iostream>
using namespace std;
class Bit
{
	public:
		void DisplayCommonOnBit(int ino1,int ino2)
		{
			unsigned int imask=0,i=0,icnt1=0,icnt2=0;
			imask=0x00000001;
            for(i=1;i<=32;i++,imask=imask<<1)
            {
            	if((imask&ino1)==imask)
            	{
            		icnt1++;
            	}
            	if((imask&ino2)==imask)
            	{
            		icnt2++;
            	}
            }
           cout<<"on bits of no 1 is"<<endl<<icnt1<<endl;
           cout<<"on bits of no 2 is"<<endl<<icnt2;
		}
};
int main()
{
	unsigned int ino1=0,ino2=0,iret=0;
	cout<<"enter no"<<endl;
	cin>>ino1>>ino2;
	Bit bobj;
	bobj.DisplayCommonOnBit(ino1,ino2);
	return 0;
}