import java.util.Scanner;
public class AnagramPalindrome {
public static void main(String[] args)
{
Scanner reader = new Scanner(System.in);
String input = reader.nextLine();
if( checkPalindrome(input) )
System.out.println("YES");
else
System.out.println("NO");
}
public static boolean checkPalindrome(String input)
{
int [] count = new int[26];
for( int i = 0; i < input.length(); i++ )
{
char ch = input.charAt(i);
count[ch-'a']++;
}
int oddOccur = 0;
for( int cnt:count )
{
if( oddOccur > 1)
return false;
if( cnt%2 == 1 )
oddOccur++;
}
return true;
}
} 
