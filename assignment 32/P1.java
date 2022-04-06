import java.util.*;
class Mangesh
{
	public int DiffrenceSumEvenOddArray(int arr[])
	{
		int i=0,isize=0,isume=0,isumo=0,idiff=0;
		isize=arr.length;
		for(i=0;i<isize;i++)
		{
			if(arr[i]%2==0)
			{
				isume=isume+arr[i];
			}
			if(arr[i]%2!=0)
			{
				isumo=isumo+arr[i];
			}
		}
		idiff=isumo-isume;
		if(idiff<0)
		{
			idiff=-idiff;
		}
		return idiff;
	}
	
}
class P1
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ilen=0, icnt=0,iret=0;
		System.out.println("how many elements you want");
		ilen=sc.nextInt();
		int brr[]=new int[ilen];
		System.out.println("enter no");
		for(icnt=0;icnt<ilen;icnt++)
		{
			brr[icnt]=sc.nextInt();
		}
		Mangesh mobj= new Mangesh();
		iret=mobj.DiffrenceSumEvenOddArray(brr);
		System.out.println("diffrence between even and odd is"+iret);
	}
}