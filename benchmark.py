import random

import timeit
def additions():
    a = random.randint(0,2**31)
    b = random.randint(0,2**31)
    a+b

print(timeit.timeit(additions))
        
