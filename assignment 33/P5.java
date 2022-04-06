import java.util.*;
class Mangesh
{
				public int DiffreceBetweenSumEvenOddDigit(int ino)
				{
					
					int icnt=0,idigit=0,isume=0,isumo=0,idiff=0;
					if(ino<0)
					{
						ino=-ino;
					}
					while(ino!=0)
					{
						idigit=ino%10;
						if(idigit%2==0)
						{
							isume=isume+idigit;
						}
						if(idigit%2!=0)
						{
							isumo=isumo+idigit;
						}
			            ino=ino/10;
					}
					idiff=isumo-isume;
					if(idiff<0)
					{
						idiff=-idiff;
					}
					return idiff;
				}
	
}
class P5
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int ino=0,iret=0;
		System.out.println("enter no");
		ino=sc.nextInt();
		Mangesh mobj= new Mangesh();
		iret=mobj.DiffreceBetweenSumEvenOdd(ino);
		System.out.println("Diffrece Between  Sum Even Odd"+iret);
	}
}