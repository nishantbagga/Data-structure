import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    int n;
    Scanner obj = new Scanner(System.in);
    n = obj.nextInt();
    //int ans = fib(n);
   // System.out.print(ans);
    
    
    //through memoization
    int dp[] = new int[n+1];
    for(int i=0;i<n;i++)
    {
        dp[i]=-1;
    }
    
    //through tabulization
    
    
    
    int ans = fib(n,dp);
   // System.out.print(ans);
    
    
    int tab = tabu(n,dp);
    System.out.print(tab);
    
 }
 
 
 static int fib(int n , int []dp)
 {
     if(n==0||n==1)
     return n;
     
     
     if(dp[n-1]!=-1)
     return dp[n-1];
     
     int x = fib(n-1,dp);
     int y = fib(n-2,dp);
     
     dp[n-1] =x+y;
     
     return dp[n-1];
    
 }
 
 static int tabu(int n , int []dp)
{
    dp[0]=0;
    dp[1]=1;
    
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    
    return dp[n];
    
    
}
}
