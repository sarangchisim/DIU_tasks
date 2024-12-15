class Employee:
    def __init__(self, name, emp_id):
        self.name = name
        self.emp_id = emp_id

    def display_details(self):
        return f"Employee ID: {self.emp_id}, Name: {self.name}"


class PermanentEmployee(Employee):
    def __init__(self, name, emp_id, monthly_salary):
        super().__init__(name, emp_id)
        self.monthly_salary = monthly_salary

    def calculate_salary(self):
        return self.monthly_salary

class ContractEmployee(Employee):
    def __init__(self, name, emp_id, hourly_rate, hours_worked):
        super().__init__(name, emp_id)
        self.hourly_rate = hourly_rate
        self.hours_worked = hours_worked

    def calculate_salary(self):
        return self.hourly_rate * self.hours_worked


##test
if __name__ == "__main__":
    permanent_employee = PermanentEmployee("Sarang", 1764, 50000)
    print(permanent_employee.display_details())
    print(f"Monthly Salary: {permanent_employee.calculate_salary()}")

    contract_employee = ContractEmployee("Taufik", 1483, 200, 120)
    print(contract_employee.display_details())
    print(f"Calculated Salary: {contract_employee.calculate_salary()}")
