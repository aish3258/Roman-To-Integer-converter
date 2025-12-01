/*
3. Greedy algorithm idea

The algorithm is:

Start with your number, e.g. num = 1994.

Start from the largest value (1000 → "M").

While num is at least that value:

append that Roman symbol to your answer

subtract that value from num

Move to the next smaller value and repeat until num becomes 0.

Example: 1994

Start: num = 1994, result = ""

Check 1000 (M):

1994 ≥ 1000 → result = "M", num = 994

Check 900 (CM):

994 ≥ 900 → result = "MCM", num = 94

Check 500 (D):

94 < 500 → skip

Check 400 (CD):

94 < 400 → skip

Check 100 (C):

94 < 100 → skip

Check 90 (XC):

94 ≥ 90 → result = "MCMXC", num = 4

Check 50 (L):

4 < 50 → skip

Check 40 (XL):

4 < 40 → skip

Check 10 (X):

4 < 10 → skip

Check 9 (IX):

4 < 9 → skip

Check 5 (V):

4 < 5 → skip

Check 4 (IV):

4 ≥ 4 → result = "MCMXCIV", num = 0

Now num == 0, you’re done. Output "MCMXCIV".

4. How to turn this into code (without giving full code)

Language-agnostic idea:

Create arrays/lists:

values = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]

symbols = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]

Make a function, e.g.:

In C: char* intToRoman(int num)

In Python: def int_to_roman(num):

Inside the function:

Check range: if num < 1 or num > 3999 → handle error.

Have an empty string/buffer result.

Loop i from 0 to last index of values:

While num >= values[i]:

add symbols[i] to result

do num -= values[i]

When the loop ends, return/print result.
*/

#include<stdio.h>

int main()
{
    char *symbol[]= {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I","\0"};
    int value[]= {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    int size,num,i=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    if(num< 1 || num >3999)
        printf("Roman value of these integer number cant be found..!!");
    else
    {
        size=sizeof(value)/sizeof(value[0]);
        printf("Roman value of %d is ",num);
        for(i=0;i < size;i++)
        {
            while(num >= value[i])
            {
                printf("%s",symbol[i]);
                num -= value[i];
                if(num ==0)
                    break;
            }
        }
    }
    return 0;
}