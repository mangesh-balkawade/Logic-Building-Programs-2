import Mangesh.PatternM;
class Show extends PatternM
{
	public void Display()
	{
	int i=0;
	int j=0;
    char c='\0';
    char d='\0';
	for(i=1,c='A';i<=irow;i++,c++)
	{
		for(j=1;j<=icol;j++)
		{
			System.out.print(c+" "); 
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