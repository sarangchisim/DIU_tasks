class Account:
    def __init__(self, balance):
        self.balance = balance

    def withdraw(self, amount):
        if self.balance < amount:
            raise Exception("Insufficient funds")
        self.balance -= amount
        return self.balance
    
    def checkRange(self, amount):
        if amount > 1000000:
            raise Exception("out of range balance")

account = Account(99999999999)
'''try:
    account.withdraw(9999999999999999999999999)
except InsufficientBalanceException as e:
    print(e)
else:
    print(account.balance)'''
    
##a test for checkRange if amount > 1000000 it will raise an exception
try:
    account.checkRange(1000000000000000000)
except Exception as e:
    print(e)
else:
    print("balance is ok")
    
