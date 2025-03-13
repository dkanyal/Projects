def insertion_sort1(a):
    for i in range(1,len(a)):
        j=i
        while j>0 and a[j-1]>a[j]:
            a[j-1],a[j]=a[j],a[j-1]
            j-=1
    return a
