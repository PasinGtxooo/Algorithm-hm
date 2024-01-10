def custom_sort(str, order):
    order_set = set(order)
    
    def custom_key(char):
        return (order.index(char) if char in order_set else float('inf'), char)
    
    return ''.join(sorted(str, key=custom_key))

order = "cba"
str_to_sort = "abcd"
result = custom_sort(str_to_sort, order)

print("ans", result)
