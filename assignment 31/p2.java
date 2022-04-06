import java.util.*;
class Mangesh
{
		public int CountSmall(String str)
		{
			int icnt=0, i=0; 
			char arr[]=str.toCharArray();
			int ilength= str.length();
			for(i=0;i<ilength;i++)
			{
				if(arr[i]>='a'&&arr[i]<='z')
				{
					icnt++;
				}

			}
			return icnt;
		}
	
}
class P2
{
	public static void main(String[] args) 
{			
	int iret=0;
Scanner sc = new Scanner(System.in);
System.out.println("enter String");
String s= sc.nextLine();
Mangesh mobj= new Mangesh();
iret=mobj.CountSmall(s);
System.out.println("no of small lettres are"+iret);
}
}