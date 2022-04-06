import Mangesh.StringX;
import java.util.*;
class Show extends StringX
{
	int i=0;
	int j=0;
	public void Display()
	{
	int l=0;
	int m=2;
	int k=str.length();
	char arr[]=str.toCharArray();
	for(i=1;i<=str.length();i++,k--)
	{
		for(j=1;j<=str.length();j++)
		{
			if(j<=k)
			{
			System.out.print(arr[j-1]+" ");
		    }
		    else
		    {
		    System.out.print("*"+" ");
		    }
		}
		System.out.println("");
	}
	for(i=(str.length()+1);i<(2*str.length());i++,m++)
	{
		for(j=1,l=0;j<=str.length();j++,l++)
		{
			if(j<=m)
			{
				System.out.print(arr[l]+" ");
			}
			else
			{
				System.out.print("*"+" ");
			}
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