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

	  public void display()
	  {
        System.out.println(" elements in first array are");
    	for (int i=0;i<arr1.length;i++) 
    	{
    	  	System.out.print(arr1[i]+" ");
    	}
    	 System.out.println();
    	 System.out.println(" elements in second array are");
    	for (int i=0;i<arr2.length;i++) 
    	{
    	  	System.out.print(arr2[i]+" ");
    	}
    	System.out.println();
	  }

	  public void displayEven()
	  {
	  	System.out.println(" even elements in first array are");
    	for (int i=0;i<arr1.length;i++) 
    	{
    		if(arr1[i]%2==0)
    	  	System.out.print(arr1[i]+" ");
    	}
    	System.out.println();
    	 System.out.println("even elements in second array are");
    	for (int i=0;i<arr2.length;i++) 
    	{ 
    		if(arr2[i]%2==0)
    	  	System.out.print(arr2[i]+" ");
    	}
    	System.out.println();
	  }

	  public void displayOdd()
	  {
	  	System.out.println(" odd elements in first array are");
    	for (int i=0;i<arr1.length;i++) 
    	{
    		if(arr1[i]%2!=0)
    	  	System.out.print(arr1[i]+" ");
    	}
    	System.out.println();
    	 System.out.println("odd elements in second array are");
    	for (int i=0;i<arr2.length;i++) 
    	{ 
    		if(arr2[i]%2!=0)
    	  	System.out.print(arr2[i]+" ");
    	}
    	System.out.println();
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

	  public void displaySum()
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
	  	System.out.println();
	  	System.out.println("sum of first array is "+isum1);
	  	System.out.println("sum of second array is "+isum2);
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
		ma.display();
		ma.displayEven();
		ma.displayOdd();
		ma.displaySum();
		int arr[]=ma.ArrayConcate();
		for (int i=0;i<arr.length;i++) 
		{
			System.out.print(arr[i]+" ");
		}
	}
}