package train;
import java.util.Scanner;
public class Try {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		String s= input.next();
		char temp;
	    char[]nums=new char[s.length()];
	    nums=s.toCharArray();
	    for (int i=0;i<nums.length;i+=2)
	    {
	    	for (int j=0;j<nums.length;j+=2)
	    	{
	    		if (nums[i]<nums[j])
	    		{
	    			temp=nums[i];
	    			nums[i]=nums[j];
	    			nums[j]=temp;
	    		}
	    	}
	    }
	    System.out.println(nums);	
	}
}
