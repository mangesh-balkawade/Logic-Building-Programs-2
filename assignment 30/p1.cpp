#include <iostream>
using namespace std;
class Bit
{
	public:
		unsigned int CountOnBit(int ino)
		{
			unsigned int imask=0,i=0,icnt=0;
			imask=0x00000001;
            for(i=1;i<=32;i++,imask=imask<<1)
            {
            	if((imask&ino)==imask)
            	{
            		icnt++;
            	}
            }
            return icnt;
		}
};
int main()
{
	unsigned int ino=0,iret=0;
	cout<<"enter no"<<endl;
	cin>>ino;
	Bit bobj;
	iret=bobj.CountOnBit(ino);
	cout<<"on bits are"<<endl<<iret;
	return 0;
}