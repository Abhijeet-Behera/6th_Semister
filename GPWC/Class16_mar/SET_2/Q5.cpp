def factorial(n):
    """
    Calculates the factorial of a non-negative integer n.
    
    Args:
        n: A non-negative integer.
        
    Returns:
        The factorial of the number n.
    """
    if n < 0:
        return "Factorial is not defined for negative numbers"
    elif n == 0 or n == 1:
        return 1
    else:
        result = 1
        for i in range(1, n + 1):
            result *= i
        return result

# Main function to get user input and print the result
def main():
    try:
        # Read the value of n from user input
        n_str = input("Enter a non-negative integer: ")
        n = int(n_str)
        
        # Call the factorial function and print the result
        fact_result = factorial(n)
        print(f"The factorial of {n} is: {fact_result}")
        
    except ValueError:
        print("Invalid input. Please enter an integer.")

if __name__ == "__main__":
    main()

