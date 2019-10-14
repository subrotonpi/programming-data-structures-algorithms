//Accepts only when both condition is true.

int main(){
  int age, salary;
  scanf("%d%d",age,salary);
  
  if(age>=25){
      if(salary>=100000){
        printf("Accepted!");
      }else{
          printf("Rejected!");
      }
  }else{
      printf("Rejected!");
  }

  //equivalent code 
  /*
  if(age>=25 && salary>=100000){
     printf("Accepted!");
  }else{
     printf("Rejected!");
  }
  
  */

}

/*To do:
   ->How the code would change if we were to consider only one condition instead of two?
   -> When do we use if-elseif? 
   ->Solve the second one using switch-case statements.
*/
