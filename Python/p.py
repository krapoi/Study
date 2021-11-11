from collections import deque


print(ord('a'))
print(ord('A'))

print(chr(99))

for i in range(97,123):
    print(chr(i),end='')
print()
for i in range(0,26):
    print(chr(ord('a') + i),end='')


n=20
print(hex(n))

n=str(hex(n))
print(n.zfill(10))

n1=str(30)
print(n1.zfill(10))

n2='hello'
print(n2.zfill(10))


Group = {}

print("### K-Pop 그룹 관리 프로그램 ##")

while True:
    menu = int(input('[1.등록 / 2.삭제 / 3.조회 / 종료] :'))
    if menu == 4:
        break
    elif menu == 1:
        name = input('그룹 이름이 무엇인가')
        member = input('그룹 인원이 몇명인가')
        Group[name] = member;
    elif menu == 2:
        dekete = input('삭제할 그룹 이름')
        del(Group[dekete])
    elif menu == 3:
        print(Group)

print('### K-Pop 관리 프로그램 종료 ###')




sum=0
for i in range(1010):
    sum+=i
print("sum :{}".format(sum))
print("%d" % sum)


queue=deque()
queue.append(1)
queue.append(2)
queue.append(3)
print(queue)
print(queue.popleft())
print(queue.popleft())
print(queue.popleft())
print(queue)



queue=deque()
queue.append(1)
queue.append(2)
queue.append(3)
print(queue)
print(queue.popleft())
print(queue.popleft())
print(queue)
queue.append(11)
queue.append(22)
queue.append(33)
print(queue)
queue.reverse()
print(queue)



stack=[]
stack.append(5)
stack.append(3)
stack.append(8)
stack.append(6)
stack.append(4)
stack.pop()
stack.append(1)
stack.pop()
print(stack)
print(stack[0])
print(stack[::-1])
print('stack pop', stack.pop())
print('stack pop', stack.pop())
print('stack pop', stack.pop())
print('stack pop', stack.pop())




def f_iter(n):
    r=1
    for i in range(1,n+1):
        r*=i
    return r

def f_rec(n):
    if n<=1:        return 1
    else:
        return n*f_rec(n-1)

print(f_iter(5))
print(f_rec(5))

