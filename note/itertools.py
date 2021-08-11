# 순열 계산을 위한 라이브러리

import itertools

data = [i for i in range(5)]

# 전체 순회
# next permutation
# 리턴되는 값은 tuple 형태
for a in itertools.permutations(data):
    print(a)

# prev permutation
data = [i for i in range(5, 0, -1)]
for a in itertools.permutations(data):
    print(a)

# 일부 값만 선택
for a in itertools.permutations(data, 3):
    print(a)

# 조합 combination