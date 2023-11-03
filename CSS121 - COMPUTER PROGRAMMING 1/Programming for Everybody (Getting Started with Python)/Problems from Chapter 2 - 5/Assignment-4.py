hours = input('Enter your hours: ')

try:
    hrs = float(hours)
except:
    print('Not A Number Try Again')
    hours = input('Enter your hours: ')
    hrs = float(hours)
    

rate = input('Enter your rate per hour: ')

try:
    rph = float(rate)
except:
    print('Not A Number. Try Again')
    rate = input('Enter your rate per hour: ')
    rph = float(rate)
    


if hrs > 40:
    pay = (rph * (hrs - 5.0)) + (hrs - 40.0) * rph * 1.5

else:
    pay = hrs * rph

print(pay)