import java.util.*;
class Mangesh
{
	public String StrRevToggle(String str)
	{ 
	 char arr[]=str.toCharArray();
	 
	 char c='\0',d='\0';
	 char temp='\0';
	 int k=0,l=0;
	 int i=0,j=0;
	 for(i=0,j=(arr.length-1);i<=j;i++,j--)
	 {
	 	if(arr[i]>='A'&&arr[i]<='Z')
	 	{
	 		k=arr[i]+32;
	 		c=(char)k;
	 	}
	 	if(arr[i]>='a'&&arr[i]<='z')
 		{
 			
	 		k=arr[i]-32;
	 		c=(char)k;
 		}
 		if(arr[j]>='A'&&arr[j]<='Z')
	 	{
	 		l=arr[j]+32;
	 		d=(char)l;
	 	}
	 	if(arr[j]>='a'&&arr[j]<='z')
 		{
 			l=arr[j]-32;
	 		d=(char)l;
 		}
 		arr[i]=c;
 		arr[j]=d;
 		temp = arr[i];
 		arr[i]=arr[j];
 		arr[j]=temp;

	 }	
     String ptr = new String(arr);
     return ptr;
	}
	
}
class P4
{
	public static void main(String[] args) 
	{			
		String r;
	Scanner sc = new Scanner(System.in);
	System.out.println("enter string ");
	String s= sc.nextLine();
	Mangesh mobj= new Mangesh();
	r=mobj.StrRevToggle(s);
	System.out.println(r);
    }
}

