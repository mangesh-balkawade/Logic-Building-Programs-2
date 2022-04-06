import Mangesh.PatternM;
class Show extends PatternM
{
	public void Display()
	{
	int i=0;
	int j=0;
    int k=0;
	for(i=1;i<=irow;i++)
	{
		for(j=1,k=icol;j<=icol;j++,k--)
		{
			System.out.print(k+" "); 
		}
		System.out.println("");
	}
    }
}
class P3
{
	public static void main(String[] args)
	 {
	 	Show sobj = new Show();
	 	sobj.Accept();
	    sobj.Display();
	}
}