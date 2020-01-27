
bills = [1,2,5,10,50]


def makeChange(bills, target, high, sol = []):

    if sum(sol) == target:
        print(sol)
        return

    if sum(sol) > target:
        return

    
    for bill in bills:

        if bill >= high:

            newSol = sol[:]
            newSol.append(bill)
            makeChange(bills,target, bill, newSol)

makeChange(bills, 6, bills[0])