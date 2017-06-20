import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    

    public static void main(String[] args)  {
        Scanner stdin = new Scanner(System.in);
		int lengthOfList= Integer.parseInt(stdin.nextLine());
		int[] input = new int[lengthOfList];
		for (int a = 0; a < lengthOfList; a++) {
			input[a] = stdin.nextInt();
		}
		int temp = input[lengthOfList-1];
		int a = lengthOfList - 2;
		while(a > -1 && a < lengthOfList && temp < input[a]){ //while position has not been found, we
			input[a+1] = input[a]; //shift the elements over
			for(int b = 0; b < lengthOfList; b++){ //print the list
				System.out.print(input[b] + " ");
			}
			System.out.println();
			a--; //iterate the variable.
		}
		input[a+1] = temp; //set in final position
		for(int b = 0; b < lengthOfList; b++){
			System.out.print(input[b] + " "); //print final list
		}
		System.out.println();
    }
    
}
