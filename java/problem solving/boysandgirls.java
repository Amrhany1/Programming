package train;
import java.util.Scanner;
public class Try {
	public static void main(String[] args) {
	 Scanner input=new Scanner(System.in);
     String username,same="";
     int samechar=0;
     username= input.next();
     char [] user =new char [username.length()];
     user=username.toCharArray();
     for (int i=0;i<user.length;i++)
    	 for (int j=i+1;j<user.length;j++)
    	 {
    		 if(user[i]==user[j])
    			 {
                  user[j]=0;
    	         } 
    		 }
     for (int i=0;i<user.length;i++)
    	 if (user[i]!=0)
    		 same+=user[i];
	 if ((same.length())%2==0)
		 System.out.println("CHAT WITH HER!");
	 else 
		 System.out.println("IGNORE HIM!");
	}
}
