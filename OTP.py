import random

otp=""
"""Here the otp is s string becoz if we take an integer data type 
suppose the otp is 0044 then due to int data type the value which otp will conatin is 44 not 0044.
thats the reason we have to take otp as a string not int/float"""

for  i in range(4):
    temp= str(random.randint(0,9))
    otp= otp+temp
    
print("Your OTP is ",otp)