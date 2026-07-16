/* Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: source = "abc", target = "ahbgdc"
Output: true

Example 2:

Input: source = "axc", target = "ahbgdc"
Output: false

 

Constraints:

    0 <= s.length <= 100
    0 <= t.length <= 104
    s and t consist only of lowercase English letters. 
    
    Rename the class with your NameSolution example : SairamSolution
    Save the class with your NameSolution.java example : SairamSolution.java
    Your solution must have only one loop AKA must be O(N) runtime in the worst case and O(1) should be the space complexity
    Solutions that run O(n^2) is acceptable.
    Only use lambda function to solve this problem.
    Use provided java tutorials to look at how to work with lambda functions.
    Use -> char[] charArray = originalString.toCharArray(); to convert a string to a char array
    THIS ASSIGNMENT SHOULD BE STRICTLY DONE IN A LINUX ENVIRONMENT USING NANO OR VIM
*/

import java.util.Scanner;

private interface Solution {
    public boolean isSubsequence(String source, String target);
}

public class <ReplaceThisWithYourFirstName>Solution {
    public static void main(String... args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Source String: ");
        String source = scanner.nextLine();
        System.out.println();
        System.out.print("Enter Target String: ");
        String target = scanner.nextLine();

        Solution s = <fill in the blanks using a lambda function. Solution must have only 1 loop running O(N) where N is the length of target>

        System.out.println(s.isSubsequence(source, target));

    }
}