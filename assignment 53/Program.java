import java.util.*;

class ArraySol 
{
	public void Rev(int arr[])
	{
		int irev=0;
		for (int i=0;i<arr.length ;i++ ) 
		{
			while(arr[i]!=0)
			{
			    irev = irev*10+(arr[i]%10);
                arr[i]=arr[i]/10;
			}
			System.out.print(irev+" ");
			irev=0;
		}
		System.out.println();
	}

	public int[] RepBySum(int arr[])
	{
		int rbs[]=new int[arr.length];
		int isum=0;
		for (int i=0;i<arr.length ;i++ ) 
		{
			while(arr[i]!=0)
			{
			   isum=isum+(arr[i]%10);
               arr[i]=arr[i]/10;
			}
			rbs[i]=isum;
			isum=0;
		}
		return rbs;
	}

	public int CountCap(char arr[])
	{
		int icnt=0;
		for (int i=0;i<arr.length;i++ )
	    {
			if(arr[i]>='A'&&arr[i]<='Z')
				icnt++;
		}
		return icnt;
	}

	public void DisplayCLass(int arr[])
	{
		for (int i=0;i<arr.length ;i++ ) 
		{
			if(arr[i]>=70)
				System.out.println("First class with Distinction");
			else if(arr[i]>=60)
				System.out.println("First class");
			else if(arr[i]>=50)
				System.out.println("Second Class");
			else if(arr[i]>=35)
				System.out.println("Pass");
			else
				System.out.println("fail");

		}
	}
}

class main
{
	public static void main(String[] args) 
	{
		int arr1[]={20,45,37,75,94,36};
		int arr2[]={20,45,37,75,94,36};
		int arr3[]={20,45,37,75,94,61,55,70,36};
		char arr4[]={'A','b','F','Q','a','D','s'};
		ArraySol s1 = new ArraySol();
		s1.Rev(arr1);
        int brr[]= s1.RepBySum(arr2);
        for(int i=0;i<brr.length;i++)
        {
        	System.out.print(brr[i]+" ");
        }
        System.out.println();
        s1.DisplayCLass(arr3);
        int iret=s1.CountCap(arr4);
        System.out.print(iret);
	}
}