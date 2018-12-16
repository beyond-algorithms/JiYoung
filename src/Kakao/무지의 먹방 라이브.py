def solution(food_times, k):
    answer = 0
    index = 0
    for i in range(k):
        while (food_times[index] != 0):
            index += 1
        food_times[index] = food_times[index] - 1
    return answer