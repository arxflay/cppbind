from operators.counter_pygen import Counter

# [counter - usage]
counter1 = Counter(1)
counter2 = Counter(2)
counter = counter1 + counter2
assert counter.count == 3
assert counter1 < counter2
assert counter2 > counter1
counter1 += counter2
assert counter1.count == 3
# [counter - usage]
