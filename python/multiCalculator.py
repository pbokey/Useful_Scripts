testWeight = 48
testScore = int(input("What is the average of your 3 tests? "))

quizWeight = 16
quizScore = int(input("What is the average of your quizzes? "))

homeworkWeight = 10
homeworkScore = int(input("What is the average of your homework? "))

finalWeight = 26
finalScore = int(input("What is your grade/projected grade on final? "))

t_raw = testScore * (testWeight/100)
q_raw = quizScore * (quizWeight/100)
h_raw = homeworkScore * (homeworkWeight/100)
f_raw = finalScore * (finalWeight/100)

grade = t_raw + q_raw + h_raw + f_raw
print(grade)
