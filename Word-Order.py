from collections import Counter, OrderedDict

class OrderCounter(Counter, OrderedDict):
    pass
a = OrderCounter(input() for _ in range(int(input())))
print(len(a))
print(*a.values())
