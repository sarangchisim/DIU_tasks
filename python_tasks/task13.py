def divide_elements(values, divisor):
    results = []
    try:
        if not isinstance(divisor, (int, float)):
            raise TypeError("The divisor must be a numeric value.")

        for value in values:
            try:
                result = value / divisor
                results.append(result)
            except ZeroDivisionError:
                print("Error: Division by zero occurred for value:", value)
                results.append(None)  
    except TypeError as e:
        print(f"Error: {e}")
        return None

    return results


##test
if __name__ == "__main__":
    numbers = [10, 20, 30, 40]
    user_divisor = input("Enter a divisor: ")

    try:
        user_divisor = float(user_divisor)
        output = divide_elements(numbers, user_divisor)
        if output is not None:
            print("Results:", output)
    except ValueError:
        print("Error: Please enter a valid numeric divisor.")
