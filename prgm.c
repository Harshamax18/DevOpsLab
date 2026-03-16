def simple_stack():
    stack = []

  
    print("Pushing elements: 10, 20, 30")
    stack.append(10)
    stack.append(20)
    stack.append(30)
    
    print(f"Current Stack: {stack}")


        print(f"Top element is: {stack[-1]}")


    print(f"Popped element: {stack.pop()}")
    print(f"Popped element: {stack.pop()}")

    print(f"Final Stack: {stack}")

if __name__ == "__main__":
    simple_stack()
