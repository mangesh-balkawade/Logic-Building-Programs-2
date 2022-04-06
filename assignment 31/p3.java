import java.util.*;
class Mangesh
{
	int CountCapitalSmallFrequency(String str)
	{
		int icntc=0, i=0,icnts=0,ifreq=0;
		char arr[]=str.toCharArray();
		int ilength= str.length();
		for(i=0;i<ilength;i++)
		{
			if(arr[i]>='a'&&arr[i]<='z')
			{
				icnts++;
			}
			if(arr[i]>='A'&&arr[i]<='Z')
			{
				icntc++;
			} 
		}
		 ifreq=icntc-icnts;
            if(ifreq<0)
            {
            	ifreq=-ifreq;
            }
		return ifreq;
	}
	
}
class P3
{
	public static void main(String[] args) 
{			
	int iret=0;
Scanner sc = new Scanner(System.in);
System.out.println("enter String");
String s= sc.nextLine();
Mangesh mobj= new Mangesh();
iret=mobj.CountCapitalSmallFrequency(s);
System.out.println("diffrence between small and capital letters are"+iret);
}
}