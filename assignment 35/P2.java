import java.util.*;
class Mangesh
{
	public boolean StrCmp(String str,String ptr)
	{ 
		boolean bflag=true;
		int i=0;
		char arr[]=str.toCharArray();
		char brr[]=ptr.toCharArray();
        for(i=0;i<arr.length;i++)
        {
        	if(arr[i]!=brr[i])
        	{
        		bflag=false;
        		break;
        	}
        }
     return bflag;
	}
	
}
class P1
{
	public static void main(String[] args) 
{			
	int iret=0;
	boolean bret=false;
Scanner sc = new Scanner(System.in);
System.out.println("enter string 1");
String s= sc.nextLine();
System.out.println("enter string 2");
String r=sc.nextLine();
Mangesh mobj= new Mangesh();
bret=mobj.StrCmp(s,r);
if(bret==true)
{
	System.out.println("strings are equal");
}
else
{
    System.out.println("String are not equal");
}
}
}
