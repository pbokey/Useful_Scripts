# this function will take in a string and then find the anagrams of that string
from itertools import permutations
import enchant

string = input("Enter a word/phrase: ")

perms = [''.join(p) for p in permutations(string)]
r_perm = []
dic = enchant.Dict('en_US')
for perm in perms:
    if dic.check(perm):
        r_perm.append(perm)
t = set(r_perm)
for rp in t:
    print(rp)


