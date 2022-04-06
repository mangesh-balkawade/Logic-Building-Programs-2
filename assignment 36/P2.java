import Mangesh.PatternM;
class Show extends PatternM
{
	public void Display()
	{
	int i=0;
	int j=0;
    char c='\0';
    char d='\0';
	for(i=1;i<=irow;i++)
	{
		for(j=1,c='A',d='a';j<=icol;j++,c++,d++)
		{
			if(i%2!=0)
			{
			System.out.print(c+" ");
		    }
		    else
		    {
		    	System.out.print(d+" ");
		    }

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