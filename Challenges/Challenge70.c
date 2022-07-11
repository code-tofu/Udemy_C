/* 
Challenge 70:

- Find the greatest common disivor of two non-negative integer values and returns the results
- check for negative integer
- GCD: takes two ints as parameters

- calcaulate the absolve value of a number, should take as a parameter a float and return a float

- write a function to computer the square root of a number
- if a negative argumenet is passed then a messagae is dispalyed and -1.0 should be returned
should use absolute value function?
*/

#include <stdio.h>

// function prototypes defined in preprocessor. dont forget the semicolon
float absolute (float x);
int gcd (int x, int y);
float squareroot (float x);


int main(){
    
    float f = 0.0;
    int x = 0, y = 0;
    printf("input two positive integers:");
    scanf("%d %d",&x, &y);
    printf("GCD: %d",gcd(x,y));
    return 0;
}


//def function greatestCommonDenominator
// don't have to use recursion if you can use loops
int gcd (int x, int y){
    int temp = 0;
    if (x < 0 | y < 0)
    {
        printf("please input a positive number");
        return(-1);
    }

//using the euclidiean method
    while( y !=0 ){

        temp = x % y;
        x = y;
        y = temp;

    }
       
    return x;
}


// def function absolute
float absolute(float x){
    if (x<0)
    {
        x = x * (-1); //you can use x=-x
    }  
    return x;
}


float squareroot (){
    const float error = 0.00001;
    float guess = 1.0;
    float returnx = 0.0; //use return values to have only one return statement

    if (x < 0)
    {
        printf("please input a positive number");
        returnx = -1);
    }
    else
    {
        while ( absolute (guess * guess - x) >= error)
        {
            guess = (x / guess + guess)/2.0;
        }  
        returnx = guess;
    }
    return returnx;
}

/* NOTES:
When scanning a char into float, it is converted into 0.
Note, if else code blocks do not need semicolon after the brackets
dont'forget to initialise when declaring
when testing code you can hard code the test cases instead of using scanf
*/
