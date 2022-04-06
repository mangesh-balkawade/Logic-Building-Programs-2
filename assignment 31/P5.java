import java.util.*;
class Mangesh
{
	public void StringReverse(String str)
	{
		int i=0,j=0;
		char temp='\0';
		char arr[]=str.toCharArray();
		int ilength= str.length();
		for(i=0,j=(ilength-1);i<=j;i++,j--)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	 str=new String(arr);
     System.out.println(str);
	}
	
}
class P5
{
	public static void main(String[] args) 
{			
	
Scanner sc = new Scanner(System.in);
System.out.println("enter String");
String s= sc.nextLine();
Mangesh mobj= new Mangesh();
mobj.StringReverse(s);
}
}
