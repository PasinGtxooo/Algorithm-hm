def convert_to_balanced_binary_tree(arr):
    n = len(arr)
    
    if n == 0:
        return []
    
    root_index = n // 2
    root_value = arr[root_index]

    left_subtree = convert_to_balanced_binary_tree(arr[:root_index])
    right_subtree = convert_to_balanced_binary_tree(arr[root_index+1:])

    return [root_value] + left_subtree + right_subtree

A = [1, 2, 3, 4, 5, 6]
output = convert_to_balanced_binary_tree(A)
print(output)
