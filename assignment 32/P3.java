import java.util.*;
class Mangesh
{
	public void Display(int arr[],int ino)
	{
		int i=0,isize=0;
		isize=arr.length;
		for(i=0;i<isize;i++)
		{
			if(arr[i]%ino==0&&arr[i]%2==0)
			{
				System.out.println(arr[i]);
			}
			
		}
		
	}
	
}
class P3
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ilen=0, icnt=0,ino=0;
		System.out.println("enter divisor 1");
		ino=sc.nextInt();
		System.out.println("how many elements you want");
		ilen=sc.nextInt();
		int brr[]=new int[ilen];
		System.out.println("enter no");
		for(icnt=0;icnt<ilen;icnt++)
		{
			brr[icnt]=sc.nextInt();
		}
		Mangesh mobj= new Mangesh();
	   System.out.println("no divisable by divisor which are even are");
		mobj.Display(brr,ino);
		
	}
}