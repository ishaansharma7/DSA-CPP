def recursion(target_sum, vec: list):
    if target_sum == 0:
        return []
    if target_sum < 0:
        return None
    shortest_combination = None
    for each in vec:
        rem = target_sum - each
        remainder_combination = recursion(rem, vec)
        if remainder_combination != None:
            combination = remainder_combination + [each]
            if shortest_combination == None or len(combination) < len(shortest_combination):
                shortest_combination = combination
    return shortest_combination


if __name__ == '__main__':
    target_sum = int(input('Enter the target sum: '))
    size = int(input('Enter size of array: '))
    vector = []
    print('Enter elements one by one')
    for i in range(size):
        vector.append(int(input()))
    print(recursion(target_sum, vector))