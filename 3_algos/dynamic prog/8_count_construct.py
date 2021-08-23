# number of all possible ways to construct

def recursion(word: str, bank: list, memo: dict = {}):
    if word in memo:
        return memo[word]
    if len(word) == 0:
        return 1
    mysum = 0
    for each in bank:
        if each in word:
            if word.index(each) == 0:
                mysum += recursion(word[len(each):], bank)
    memo[word] = mysum
    return mysum

res = recursion('enterapotentpot', ['a','p','ent','enter','ot','o','t'])
print(res)
res = recursion('skateboard', ['bo','rd','ate','t','ska','sk','boar'])
print(res)
res = recursion('eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef', ['e','ee','eee','eeeee','eeeeee'])
print(res)