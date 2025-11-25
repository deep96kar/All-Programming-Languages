class Employee: 
    language = "Python" # This is a class attribute
    salary = 1200000


deep = Employee()
deep.language = "JavaScript" # This is an instance attribute
print(deep.language, deep.salary)
 