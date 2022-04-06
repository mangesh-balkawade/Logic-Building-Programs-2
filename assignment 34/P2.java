import java.util.*;
class Mangesh
{
			public int FirstOccurenceIndex(int arr[],int ino)
			{
				int icnt=0,ifo=-1;
				boolean bflag=false;
				for (icnt=0;icnt<arr.length;icnt++ ) 
				{
					if(arr[icnt]==ino)
					{
						ifo=icnt;
						break;
					}
				}
				return ifo;
			}
	
}
class P2
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ilen=0,i=0,ival=0;
		int iret=0;
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
		iret=mobj.FirstOccurenceIndex(brr,ival);
		if(iret==-1)
		{
			System.out.println("no not found");
		}
		else
		{
		System.out.println("first occurece index of no is"+iret);
	    }
	}
}