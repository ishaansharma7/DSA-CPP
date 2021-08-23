# all possible ways to construct

def recursion(word: str, bank: list, memo: dict = {}):
    if word in memo:
        return memo[word]
    if word == '':
        return [[]]
    result = []
    for each in bank:
        if each in word:
            if word.index(each) == 0:
                suffix = word[len(each):]
                suffix_ways = recursion(suffix, bank, memo)
                word_ways = [ [each]+i for i in suffix_ways]
                for every in word_ways:
                    result.append(every)
    memo[word] = result
    return result

res = recursion('enterapotentpot', ['a','p','ent','enter','ot','o','t'])
print(res)
res = recursion('skateboard', ['bo','rd','ate','t','ska','sk','boar'])
print(res)
res = recursion('eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef', ['e','ee','eee','eeeee','eeeeee'])
print(res)