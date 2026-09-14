temp: int = -20
temp = "cold"
try: 
    print("-20" + 1)
except TypeError as e: 
    print("TypeError:", e)
print(-20 + True)
