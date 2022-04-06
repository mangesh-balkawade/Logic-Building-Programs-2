import java.util.*;
import Mangesh.ArrayM;
class P11
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int isize=0;
		System.out.println("how many elements you want");
		isize=sc.nextInt();
		ArrayM m = new ArrayM(isize);
		m.Accept();
		m.Display();		
	}
}