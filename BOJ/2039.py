array = []

# 9개의 숫자를 입력받아 배열에 저장
for i in range(0, 9):
    inp = int(input())
    array.append(inp)


for i in range(0, 8):
    for j in range(i + 1, 9):
        total = 0

        # 모든 숫자를 더하지만 i와 j번째 숫자는 제외
        for k in range(0, 9):
            if k != i and k != j:
                total += array[k]

        if total == 100:
            break

    if total == 100:
        break

array2=[]
for k in range(0, 9):
    if k != i and k != j:
        array2.append(array[k])

array2.sort()
for i in array2:
    print(i)
