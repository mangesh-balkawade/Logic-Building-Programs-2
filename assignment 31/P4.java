import java.util.*;
class Mangesh
{
	public boolean CheckVovel(String str)
	{
		int i=0; 
		boolean bflag=false;
		char arr[]=str.toCharArray();
		int ilength= str.length();
		for(i=0;i<ilength;i++)
		{
			if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
			{
				bflag=true;
			}

		}
		return bflag;
	}
	
}
class P4
{
	public static void main(String[] args) 
{			
	int iret=0;
	boolean bret=false;
Scanner sc = new Scanner(System.in);
System.out.println("enter String");
String s= sc.nextLine();
Mangesh mobj= new Mangesh();
bret=mobj.CheckVovel(s);
if(bret==true)
{
	System.out.println("vovels are present");
}
else
{
    System.out.println("vovels are not present");
}
}
}
