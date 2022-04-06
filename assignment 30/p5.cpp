#include <iostream>
using namespace std;
class Bit
{
    public:
         unsigned int RangeToggleBit(int ino,int ipos1,int ipos2)
        {
            unsigned int imask1=0,imask2=0,imask=0,ians=0;
            imask1=0xffffffff;
            imask1=imask1<<ipos1-1;
            imask2=0xffffffff;
            imask2=imask2>>(32-ipos2);
            imask=imask1&imask2;
            ians=imask^ino;
            return ians;
        }
};
int main()
{
    unsigned int ino=0,iret=0,ipos1=0,ipos2=0;
    cout<<"enter no position 1 & position 2"<<endl;
    cin>>ino>>ipos1>>ipos2;
    Bit bobj;
    iret=bobj.RangeToggleBit(ino,ipos1,ipos2);
    cout<<"after toggking  bits no is"<<endl<<iret;
    return 0;
}