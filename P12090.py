ja = "ㄱㄲㄴㄷㄸㄹㅁㅂㅃㅅㅆㅇㅈㅉㅊㅋㅌㅍㅎ"

for i in input():
    print(ja[int((ord(i[0]) - 44032) / 588)], end='')
