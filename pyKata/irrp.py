#!/usr/bin/python3

 

'''

Raspberry Pi IR 

2020-02-20 : default operation

'''

 

import time

import os

import subprocess

from random import *

import datetime

from datetime import timedelta

 

# python irrp.py -p -g17 -fir-codes 1

 

a1 = 'python'

a2 = 'irrp.py'

a3 = '-p'

a4 = '-g17'

a5 = '-fir-codes'

 

num_of_press = 0

 

 

def play(n):

    global num_of_press

    a6 = str(n)

    subprocess.run([a1, a2, a3, a4, a5, a6])

    num_of_press += 1

 

 

def cmd():

    while True:

        print("18 to 30 , 0 to quit")

        n = int(input())

        if n == 0:

            break

 

        play(n)

 

 

def loop():

    global num_of_press

 

    key = 18

    default_interval = 1.1

 

    forward = True

 

    while True:

 

        try:

 

            key = (key % 18) + 18

            play(key)

            # r = random()

            r = uniform(0.2, 0.4)

            interval = default_interval + r

            print('[{0}] button, {1:2f} interval'.format(key, interval))

            time.sleep(interval)

 

            if key >= 30:

                forward = False

 

            if key <= 18:

                forward = True

 

            if forward == True:

                key += 1

            else:

                key -= 1

 

        except KeyboardInterrupt:

            print()

            print('====================')

            print('====================')

            print('{0} times pressed'.format(num_of_press))

            return

 

 

if __name__ == "__main__":

    print("interactive(1) or loop(2) or quit(0)")

    c = int(input())

    if c == 0:

        print('bye !!!')

    elif c == 1:

        cmd()

    elif c == 2:

        loop()