import java.util.*;
class Arrayx
{
	int arr[];
	public Arrayx(int isize)
	{
		arr=new int[isize];
	}
	public void Accept()
	{
		int icnt=0;
		Scanner sc = new Scanner(System.in);
		System.out.println("enter no");
		for (icnt=0;icnt<arr.length ;icnt++ )
	    {
	    	arr[icnt]=sc.nextInt();
		}
	}
}
class Mangesh extends Arrayx
{
	public Mangesh(int ivalue)
	{
		super(ivalue);
	}

	public void DisplayDiv(int ino)
	{
		System.out.println(" no are ");
	int icnt=0;
	for (icnt=0;icnt<arr.length ;icnt++ )
    {
    	if(arr[icnt]%ino==0)
    	{
    		System.out.println(arr[icnt]);
    	}
		
	}

    }

}
class P22
{
	public static void main(String[] args) 
	{
		int ilen=0;
		int ino=0;
		Scanner sc = new Scanner(System.in);
		System.out.println("enter len");
		ilen=sc.nextInt();
		System.out.println("enter divisor");
		ino=sc.nextInt();
		Mangesh mobj = new Mangesh(ilen);
		mobj.Accept();
		mobj.DisplayDiv(ino);	
	}
}