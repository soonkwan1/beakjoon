import copy
from collections import deque
import sys
input = sys.stdin.readline

result = []
INF = int(1e9)
def data_input():
    N = int(input())
    l = list(map(int, input().split()))
    num = list(map(int, input().split()))
    op = {
        0 : '+',
        1 : '-',
        2 : '*',
        3 : '/'
    }
    oper = []
    idx = 0
    for i in num:
        for _ in range(i):
            oper.append(op[idx])
        idx += 1
    return l, oper
def dfs(line:list, l, oper, num_cnt, op_cnt:list, total):
    global result
    line.append(l[num_cnt])

    if len(line) == total:
        tmp = line[:]
        # if tmp not in result:
        #     result.append(tmp)
        result.append(tmp)
        return

    for i in range(len(oper)):
        if i not in op_cnt:
            op_cnt.append(i)
            line.append(oper[i])
            dfs(line, l, oper, num_cnt+1, op_cnt, total)
            line.pop()
            line.pop()
            op_cnt.pop()
def cal():
    minimum = INF
    maximum = -INF

    for i in range(len(result)):
        line = result[i]
        stack = deque(line)
        
        while len(stack) != 1:
            num1 = stack.popleft()
            oper = stack.popleft()
            num2 = stack.popleft()
            if oper == '+':
                tmp = num1 + num2
            elif oper == '-':
                tmp = num1 - num2
            elif oper == '*':
                tmp = num1 * num2
            elif oper == '/':
                if num1 < 0:
                    tmp = -((-num1) // num2)
                else:
                    tmp = num1 // num2
            stack.appendleft(tmp)
        res = stack.pop()
        
        if res > maximum:
            maximum = res
        if res < minimum:
            minimum = res
    return maximum, minimum
def main():
    l, oper = data_input()
    total_length = len(l) + len(oper)

    dfs([], l, oper, 0, [], total_length)
    r1, r2 = cal()
    print(r1)
    print(r2)
if __name__ == "__main__":
    main()

'''
3
3 4 5
1 0 1 0

6
1 2 3 4 5 6
2 1 1 1
'''