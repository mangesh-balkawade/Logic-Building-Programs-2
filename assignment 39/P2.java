import Mangesh.StringX;
import java.util.*;
class Show extends StringX
{
	int i=0;
	int j=0;
	public void Display()
	{
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
    }
}
class P2
{
	public static void main(String[] args) 
	{
		Show sobj = new Show();
		sobj.Accept();
		sobj.Display();	
	}
}