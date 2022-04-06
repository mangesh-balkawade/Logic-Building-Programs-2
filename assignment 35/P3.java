import java.util.*;
class Mangesh
{
	public boolean StrNCmp(String str,String ptr,int ino)
	{ 
		boolean bflag=true;
		int i=0;
		char arr[]=str.toCharArray();
		char brr[]=ptr.toCharArray();
        for(i=0;i<ino;i++)
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
class P3
{
	public static void main(String[] args) 
{			
	int iret=0;int ino=0;
	boolean bret=false;
Scanner sc = new Scanner(System.in);
System.out.println("enter string 1");
String s= sc.nextLine();
System.out.println("enter string 2");
String r=sc.nextLine();
System.out.println("enter the no upto check");
ino=sc.nextInt();
Mangesh mobj= new Mangesh();
bret=mobj.StrNCmp(s,r,ino);
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
