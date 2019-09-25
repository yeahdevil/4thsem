class lp20 implements Runnable
{
  public void run()
  {
    int count;
    int i,j;
    System.out.println("First fifty prime nos are :-");
    {
      for(i=1;i<=50;i++)
      {

          count=0;
          for(j=1;j<=50;j++)
          {
            if(i%j==0)
            {
              count++;
            }
          }
            if(count==2)
            {
              System.out.println(i);
            }
      }
    }
  }
}
class lp21 implements Runnable
{
  public void run()
  {
    int count;
    int i,j;
    System.out.println("Next fifty prime nos are :-");
    {
      for(i=51;i<=100;i++)
      {

          count=0;
          for(j=51;j<=100;j++)
          {
            if(i%j==0)
            {
              count++;
            }
          }
            if(count==2)
            {
              System.out.println(i);
            }
      }
    }
  }
}
class lp22 implements Runnable
{
  public void run()
  {
    int count;
    int i,j;
    System.out.println("next fifty prime nos are :-");
    {
      for(i=101;i<=150;i++)
      {

          count=0;
          for(j=101;j<=150;j++)
          {
            if(i%j==0)
            {
              count++;
            }
          }
            if(count==2)
            {
              System.out.println(i);
            }
      }
    }
  }
}
class lp2{
class public static void main(String []args)
{
    lp20 x=new lp20();
    lp21 y=new lp21();
    lp22 z=new lp22();
    Thread t1=new Thread(x);
    Thread t2=new Thread(y);
    Thread t3=new Thread(z);
    t1.start();
    t2.start();
    t3.start();
}
}
