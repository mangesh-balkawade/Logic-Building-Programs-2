import java.util.*;
class Mangesh
{
	public boolean ChkPalindromeWithoutCase(String str)
	{ 
	 char arr[]=str.toCharArray();
	 boolean bflag=true;
	 char c='\0',d='\0';
	 int k=0,l=0;
	 int i=0,j=0;
	 for(i=0,j=(arr.length-1);i<j;i++,j--)
	 {
	 	if(arr[i]>='A'&&arr[i]<='Z')
	 	{
	 		k=arr[i]+32;
	 		c=(char)k;
	 	}
	 	if(arr[i]>='a'&&arr[i]<='z')
 		{
 		  c=arr[i];
 		}
 		if(arr[j]>='A'&&arr[j]<='Z')
	 	{
	 		l=arr[j]+32;
	 		d=(char)l;
	 	}
	 	if(arr[j]>='a'&&arr[j]<='z')
 		{
 			d=arr[j];
 		}
 		arr[i]=c;
 		arr[j]=d;
	 	if(arr[i]!=arr[j])
	 	{
	 		bflag=false;
	 		break;
	 	}

	 }
     return bflag;
	}
	
}
class P5
{
	public static void main(String[] args) 
	{			
		boolean bret=false;
	Scanner sc = new Scanner(System.in);
	System.out.println("enter string ");
	String s= sc.nextLine();
	Mangesh mobj= new Mangesh();
	bret=mobj.ChkPalindromeWithoutCase(s);
	if(bret==true)
	{
		System.out.println("String is palindrome");
	}
	else
	{
		System.out.println("String is not palindrome");
	}
	
    }
}

