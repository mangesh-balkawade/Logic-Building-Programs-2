import Mangesh.PatternM;
class Show extends PatternM
{
	public void Display()
	{
	int i=0;
	int j=0;
    int k=1;
	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++,k++)
		{
			System.out.print(k+" "); 
		}
		System.out.println("");
	}
    }
}
class P5
{
	public static void main(String[] args)
	 {
	 	Show sobj = new Show();
	 	sobj.Accept();
	    sobj.Display();
	}
}