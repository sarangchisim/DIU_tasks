class InsufficientFundsError(Exception):
    def __init__(self, message="Withdrawal would reduce balance below the minimum allowed."):
        self.message = message
        super().__init__(self.message)

class BankAccount:
    def __init__(self, balance, min_balance):
        self.balance = balance
        self.min_balance = min_balance

    def withdraw(self, amount):
        if self.balance - amount < self.min_balance:
            raise InsufficientFundsError(
                f"Insufficient funds: Attempt to withdraw {amount} with balance {self.balance}, "
                f"leaving less than the minimum balance {self.min_balance}."
            )
        self.balance -= amount
        print(f"Withdrawal successful! New balance: {self.balance}")

    def display_balance(self):
        """Display the current account balance."""
        print(f"Current balance: {self.balance}")


##test
if __name__ == "__main__":
    account = BankAccount(balance=1000, min_balance=500)

    account.display_balance()

    try:
        account.withdraw(400)
        account.display_balance()

        ##invalid withdrawal test
        account.withdraw(200)  ##this will give error
    except InsufficientFundsError as e:
        print(f"Error: {e}")
