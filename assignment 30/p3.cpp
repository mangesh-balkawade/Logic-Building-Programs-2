#include <iostream>
using namespace std;
class Bit
{
    public:
         bool ChkBitsOn(int ino,int ipos1,int ipos2)
        {
            int imask1=0,imask2=0,imask=0;
            imask1=0x00000001;
            imask1=imask1<<ipos1-1;
            imask2=0x00000001;
            imask2=imask2<<ipos2-1;
            imask=imask1|imask2;
            if((imask&ino)==imask)
            {
                return true;
            }
            else
            {
               return false;
            }
        }
};
int main()
{
    unsigned int ino=0,ipos1=0,ipos2=0;
    bool bret;
    cout<<"enter no position 1 & position 2"<<endl;
    cin>>ino>>ipos1>>ipos2;
    Bit bobj;
    bret=bobj.ChkBitsOn(ino,ipos1,ipos2);
    if(bret==true)
    {
        cout<<"bits are on";
    }
    else
    {
        cout<<"bits are off";
    }
    return 0;
}