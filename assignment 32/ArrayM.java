package Mangesh;
import java.util.*;
public class ArrayM
{
	int arr[];
	public ArrayM(int isize)
	{
		arr= new int[isize];
	}
	public void Accept()
	{
		int icnt=0;
		Scanner sc = new Scanner(System.in);
		System.out.println("enter numbers");
		for (icnt=0;icnt<arr.length ;icnt++ ) 
		{
			arr[icnt]=sc.nextInt();	
		}
	}
	public void Display()
	{
		System.out.println("no are");
		int icnt=0;
		for (icnt=0;icnt<arr.length ;icnt++ )
	    {
	    	System.out.println(arr[icnt]);
			
		}
	}
}