# can a word be constructed from given words

def recursion(word: str, bank: list, memo: dict = {}):
    if word in memo:
        return memo[word]
    if len(word) == 0:
        return True
    
    for each in bank:
        if each in word:
            if word.index(each) == 0:
                suffix = word[len(each):]
                if recursion(suffix, bank, memo):
                    memo[word] = True
                    return True
    memo[word] = False
    return False

res = recursion('enterapotentpot', ['a','p','ent','enter','ot','o','t'])
print(res)
res = recursion('skateboard', ['bo','rd','ate','t','ska','sk','boar'])
print(res)
res = recursion('eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef', ['e','ee','eee','eeeee','eeeeee'])
print(res)
