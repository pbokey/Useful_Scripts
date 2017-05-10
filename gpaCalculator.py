#this calculates the GPA for your classes at Georgia Tech
def gradeCalculator():
    x = int(input("How many classes are you taking this semester?: "))
    # credit = [4, 3, 3, 2]
    # grades = ['a', 'a', 'a', 'a']
    for x in range(x):
        credit.append(int(input("How many credits is Class " + str(x+1) + "?: ")))
        grades.append(input("What is your grade in Class " + str(x+1) + "?(enter a-f): "))
    credits = 0.0
    creditHours = 0.0
    for value in credit:
        creditHours += value
    for x in range(len(credit)):
        if grades[x] == 'a':
            credits += 4.0*credit[x]
        elif grades[x] == 'b':
            credits += 3.0*credit[x]
        elif grades[x] == 'c':
            credits += 2.0*credit[x]
        elif grades[x] == 'd':
            credits += 1.0*credit[x]
        else:
            credits += 0.0
    totalGPA = credits/creditHours
    return round(totalGPA,3)

x = gradeCalculator()
print(x)