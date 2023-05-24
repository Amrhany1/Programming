import java.util.Scanner;
public class Main 
{
       public static void main(String[] args) 
       {
     Scanner input =new Scanner(System.in);
        int n;
        n=input.nextInt();
        String str="";
        for (int i=1;i<=n;i++)
        {
            if (i%2==1){
                str+="I hate ";
                if (i!=n )
                    str+="that ";
            }
            else if (i%2==0)
            {
                str+="I love ";
                if (i!=n )
                    str+="that ";
            }   
        }
        str+="it";
        System.out.println(str);
       }
}