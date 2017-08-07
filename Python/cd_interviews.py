def matrix_find(a, key):
    col = len(a)
    row = len(a[1])
    x = 0
    y = row - 1
    while x < col and y >= 0:
        f = a[x][y]
        if key > f:
            x += 1
        elif key < f:
            y -= 1
        else:
            return True
    return False

def fibonacci_recursive(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    f = fibonacci_recursive(n-1) + fibonacci_recursive(n-2)
    return f

def fabonacci_iter(n):
    f1 = 0
    f2 = 1
    if n == 0:
        return f1
    if n == 1:
        return f2
    fn = 0
    for i in range(2, n+1):
        fn = f1 + f2
        f1 = f2
        f2 = fn
    return fn

def number_of_1(n):

    count = 0
    print bin(n)
    while n:
        count += 1
        n = n & (n-1)
    return count

def test_m_find(key):
    a =[
        [1, 2, 8, 9],
        [2, 4, 9, 12],
        [4, 7, 10, 13],
        [6, 8, 11, 15]
    ]
    print matrix_find(a, key)

if __name__ == '__main__':
    print number_of_1(2798)