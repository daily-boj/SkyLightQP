fun main() {
    var T = readLine()!!.toInt()
    while (T-- != 0) {
        val p = readLine().toString()
        val n = readLine()!!.toInt()
        var arr: List<String> = readLine()
                .toString()
                .replace("[", "")
                .replace("]", "")
                .split(",")

        var flag = false
        var revFlag = false

        p.forEach {
            if (it == 'R') {
                revFlag = !revFlag
            } else if (it == 'D') {
                if (arr.isEmpty()) {
                    flag = true
                    return@forEach
                }

                arr = if (revFlag) arr.dropLast(1) else arr.drop(1)
            }
        }

        if (flag || arr.isEmpty()) {
            println("error")
        } else {
            print("[")
            if (revFlag) {
                for (i in arr.size - 1 downTo 0) {
                    print(arr[i])
                    if (i == arr.size - 1) print(",")
                }
            } else {
                for (i in arr.indices) {
                    print(arr[i])
                    if (i != arr.size - 1) print(",")
                }
            }
            println("]")
        }
    }
}