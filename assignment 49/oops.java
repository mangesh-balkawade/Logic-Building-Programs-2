class Oops
{
	protected int ino1,ino2;
	
	Oops(int i,int j)
	{
		this.ino1=i;
		this.ino2=j;
	}

	public int Add()
	{
      return ino1+ino2;
	}

    public int Add(float f1,float f2)
    {
      return f1+f2;
    }
    

}
class main
{
	public static void main(String[] args) {
		Oops o = new Oops(5,10);
		System.out.println(o.Add());
		System.out.println(o.Add(5.5,10.5));
	}
}