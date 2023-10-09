import re

# This function calculates the space complexity of the given C/C++ code
def calculate_space_complexity(code: str) -> int:
    # Dictionary to store the size of each type of variable
    variable_size = {
        'int': 4,
        'float': 4,
        'double': 8,
        'char': 1,
    }
    
    # Regular expression pattern to match variable declarations
    pattern = re.compile(r'(int|float|double|char)\s+([a-zA-Z_][a-zA-Z0-9_]*)')
    
    # Find all variable declarations in the code
    matches = pattern.findall(code)
    
    # Calculate the total space complexity
    total_space = 0
    for match in matches:
        var_type, var_name = match
        total_space += variable_size[var_type]
    
    return total_space

# Test the function with a sample C/C++ code
sample_code = """
{
    int num1, num2, temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
"""

space_complexity = calculate_space_complexity(sample_code)
space_complexity
