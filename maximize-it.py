# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import product

n, m = map(int, input().split())
p = (list(map(int, input().split())) [1:] for _ in range(n))
result = map(lambda x: sum(i ** 2 for i in x) % m, product(*p))
print(max(result))
