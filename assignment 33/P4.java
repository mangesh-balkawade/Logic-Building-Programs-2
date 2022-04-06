import java.util.*;
class Mangesh
{
			public int MultDigit(int ino)
			{
				
				int icnt=0,idigit=0,imult=1;
				if(ino==0)
				{
		         imult=0;
				}
				while(ino!=0)
				{
					idigit=ino%10;
					imult=imult*idigit;
		            ino=ino/10;
				}
				return imult;
			}
	
}
class P4
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ino=0,iret=0;
		System.out.println("enter no");
		ino=sc.nextInt();
		Mangesh mobj= new Mangesh();
		iret=mobj.MultDigit(ino);
		System.out.println("multiplication of digits are"+iret);
	}
}