import java.lang.*;
import java.util.*;
import java.util.regex.*;
import java.util.StringTokenizer;


public class Main{

	public static void main(String args[]){
		String str = "ITI develops people and ITI house of developers and ITI for people";

		String[] words = str.split(" ");
		int counter = 0;
		for (String w : words){
			if ("ITI".equals(w)){
				counter++;
			}
		}
		System.out.println("counts: " + counter);

		StringTokenizer st = new StringTokenizer(str);
	
		System.out.println(countOccurance("ITI" , st));
		
		while(st.hasMoreTokens()){
			System.out.print(st.nextToken() + ", ");
		}


		System.out.println(Arrays.toString(bubbleSort(new int[]{8 ,9,6,3,1,4})));
		System.out.println(Arrays.toString(getMinAndMax(new int[]{8 ,9,6,3,1,4})));
		
		long start = System.nanoTime();
		int[] arr = bubbleSort(new int[]{7,8,9,6,4,5,3,2,1});	
		System.out.println(binarySearch(arr, 5));
		System.out.println("operation time: " + (System.nanoTime() - start) / 1000);	

		System.out.println("ip moataz: " + isIpValid("moataz"));

		System.out.println("ip 129.123.128.129: " + isIpValid("129.123.128.129"));
	}



	public static boolean isIpValid(String ip){
		Pattern ptr = Pattern.compile("^((25[0-5]|(2[0-4]|1\\d|[1-9]|)\\d)\\.?\b){4}$");
		Matcher mt = ptr.matcher(ip);
		boolean isValid = mt.find();

		return isValid;
		/*	
		try{
		String[] masks = ip.split("\\.");
		if (masks.length != 4) return false;
		for (String mask : masks) 
			if (mask.length() > 3 && Integer.valueOf(mask) != -1)
			       	return false;
		}catch(Exception e){
			return false;
		}
		return true;*/
	}

	public static int countOccurance(String strQuery, StringTokenizer st){
		int counter=  0;
		while(st.hasMoreTokens()){
			String next = st.nextToken();
			if (next.equals(strQuery)) counter++;
		}

		return counter;
	}

	public static int[] getMinAndMax(int[] arr){
		int max = 0, min = Integer.MAX_VALUE;
		for(int i = 0; i < arr.length; i++){
			if (arr[i] > max){
				max = arr[i];
			}else if (arr[i] < min){
				min = arr[i];
			}
		
		}

		return new int[]{min, max};
	}

	public static int[] bubbleSort(int[] arr){
		boolean isSorted = false;

		do{
			isSorted = true;
			for (int i = 1; i < arr.length; i++ ) {
				if (arr[i] < arr[i -1]){
					isSorted = false;
					int temp = arr[i];
					arr[i] = arr[i -1];
					arr[i -1] = temp;
				}
			
			}
		}while(!isSorted);

		return arr;
	}


	public static int binarySearch(int[] arr, int val){
		int min = 0, max = arr.length -1;
		do{
	
			int mid =  (max + min) /2;

			if (mid > val){
				max = mid;
			}else if (mid < val){
				min = mid;
			}else{
				return mid;
			}
		}while(min <= max);

		return -1;
	}
}
