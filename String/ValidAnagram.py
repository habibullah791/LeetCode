def isAnagram(s, t):

    # Solution 1
    # return Counter(s) == Counter(t)

    # Solution 2 
    # return sorted(t) == sorted(s)

    # Solution 3
    if len(s) != len(t):
        return False

    countS, countT = {}, {}

    for char in range(len(s)):
        countS[s[char]] = 1 + countS.get(s[char], 0)
        countT[t[char]] = 1 + countT.get(t[char], 0)
    
    for char in countS:
        if countS != countT:
            return False
    return True


isValid = isAnagram("anagram", "nagaram")
if isValid:
    print("Is Valid Anagram")
else:
    print("Not Valid Anagram")
