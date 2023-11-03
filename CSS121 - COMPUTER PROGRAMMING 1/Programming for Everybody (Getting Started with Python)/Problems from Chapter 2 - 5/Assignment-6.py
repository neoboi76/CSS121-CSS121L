import math
import string

def is_float(string):
      try:
         float(string)
         return True
      except ValueError:
         return False

def computepay(h, r):
      if h > 40:
         pay = (r * (h - 5.0)) + (h - 40.0) * r * 1.5
      else:
         pay = h * r
      return pay


while True:
   hours = input('Enter Hours: ')
   checkHrs = is_float(hours)
   if checkHrs == True:
      hrs = float(hours)
      break
   else:
      print('Not a number. Please try again.')


while True:
   rate = input('Enter rate per hour: ')
   checkRate = is_float(rate)
   if checkRate == True:
      rph = float(rate)
      break
   else:
      print('Not a number. Please try again.')

print('Pay', computepay(hrs, rph))
 

