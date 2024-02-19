# Write a program numbers.cpp that defines a function
# bool isDivisibleBy(int n, int d);
# If n is divisible by d, the function should return true, otherwise return false.

def isDivisibleBy(n, m):

    if  m == 0:
        return False
    
    if n % m == 0:
        return True
    
    else:
        return False
    

def main():

    num_1 = int(input("Enter the first number: "))
    num_2 = int(input("Enter the second number: "))

    print(isDivisibleBy(num_1, num_2))

main()


