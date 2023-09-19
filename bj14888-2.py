import sys
input = sys.stdin.readline

N = int(input())
l = list(map(int, input().split()))
oper_cnt = list(map(int, input().split()))
op = ['+', '-', '*', '/']
INF = int(1e9)

mn = INF
mx = - INF

def calculate(a, oper, b):
    if oper == '+':
        return a + b
    elif oper == '-':
        return a - b
    elif oper == '*':
        return a * b
    else:
        if a < 0:
            return - ((-a) // b)
        return a // b
def dfs(stack:list, depth, op_cnt):
    global mn, mx
    if len(stack) == 3:
        num1 = stack.pop()
        cal = stack.pop()
        num2 = stack.pop()
        stack.append(calculate(num2, cal, num1))
    
    if depth == N:
        if stack[0] > mx:
            mx = stack[0]
        if stack[0] < mn:
            mn = stack[0]
        return
    
    for i in range(4):
        stack_tmp = stack[:]
        op_tmp = op_cnt[:]
        if op_tmp[i] != 0:
            op_tmp[i] -= 1
            stack_tmp.append(op[i])
            stack_tmp.append(l[depth])
            dfs(stack_tmp, depth+1, op_tmp)

stack = [l[0]]
dfs(stack, 1, oper_cnt)
print(mx)
print(mn)