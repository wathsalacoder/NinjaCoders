import random 
import requests

r = requests.get('https://www.oneteksl.com')

print(r.cookies)