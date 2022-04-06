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
	int k=str.length();
	char arr[]=str.toCharArray();
	for(i=1;i<=str.length();i++,k--)
	{
		for(j=1;j<=k;j++)
		{
			System.out.print(arr[j-1]+" ");
		}
		System.out.println("");
	}
	for(i=(str.length()+1),l=2;i<(2*str.length());i++,l++)
	{
		for(j=1,m=0;j<=l;j++,m++)
		{
			System.out.print(arr[m]+" ");
		}
		System.out.println("");
	}
    }
}
class P4
{
	public static void main(String[] args) 
	{
		Show sobj = new Show();
		sobj.Accept();
		sobj.Display();	
	}
}