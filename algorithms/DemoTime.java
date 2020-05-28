//package algorithms;

public class DemoTime {
  public static void main(String[] args) {
      int i, j, n_times=3;
      int execution_counter=0;
      System.out.println("--------------------------");
      
      for(i=1;i<=n_times;i++){//for every execution of this outer loop inner loop will run for n_times
          System.out.print("\nOuter loop "+i+"\nInner loop:");
          for(j=1;j<=n_times;j++){ // this loop executes for n_times
            System.out.print(" "+j+" ");//will see how many times these statement is executed
            execution_counter++;
          }
          System.out.println();
        }    
        System.out.println("--------------------------");
        System.out.println("execution_counter: "+execution_counter);
    }
}