n = int(input())

heap = [None]
idx = 0

def pop():
    if len(heap) == 1:
        return 0
    
    heap[1], heap[-1] = heap[-1], heap[1]

    res = heap.pop()
    t = len(heap) - 1

    parent_t = 1
    left_child = parent_t * 2
    right_child = parent_t * 2 + 1

    while (2*parent_t + 1 <= t) & (heap[parent_t] > max(heap[left_child], heap[right_child])):
        if heap[parent_t] > heap[left_child]:
            heap[parent_t], heap[left_child] = heap[left_child], heap[parent_t]
            parent_t = left_child
        elif heap[parent_t] > heap[right_child]:
            heap[parent_t], heap[right_child] = heap[right_child], heap[parent_t]
            parent_t = right_child
    return res


def push(num):
    heap.append(num)
    t = len(heap) - 1

    if t == 1:
        return
    
    parent_t = t // 2
    while (t>=2) and (heap[parent_t] > heap[t]):
        heap[parent_t], heap[t] = heap[t], heap[parent_t]
        t = parent_t




for _ in range(n):
    num = int(input())

    if num == 0:
        print(pop())
    else:
        push(num)
    # print(heap)