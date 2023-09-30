def matrix_multiply(A,B):
    n=len(A)
    m=len(A[0])
    p=len(B[0])
    if m!=len(B):
        print("Matrix dimension are not compatible for multiplication.")
        return []
    C=[[0 for _ in range(p)] for _ in range(n)]
    for i in range(n):
        for j in range(p):
            for k in range(m):
                C[i][j]+=A[i][k]*B[k][j]
    return C
A=[[1,2,3],[4,5,6]]
B=[[7,8],[9,10],[11,12]]
result=matrix_multiply(A,B)
for row in result:
    print(row)