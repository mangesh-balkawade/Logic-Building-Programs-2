import java.util.*;
class Mangesh
{
	public void Display(int arr[],int ino1,int ino2)
	{
		int i=0,isize=0;
		isize=arr.length;
		for(i=0;i<isize;i++)
		{
			if(arr[i]%ino1==0&&arr[i]%ino2==0)
			{
				System.out.println(arr[i]);
			}
			
		}
		
	}
	
}
class P4
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ilen=0, icnt=0,ino1=0,ino2;
		System.out.println("enter divisor 1");
		ino1=sc.nextInt();
		System.out.println("enter divisor 2");
		ino2=sc.nextInt();
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
		mobj.Display(brr,ino1,ino2);
		
	}
}