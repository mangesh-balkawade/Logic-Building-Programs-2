import java.util.*;
class Mangesh
{
	public int CountOddDigit(int ino)
	{
		int icnt=0,idigit=0;
		while(ino!=0)
		{
			idigit=ino%10;
			if(idigit%2!=0)
			{
				icnt++;
			}
           ino=ino/10;
		}
		return icnt;
	}
	
}
class P2
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ino=0,iret=0;
		System.out.println("enter no");
		ino=sc.nextInt();
		Mangesh mobj= new Mangesh();
		iret=mobj.CountOddDigit(ino);
		System.out.println("count of odd digits are"+iret);
	}
}