from dsu import *

sorted_edges = []

sum = 0
for u, n, w in sorted_edges:
  if (find(u) == find(n)) continue
  union(u, n)
  sum += w
