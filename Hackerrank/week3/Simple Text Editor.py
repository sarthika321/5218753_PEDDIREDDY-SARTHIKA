# Enter your code here. Read input from STDIN. Print output to STDOUT
def simpleTextEditor(operations):
    s=[]
    stack=[]
    r=[]
    
    for op in operations:
        parts=op.split()
        type_op=int(parts[0])
        
        if type_op==1:
            stack.append("".join(s))
            s.extend(parts[1])
        elif type_op==2:
            k=int(parts[1])
            stack.append("".join(s))
            s=s[:-k]
        elif type_op==3:
            k=int(parts[1])
            r.append(s[k-1])
        elif type_op==4:
            if stack:
                s=list(stack.pop())
    return r
if __name__=="__main__":
    q=int(input())
    operations=[input().strip() for _ in range(q)]
    result=simpleTextEditor(operations)
    print("\n".join(result))
    
