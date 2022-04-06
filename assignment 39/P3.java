import Mangesh.StringX;
import java.util.*;
class Show extends StringX
{
	int i=0;
	int j=0;
	public void Display()
	{
	char arr[]=str.toCharArray();
	for(i=1;i<=str.length();i++)
	{
		for(j=1;j<=str.length();j++)
		{
			if(j<=i)
			{
			System.out.print(arr[j-1]+" ");
		    }
		    else
		    {
		    System.out.print("#"+" ");
		    }
		}
		System.out.println("");
	}
    }
}
class P3
{
	public static void main(String[] args) 
	{
		Show sobj = new Show();
		sobj.Accept();
		sobj.Display();	
	}
}