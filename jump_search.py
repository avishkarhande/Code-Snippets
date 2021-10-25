import math

def jump_search(array, n, x):
    step = math.sqrt(n)
    prev = 0
    
    while array[int(min(step, n)-1)] < x:
        prev = step
        step += math.sqrt(n)
        if prev >= n:
            return False
    
    while array[int(prev)] < x:
        prev += 1
        if prev == min(step, n):
            return False
        
    if array[int(prev)] == x:
        return int(prev)
    
    return False

array = [x for x in range(0, 21)]
length = len(array)
search_element = 14

answer = jump_search(array, length, search_element)
print(answer)

# Output: 14    - index of search element