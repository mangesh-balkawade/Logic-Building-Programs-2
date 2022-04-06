import Mangesh.StringX;
import java.util.*;
class Show extends StringX
{
	int i=0;
	int j=0;
	int l=0;
	int m=0;
	public void Display()
	{
	int k=str.length()-1;
	char arr[]=str.toCharArray();
	for(i=1;i<=str.length();i++)
	{
		for(j=1;j<=i;j++)
		{
			System.out.print(arr[j-1]+" ");
		}
		System.out.println("");
	}
	for(i=(str.length()+1);i<=(2*str.length());i++,k--)
	{
		for(j=1,m=0;j<=k;j++,m++)
		{
			System.out.print(arr[m]+" ");
		}
		System.out.println("");
	}
    }
}
class P5
{
	public static void main(String[] args) 
	{
		Show sobj = new Show();
		sobj.Accept();
		sobj.Display();	
	}
}