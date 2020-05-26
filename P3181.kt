fun main() {
    val S = readLine().toString()
    val s = S.split(' ')

    print(s[0][0].toUpperCase())

    for(i in 1 until s.size) {
        if(s[i] == "i" ||
                s[i] == "pa" ||
                s[i] == "te" ||
                s[i] == "ni" ||
                s[i] == "niti" ||
                s[i] == "a" ||
                s[i] == "ali" ||
                s[i] == "nego" ||
                s[i] == "no" ||
                s[i] == "ili") {
            continue
        }

        print(s[i][0].toUpperCase())
    }
}