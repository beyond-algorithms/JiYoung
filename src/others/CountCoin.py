"""
미국에는 1 센트, 5 센트, 10 센트, 25 센트 50 센트 등 다섯가지 동전이 있습니다.
이 동전을 무한정 확보할 수 있다고 하면 이들의 조합으로 어떤 금액도 만들 수 있습니다.
특정 금액 m이 주어졌을 때 이 다섯가지 동전을 조합해서 주어진 금액을 만들 수 있는 경우의 수는 몇가지가 있을까요?
"""


def countCoin(coin, m):
    if m == 0:
        print(coin, m)
        return 1
    elif m < 0:
        return 0
    ret = 0
    ret += countCoin(50, m-50)
    ret += countCoin(25, m-25)
    ret += countCoin(10, m-10)
    ret += countCoin(5, m-5)
    ret += countCoin(1, m-1)

    return ret


def my_main(m):
    output = 0

    output += countCoin(0, m)

    print(output)



cents = [50, 25, 10, 5, 1]

def count2(amount):
    return count3(amount, 0);


def count3(amount, idx):
    if amount == 0:
        return 1;
    elif amount < 0 or idx >= len(cents):
        return 0
    else:
        return count3(amount - cents[idx], idx) + count3(amount, idx + 1);










my_main(10)

print(count2(10))