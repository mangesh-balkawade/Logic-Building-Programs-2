import java.util.*;
import Mangesh.ArrayM;
class Man extends ArrayM
{
	public Man(int ivalue)
	{
		super(ivalue);
	}
	public void DisplayAnagram()
	{
		int icnt=0;int idigcnt=0;int idigit=0;
		for(icnt=0;icnt<arr.length;icnt++)
		{
			int itemp=0;
			arr[icnt]=itemp;
			while(arr[icnt]!=0)
			{
				int idigcnt++;
				arr[icnt]=arr[icnt]/10;
			}
			int idig[]=new int[idigcnt];
            int j=0;
            arr[icnt]=itemp;
			while(arr[icnt]!=0)
			{
              idigit=arr[icnt]%10;
			  idig[j]=idigit;
		      arr[icnt]=arr[icnt]/10;
		      j++;
            }
            arr[icnt]=itemp;
            for(icnt=0;icnt<idigcnt;icnt++)
            {
            	
            }

		}
	}
}
class Anagram
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int isize=0;
		System.out.println("how many elements you want");
		isize=sc.nextInt();
		Man mobj = new Man(isize);
		mobj.Accept();
		mobj.Display();
		mobj.DisplayAnagram();		
	}
}