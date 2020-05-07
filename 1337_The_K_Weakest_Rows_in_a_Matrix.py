def kWeakestRows(m, k):
    d = {}
    i = 0
    for el in m:
        s = sum(el)
        d[i] = s
        i += 1

    sl = sorted([(value, key) for key, value in d.items()])[1]
    key_lg = [el[1] for el in sl]
    
    return sl[:k]