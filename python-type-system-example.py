class Landmark:
    def report(self): return "?"

class Peak(Landmark):
    def __init__(self, name, m): 
        self.name, self.m = name, m
    def report(self): 
        return f"{self.name} {self.m}m"

class Glacier:
    def report(self): return "Baltoro 4000m"

def announce(l): print(l.report())

temp: int = -20
temp = "cold"
try: 
    print("-20" + 1)
except TypeError as e: 
    print("TypeError:", e)
print(-20 + True)

gear = ["rope"]
partner = gear
partner.append("axe")
print(len(gear), len(partner))

k2 = Peak("K2", 8611)
announce(k2); 
announce(Glacier())
print(k2.m / 4, k2.m // 4)
print(2 ** 70)
