import java.util.*;
//import java.util.Scanner; 


public class Main
{
	public static void main(String[] args) {
	    
	   char operator;
       Double number1, number2, result;
    
        Scanner input=new Scanner(System.in);
	   
	   System.out.println("Choose an operator: +, -, *, %, or /");
        operator = input.next().charAt(0);
        
	   System.out.println("Enter  number1");
        number1 = input.nextDouble();
        
	   System.out.println("Enter number2");
        number2 = input.nextDouble();
        
        
	    switch(operator){
	        case '+' : result= number1 + number2;
	            System.out.println(result);
	        break;
	        
	        case '-' : result= number1 - number2;
	            System.out.println(result);
	        break;
	        
	        case '*' : result = number2 * number1;
	            System.out.println(result);
	        break;
	        
	        case '/' :result = number1 / number2;
	            if (number2==0){
	                System.out.println("Not divide by 0");
	            }else{
	                System.out.println(result);
	            }
	            
	        case '%' : result = number1 % number2;
	            System.out.println(result);
	        break;
	        default:System.out.println("invalid operator");
	            
	    }
	              
	        
	  
 }
}
