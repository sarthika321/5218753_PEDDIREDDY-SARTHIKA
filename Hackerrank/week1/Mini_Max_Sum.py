#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # Write your code here
    total = sum(arr)
    min_value = total - max(arr)
    max_value = total - min(arr)
    print(f"{min_value} {max_value}")

if _name_ == '_main_':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
