import os
import requests
import slack
import socket
import time

def get_ip():
    with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as s:
        try:
            s.connect(('1.1.1.1', 1))
            IP = s.getsockname()[0]
        except Exception:
            IP = '127.0.0.1'
    return IP

print('testing connection')
for i in range(8):
    try:
        requests.get('https://google.com')
        print('connected')
        break
    except:
        print('not connected')
        time.sleep(2**i)

slack_token = 'xoxb-427849421186-3155871478097-b7Q2mg0iploNCXJA1V5rIi5n'
client = slack.WebClient(token=slack_token)
client.chat_postMessage(channel='raspberry-pi-ips', text='{} has ip {}'.format(socket.gethostname(), get_ip()))
print('posted')
