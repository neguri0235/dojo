import sys

c_person = 0
m_person = 0

for _ in range(4):
    a,b = map(int, sys.stdin.readline().split())
    c_person = c_person - a + b
    m_person = max(c_person,m_person)
print(m_person)