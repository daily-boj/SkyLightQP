import java.lang.StringBuilder

fun main() {
    while (true) {
        val input = readLine()!!
        val temp = input.replace("R", "").split("C");
        val R = temp[0].toInt()
        var C = temp[1].toInt()

        if (R == 0 && C == 0) break

        val builder = StringBuilder()

        while (C != 0) {
            builder.append((((--C) % 26) + 65).toChar())
            C /= 26
        }

        builder.reverse()

        print(builder.toString())
        println(R)
    }
}