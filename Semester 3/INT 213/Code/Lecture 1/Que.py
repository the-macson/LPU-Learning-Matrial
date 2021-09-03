num1 = int(input('enter the number : '))
num2 = int(input('enter the number : '))
num3 = int(input('enter the number : '))
num4 = int(input('enter the number : '))
if num1 > num2 and num1 > num3 and num1 > num4:
    print('largest number is ',num1)
elif num2 > num3 and num2 > num4:
    print('Largest number is ',num2)
elif num3 > num4:
    print('Largest number is ',num3)
else:
    print('Largest number is ',num4)
   