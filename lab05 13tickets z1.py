# cook your dish here
'''

                            Online Python Compiler.
                Code, Compile, Run and Debug python program online.
Write your code in this editor and press "Run" button to execute it.

'''
p = 1
for i in range(13, 100, 26): # Начинаем с 13, шаг 26 (каждое последующее нечётное кратное 13)
    p = p*i

print("Произведение двухзначных нечётных чисел, кратных 13:", p)