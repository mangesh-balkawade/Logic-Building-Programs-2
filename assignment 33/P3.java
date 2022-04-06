import java.util.*;
class Mangesh
{
	public int CountDigitsBetween(int ino,int idiv1,int idiv2)
	{
		int icnt=0,idigit=0;
		if(idiv1>idiv2)
		{
			int itemp=idiv1;
			idiv1=idiv2;
			idiv2=itemp;
		}
		while(ino!=0)
		{
			idigit=ino%10;
			if(idigit>idiv1&&idigit<idiv2)
			{
				icnt++;
			}
           ino=ino/10;
		}
		return icnt;
	}
	
}
class P3
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ino=0,iret=0,ino1=0,ino2=0;
		System.out.println("enter no");
		ino=sc.nextInt();
		System.out.println("enter no 1");
		ino1=sc.nextInt();
		System.out.println("enter no 2");
		ino2=sc.nextInt();
		Mangesh mobj= new Mangesh();
		iret=mobj.CountDigitsBetween(ino,ino1,ino2);
		System.out.println("count of  digits between two no are"+iret);
	}
}