import Mangesh.PatternM;
class Show extends PatternM
{
	public void Display()
	{
	int i=0;
	int j=0;
    int k=0;
	for(i=1,k=irow;i<=irow;i++,k--)
	{
		for(j=1;j<=icol;j++)
		{
			System.out.print(k+" "); 
		}
		System.out.println("");
	}
    }
}
class P4
{
	public static void main(String[] args)
	 {
	 	Show sobj = new Show();
	 	sobj.Accept();
	    sobj.Display();
	}
}