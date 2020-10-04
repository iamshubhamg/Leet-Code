class intToromanConvertor:
    def __init__(self,a):
        self.number = a
        self.int_to_Roman()

    def int_to_Roman(self): 
        num = [1, 4, 5, 9, 10, 40, 50, 90,100, 400, 500, 900, 1000] 
        sym = ["I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"] 
        i = 12
        while self.number: 
            div = self.number // num[i] 
            self.number %= num[i] 
            while div: 
                print(sym[i], end = "") 
                div -= 1
            i -= 1
num = intToromanConvertor(int(input()))
num.int_to_Roman()
