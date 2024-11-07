'''

                            Online Python Compiler.
                Code, Compile, Run and Debug python program online.
Write your code in this editor and press "Run" button to execute it.

'''

def orientation(p, q, r):
    # Вычисляем ориентированное произведение
    val = (q[1] - p[1]) * (r[0] - q[0]) - (q[0] - p[0]) * (r[1] - q[1])
    if val == 0:
        return 0  # Коллинеарные
    return 1 if val > 0 else 2  # 1 - по часовой стрелке, 2 - против часовой

def is_convex_quadrilateral(A, B, C, D):
    # Определяем ориентацию всех сторон
    o1 = orientation(A, B, C)
    o2 = orientation(B, C, D)
    o3 = orientation(C, D, A)
    o4 = orientation(D, A, B)

    # Проверяем, все ли ориентации одинаковые
    return (o1 == o2) and (o2 == o3) and (o3 == o4)

# Ввод координат точек от пользователя
def input_point(name):
    x = float(input(f"Введите координаты точки {name} (x, y): x = "))
    y = float(input(f"Введите координаты точки {name} (x, y): y = "))
    return (x, y)

A = input_point('A')
B = input_point('B')
C = input_point('C')
D = input_point('D')

if is_convex_quadrilateral(A, B, C, D):
    print("Точки образуют выпуклый четырехугольник.")
else:
    print("Точки не образуют выпуклый четырехугольник.")
