class Employee:
    empCount = 0
    def __init__(self,Name,Salary):
        self.Name = Name
        self.Salary = Salary
        Employee.empCount +=1
    def displayCount(self):
        print("Total Employee: %d " %Employee.empCount)
    def displayEmployee(self):
        print("Name:",self.Name,"Salary:",self.Salary)
Employee1 = Employee("Samrat",50000)
Employee2 = Employee("Shubham",10000)
Employee1.displayEmployee()
Employee1.displayCount()