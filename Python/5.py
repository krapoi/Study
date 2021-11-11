import calendar
import random
import datetime

# 10/19

# Input String
# name = input('이름을 입력하세요 : ') #문자열 입력받기
# print("My name is", name) # , 콤마로 문자열 연결
# print("My name is" + name) # + 로 문자열 연결


# a=int(input('a='))
# b=int(input('b='))
#
# print('-' * 10)
# print('a+b =',a+b)
# print('a-b =',a-b)
# print('a*b =',a*b)
# print(f'a/b = {a/b}')
# print('-' * 10)


# def Hello():
#     print('Hello')
#     print('Hwang')


# Hello()

# def KIM(n):
#     print('Hello',n)

# KIM("KIM")

# def info(name, adress, phone):
#     print(f'내 이름 {name} 이다. 그리고 {adress} 에 산다. 내 번호는 {phone}이니까 전화해라.')
# info('나','서울 청와대','112')


# def singer(a,b,c):
#     print(f'내가 좋아하는 가수 : {a,b,c}')
# singer(input('1 = '),input('2 = '),input('3 = '))

# a,b = map(int,input().split())
# print(a+b)

# a = 5
# if a > 3:
#     print('3보다큼')
# elif a > 1 & a < 3:
#     print('1보다 크고 3 보다 작음')
# else:
#     print('1보다 작음')


# a,b = map(int, input().split())
# if a > b:
#     print(a,'가 더큼')
# else :
#     print(b,'가 더큼')

# a = int(input())
# if a >= 70:
#     print('best')
# elif a >= 50:
#     print('good')
# elif a >= 20:
#     print('nomal')
# else:
#     print('bad')

# arr = ['b','c','a','f','t','e']
# print(arr)
# arr.sort()
# print(arr)
# print(arr[0]) # 맨 앞 요소
# print(arr[-1]) # 맨 뒤 요소
#
# arr.reverse=True
# print(arr)

# score = [55,70,99,34,87]
# print(max(score))
# print(min(score))
# score.sort()
# print(score[-1])
# print(score[0])
#
# for i in range(10):
#     print(i, end=' ')
#
# for i in range(0, 10, 1): print(i)
#
# for i in range(100):
#     if (i % 2 != 0):
#         print(i, end=' ')










# 10/21

# d = datetime.datetime.now()
# print(calendar.month(d.year,d.month))

# arr = list()
# print(arr)
#
# for i in range(6):
#     arr.append(random.randint(1,46))
#
# print(arr)
# arr.sort()
# print(arr)
# print(arr[-2])

# li = []
# li.append("BTS")
# li.append("Black Pink")
# print(li)
# print(li[1])
#
#
# for _ in range(0,3,1):
#     li.append(input("가수이름을 쓰세요 : "))
#
# print('-' * 20)
# print(li)
# print(f'리스트 개수 {len(li)}개 입니다.')

# num = int(input('자연수 입력 : '))
# fac = 1
#
# for i in range(1,num +1,1):
#     fac = fac * i
# print(f'{num} factorial is {fac}.')


# ar1='오늘도 행복하세요'
# ar2='폭염 주의하세여'
# ar3='오늘 로또를 사세요'
# ar4='당신은 천재에요'
# ar5='영화 무료 쿠폰을 보내드립니다.'
# print(':::오늘의 운세:::')
# input('엔터를 누르면 시작됩니다.')
# c=random.randint(1,5)
# if c==1:
#     d=ar1
# elif c==2:
#     d=ar2
# elif c==3:
#     d=ar3
# elif c==4 : d=ar4
# else: d=ar5
# print('---------------------------')
# print(d)
# print('---------------------------')

# nation = {'한국' : '서울', '미국' : '워싱턴D.C.','일본' :'도쿄' }
# n= input('나라 이름 입력 : ')
# print(f'nation = {nation[n]}')


Kpop={'BTS' : '암튼 유명함', '블랙핑크' : '얘도 유명함'}
name = input('좋아하는 K pop 가수 이름을 적으시오 : ')
print(Kpop[name])