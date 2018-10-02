def search_list(a,x):
    n = len(a)
    result = []

    for i in range(0,n):
        if x == a[i]:
            result.append(x)
    
    return result

def get_name(s_no, s_name, find_no):
    n = len(s_no)

    for i in range(0,n):
        if find_no == s_no[i]:
            return s_name[i]
    return "not found"

v = [17,32,56,42,32,76,41]

print (search_list(v,32))


sample_no = [39,14,67,105]
sample_name = ["justin","john","mike","summer"]

print(get_name(sample_no, sample_name,14))
print(get_name(sample_no, sample_name,105))
print(get_name(sample_no, sample_name,15))