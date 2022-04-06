import java.util.*;
class Mangesh
{
			public void  DisplayRangeArray(int arr[],int ino1,int ino2)
			{
				int icnt=0;
				int itemp=0;
				if(ino1>ino2)
				{
		          itemp=ino1;
		          ino1=ino2;
		          ino2=itemp;
				}
				for (icnt=0;icnt<arr.length;icnt++ ) 
				{
					if(arr[icnt]>=ino1&&arr[icnt]<=ino2)
					{
						System.out.println(arr[icnt]);
					}
				}
				
			}
	
}
class P4
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ilen=0,i=0,ival1=0,ival2=0;
		
		System.out.println("how many no you want");
		ilen=sc.nextInt();
		int brr[]=new int[ilen];
		System.out.println("enter staring no");
		ival1=sc.nextInt();
		System.out.println("enter staring no");
		ival2=sc.nextInt();
		System.out.println("enter no");
		for(i=0;i<ilen;i++)
		{
			brr[i]=sc.nextInt();
		}
		Mangesh mobj= new Mangesh();
		System.out.println("no between range are");
		mobj.DisplayRangeArray(brr,ival1,ival2);
		
	}
}