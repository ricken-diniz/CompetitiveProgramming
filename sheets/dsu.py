# O(1) DSU

par = [] # paterns of each set
sz = []  # size of each set

find(v):
"""
Find the element patern in a set
Assign to each element the set patern, in order to compress the set
"""
  if v == par[v]:
    return v

  par[v] = find(par[v])
  retrun par[v]

union(u, v):
"""
Merge two sets
"""
  v = find(v)
  u = find(u)
  if sz[v] > sz[u]:
    u, v = v, u
  par[v] = u
  sz[v] += sz[u]
