import java.util.*;
class Mangesh
{
			public int ProductOddArray(int arr[])
			{
				int icnt=0,i=0;
				int ipro=1;
				for (icnt=0;icnt<arr.length;icnt++ ) 
				{
					if(arr[icnt]%2!=0)
					{
		                i++;
						ipro=ipro*arr[icnt];
					}
				}
				if(i==0)
				{
					return ipro=0;
				}
			 return ipro;
			}
	
}
class P5
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ilen=0,i=0;
		int iret=0;
		System.out.println("how many no you want");
		ilen=sc.nextInt();
		int brr[]=new int[ilen];
		System.out.println("enter no");
		for(i=0;i<ilen;i++)
		{
			brr[i]=sc.nextInt();
		}
		Mangesh mobj= new Mangesh();
		iret=mobj.ProductOddArray(brr);
		System.out.println("product of odd no are"+iret);
	}
}