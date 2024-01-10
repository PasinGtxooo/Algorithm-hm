def maxSatisfaction(satisfaction):
    satisfaction.sort() 

    n = len(satisfaction)
    max_sum = 0
    current_sum = 0

    for i in range(n - 1, -1, -1):
        current_sum += satisfaction[i]
        max_sum += current_sum

    return max_sum

satisfaction1 = [-1, 0, 5, -7]
satisfaction2 = [2, 1, 4, -1]

result1 = maxSatisfaction(satisfaction1)
result2 = maxSatisfaction(satisfaction2)

print("", result1)
print("", result2)
