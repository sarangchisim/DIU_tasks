class BankAccount:
    def __init__(self, initial_balance=0):
        self.__balance = initial_balance

    def deposit(self, amount):
        ##Adds a specified amount to the account balance.
        if amount > 0:
            self.__balance += amount
            print(f"Deposited: ${amount:.2f}")
        else:
            print("Deposit amount must be positive.")

    def withdraw(self, amount):
        ##Subtracts a specified amount from the account balance, ensuring it does not go below zero....
        if amount > 0:
            if self.__balance >= amount:
                self.__balance -= amount
                print(f"Withdrew: ${amount:.2f}")
            else:
                print(f"Insufficient funds! Available balance: ${self.__balance:.2f}")
        else:
            print("Withdrawal amount must be positive.")

    def check_balance(self):
        """Returns the current account balance."""
        print(f"Current Balance: ${self.__balance:.2f}")
        return self.__balance

##Creating an account with an initial balance of $100
account = BankAccount(100)  

##Performing actions
account.deposit(50)       
account.withdraw(200)       
account.check_balance()     
