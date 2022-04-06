import java.util.*;
class Mangesh
{
			public boolean CheckNoArray(int arr[],int ino)
			{
				int icnt=0;
				boolean bflag=false;
				for (icnt=0;icnt<arr.length;icnt++ ) 
				{
					if(arr[icnt]==ino)
					{
						bflag=true;
						break;
					}
				}
				return bflag;
			}
	
}
class P1
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ilen=0,i=0,ival=0;
		boolean bret=false;
		System.out.println("how many no you want");
		ilen=sc.nextInt();
		int brr[]=new int[ilen];
		System.out.println("enter no to find");
		ival=sc.nextInt();
		System.out.println("enter no");
		for(i=0;i<ilen;i++)
		{
			brr[i]=sc.nextInt();
		}
		Mangesh mobj= new Mangesh();
		bret=mobj.CheckNoArray(brr,ival);
		if(bret==true)
		{
			System.out.println("no is present");
		}
		else
		{
			System.out.println("no is not present");
		}
	}
}