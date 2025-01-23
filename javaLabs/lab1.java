import java.lang.*;
import java.util.*;

class Main{

	public static void main (String [] args){
		System.out.println("hello world!");
		System.out.println(String.format("args length: %d", args.length));

		if (args.length == 0){
			System.out.println("no args passed");
		}

		System.out.println("value of input" + Integer.valueOf(args[0]));

         	System.out.print("Enter username: ");
		String firstname = args[1].split(",")[0];
		String lastname = args[1].split(",")[1];

         	System.out.print("Enter age: ");
		int age = Integer.valueOf(args[2]);

		System.out.println(String.format("my name is %s %s, an:d i am %d" , firstname, lastname , age));
	}
}
