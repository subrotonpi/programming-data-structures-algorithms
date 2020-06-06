/**
 * labdemo06june
 */
public class labdemo06june {

    public static void main(String[] args) {
        //searching
        int [] numbers = {9, -23, 20, 44, 26, 33};//new int[5];
        int key = 9; //best case : O(1), worst case/average case = O(n) // N/2 = 0.5*N
        int ind = linear_search(numbers, key);
        System.out.println("\nindex= "+ ind );
        //found or not found
    }
    //if found return index otherwise -1
    public static int linear_search(int [] num, int k) {
     int index = -1;
     int counter = 0;
     while(counter<num.length){
        if(num[counter]==k){
            index=counter;
        }
        counter++;
     }
     return index;
    }

    //https://www.cs.usfca.edu/~galles/visualization/Search.html
    //https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/tutorial/#:~:text=Time%20complexity%20of%20an%20algorithm,the%20length%20of%20the%20input.

}