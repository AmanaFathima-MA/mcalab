for i in range(1,21):
    if not i%3:
        print('fizz')
    elif not i%5:
        print('buzz')
    elif not i%3 and not i%5:
        print('fizzbuzz')
    else:
        print(i)