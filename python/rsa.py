# python program to encrypt a string with RSA encryption, with a predefined public/private key
import math

word = int(input("Enter a number: "))
x = 915203
y = 972623
n = x * y
e = 875624
def rsa(word, n, e):
    # this begins the process for finding e, for the first iteration of the program we will have a set value e
    # calculating the totient of the numbers
    # totient = (x-1) * (y-1)
    # # find a number relatively prime to x * y
    # x = 75
    # val = false
    # while (!val):
    #     if gcd(x,n) == 1:
    #         val = true
    #     x++
    # # this x is the tot END
    cipher_text = (word**e) % n
    return cipher_text

cipher = rsa(word, n, e)
print(cipher)

