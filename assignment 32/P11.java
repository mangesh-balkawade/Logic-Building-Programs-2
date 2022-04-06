import java.util.*;
 class Arr
{
	int arr[];
	public Arr(int isize)
	{
		arr=new int[isize];
	}
	public void Accept()
	{
		int icnt=0;
		System.out.println("enter no");
     Scanner sc = new Scanner(System.in);
     for(icnt=0;icnt<arr.length;icnt++)
     {
     	arr[icnt]=sc.nextInt();
     }
	}
	public void Display()
	{
		int icnt=0;
		for(icnt=0;icnt<arr.length;icnt++)
         {
         	System.out.println(arr[icnt]);

         }

	}
}
class Mangesh extends Arr
{
	public Mangesh(int isize)
	{
		super(isize);
	}
	int isume=0,isumo=0,ideff=0,icnt=0;
	public int SumDiff()
	{
	for(icnt=0;icnt<arr.length;icnt++)
	{
		if(arr[icnt]%2==0)
		{
			isume=isume+arr[icnt];
		}
		if(arr[icnt]%2!=0)
		{
			isumo=isumo+arr[icnt];
		}

	}
		ideff=isumo-isume;
		if(ideff<0)
		{
			ideff=-ideff;
		}
	 return ideff;
   }

}
class P11
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ilen=0,iret=0;
		System.out.println("how many elements you want");
		ilen=sc.nextInt();
		Mangesh mobj = new Mangesh(ilen);
		mobj.Accept();
		mobj.Display();
		iret=mobj.SumDiff();	
       System.out.println("diff is"+iret);
	}
}