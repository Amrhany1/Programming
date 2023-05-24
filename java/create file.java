package train;
import java.io.File;
import java.io.IOException;


public class Try {

	
	public static void main(String[] args) throws IOException {
/*The mkdir() method is a part of File class. The mkdir() function is used to create a new directory denoted by the abstract pathname.

The function returns true if directory is created else returns false.

Function Signature:

public boolean mkdir()
Syntax:

file.mkdir()
Parameters: This method do not accepts any parameter.

Return Value: The function returns boolean data type. The function returns true if directory is created else returns false.

Exception: This method throws SecurityException if the method does not allow directory to be created*/
		File file =new File ("C:\\Users\\Amr\\Desktop\\amr.txt");
		if (file.mkdir())
			System.out.println("created !");
		else 
			System.out.println(" Already found !");
			
/*The createNewFile() function is a part of File class in Java . This function creates new empty file. The function returns true if the abstract file path does not exist and a new file is created. It returns false if the filename already exists.

Function signature:

public boolean createNewFile()
Syntax:

boolean var = file.createNewFile();
Parameters: This method does not accept any parameter.

Return Type: The function returns boolean data type representing whether the new file is created or not.

Exception: This method throws following exceptions:

IO Exception: if input output error occurs
Security Exception: if the write access to the file is denied*/
		
		
		if (file.createNewFile())
		System.out.println("created !");
		else 
			System.out.println(" Already found !");
		
		
	}

}
