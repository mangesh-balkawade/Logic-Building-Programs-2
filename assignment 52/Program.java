import java.util.*;
class Array
{

	protected int arr1[],arr2[];
	public Array(int isize1,int isize2)
	{
		this.arr1=new int[isize1];
		this.arr2=new int[isize2];
	}
    
    public void accept()
    {
    	Scanner sc = new Scanner(System.in);
    	System.out.println("enter elements in first array");
    	for (int i=0;i<arr1.length;i++) 
    	{
    		arr1[i]=sc.nextInt();
    	}
    	System.out.println("enter elements in the second array");
    	for (int i=0;i<arr2.length;i++) 
    	{
    		arr2[i]=sc.nextInt();
    	}
    }
}
class MyArray extends Array
{
	public MyArray(int isize,int ilen)
	{
		super(isize,ilen);
	}

      public int diffArrSum()
      {
        int isum1=0,isum2=0;
        for (int i=0,j=0;i<arr1.length||j<arr2.length;i++,j++) 
        {
            if(i<arr1.length)
            {
                isum1=isum1+arr1[i];
            }
            if(j<arr2.length)
            {
                isum2=isum2+arr2[j];
            }
        }
           int idiff=isum1-isum2;
           if(idiff<0)
           {
            idiff=-idiff;
           }
           return idiff;
      }

      public void displayMin()
      {
         int  imin1=arr1[0],imin2=arr2[0];

         for(int i=0,j=0;i<arr1.length||j<arr2.length;i++,j++) 
            {
                if(i<arr1.length)
                {
                    if(arr1[i]<imin1)
                    {
                        imin1=arr1[i];
                    }
                }
                if(j<arr2.length)
                {
                   if(arr2[i]<imin2)
                    {
                        imin2=arr2[i];
                    }
                }
            }

            System.out.println("minimum element from first array is "+imin1);
             System.out.println("minimum element from second array is "+imin2);
       }

     public int[] ArrayConcate()
      {
         int ArrCon[];
         int ilen=arr1.length+arr2.length;
         ArrCon=new int[ilen];
         for (int i=0,j=0,k=arr1.length;i<ilen||j<arr2.length;i++,j++,k++) 
         {
            if(i<arr1.length)
            {
                ArrCon[i]=arr1[i];
            }
            if(j<arr2.length)
            {
                ArrCon[k]=arr2[j];
            }
         }
         return ArrCon;
      }

      public int[] arrConRev()
      {
         int arrrev[];
         int ilen=arr1.length+arr2.length;
         arrrev=new int[ilen];

         for (int i=arr1.length-1,j=arr2.length-1,k=0,l=arr2.length;i>=0||j>=0;i--,j--) 
         {
            if(j>=0)
            {
                arrrev[k]=arr2[j];
                k++;
            } 
            if(i>=0)
            {
                arrrev[l]=arr1[i];
                l++;
            }
         }
         return arrrev;
      }

      public boolean chkPalindrome()
      {
        int i=0,j=0;
        for ( i=0,j=arr1.length-1;i<j;i++,j--) 
        {
            if(arr1[i]!=arr1[j])
            {
                break;
            }
        }
        if(i<j)
            return false;
        else
            return true;
      }
}

class main
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("enter size of first array");
		int ilen1=sc.nextInt();
		System.out.println("enter size of second array");
		int ilen2=sc.nextInt();
		MyArray ma = new MyArray(ilen1,ilen2);
        ma.accept();
		ma.diffArrSum();
        ma.displayMin();
        int brr[]=ma.arrConRev();
        for (int i=0;i<brr.length;i++) 
        {
            System.out.print(brr[i]+" ");
        }
        System.out.println();
		int arr[]=ma.ArrayConcate();
		for (int i=0;i<arr.length;i++) 
		{
			System.out.print(arr[i]+" ");
		}
        boolean bret=ma.chkPalindrome();
        if(bret==true)
            System.out.println("array is palindrome");
        else
            System.out.println("array is not palindrome");
	}
}