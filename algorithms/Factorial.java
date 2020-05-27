import java.util.Scanner;
public class Factorial{
    public static void main(String []args){
       Scanner sc =new Scanner(System.in);
       System.out.println("Enter a positive number");
       long n; //why the data type is long? why not int?
       do{
        n= sc.nextLong();
       }while(n<0); //taking input as long as user doesn't enter a number>=0

        System.out.println("\nCalculating factorial iteratively--\n");
        long f =iterative_facorial(n);
        System.out.println(f);
        System.out.println("\nCalculating factorial recursively--\n");
        f =recursive_factorial(n);
        System.out.println(f);
    }

    public static long recursive_factorial(long a){  
       if(a <=1) //base case
            return 1;
       else //recursive case
            return  a*recursive_factorial(a-1); //what if I had 'a--' or '--a' here? Would it work simillarly?
    }
    
    public static long iterative_facorial(long a){
        long i = a, fact=1;
        while(i>=1){
            fact *=i;
            i--;
        }
        return fact;
    }

}