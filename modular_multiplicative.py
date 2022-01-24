# In this we are going to see how to found
def modular_multiplicative_inverse(number, mod):
    # as range function upper bound is execlusive of number that why we add 1
    for i in range(1, mod+1):
        if (number*i) % mod == 1:
            return i
    # If not found then we return -1
    return -1


num = int(input())
mod = int(input())
print(modular_multiplicative_inverse(num, mod))
