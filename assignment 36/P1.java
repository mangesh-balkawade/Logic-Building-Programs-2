import Mangesh.PatternM;
class Show extends PatternM
{
	public void Display()
	{
	int i=0;
	int j=0;
    char c='\0';
	for(i=1;i<=irow;i++)
	{
		for(j=1,c='A';j<=icol;j++,c++)
		{
			System.out.print(c+" ");
		}
		System.out.println("");
	}
    }
}
class P1
{
	public static void main(String[] args)
	 {
	 	Show sobj = new Show();
	 	sobj.Accept();
	    sobj.Display();
	}
}