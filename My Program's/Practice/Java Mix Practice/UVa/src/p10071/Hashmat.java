package p10071;

import java.util.Scanner;

public class Hashmat {

	

	public static void main(String[] args)
	{		    
		      Scanner in=new Scanner (System.in);
		      while(in.hasNext())
		      {
		          long hashmat,opponent;
		    	   hashmat=in.nextLong();
		           opponent=in.nextLong();
		          if(hashmat>opponent)
		              System.out.println(hashmat-opponent);
		          else
		              System.out.println(opponent-hashmat);
		          
		          
		          
		      }		 

	}

}
