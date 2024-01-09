import sys

input = sys.stdin.readline
print = sys.stdout.write

n = int(input())
array = set()  # 중복을 허용하지 않는 set 자료형 사용

for i in range(n):
    a = input().rstrip().split()
    command = a[0]

    if command == 'all':
        array = set(range(1, 21))
    elif command == 'empty':
        array = set()
    else:
        number = int(a[1])

        if command == "add":
            array.add(number)
        elif command == "check":
            if number in array:
                print('1\n')
            else:
                print('0\n')
        elif command == "remove":
            if number in array:
                array.remove(number)
        elif command == "toggle":
            if number in array:
                array.remove(number)
            else:
                array.add(number)
