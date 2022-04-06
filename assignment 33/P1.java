import java.util.*;
class Mangesh
{
	public int CountEvenDigit(int ino)
	{
		int icnt=0,idigit=0;
		while(ino!=0)
		{
			idigit=ino%10;
			if(idigit%2==0)
			{
				icnt++;
			}
           ino=ino/10;
		}
		return icnt;
	}
	
}
class P1
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ino=0,iret=0;
		System.out.println("enter no");
		ino=sc.nextInt();
		Mangesh mobj= new Mangesh();
		iret=mobj.CountEvenDigit(ino);
		System.out.println("count of even digits are"+iret);
	}
}