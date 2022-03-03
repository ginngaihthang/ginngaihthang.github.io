# calculate tax based on food and bervage
def calculate_tax(food,ber,tax,service):
    fandbtotal=food + ber
    servicetotal=fandbtotal*service*0.01
    taxttotal=fandbtotal*tax*0.01
    grandTotal=fandbtotal+servicetotal+taxttotal
    return [fandbtotal,servicetotal,taxttotal,grandTotal]

def main():
    tax=calculate_tax(25000,5600,5,10)
    print(tax)
main()