import Mangesh.PatternM;
class Show extends PatternM
{
	public void Display()
	{
	int i=0;
	int j=0;
    
	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			System.out.print(j+" "); 
		}
		System.out.println("");
	}
    }
}
class P2
{
	public static void main(String[] args)
	 {
	 	Show sobj = new Show();
	 	sobj.Accept();
	    sobj.Display();
	}
}