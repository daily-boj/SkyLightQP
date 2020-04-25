import java.io.PrintStream

val choMap = mutableMapOf<String, Int>()
val jungMap = mutableMapOf<String, Int>()
val jongMap = mutableMapOf<String, Int>()

fun init() {
    val cho = arrayOf("ㄱ", "ㄲ", "ㄴ", "ㄷ", "ㄸ", "ㄹ", "ㅁ", "ㅂ", "ㅃ", "ㅅ", "ㅆ", "ㅇ", "ㅈ", "ㅉ", "ㅊ", "ㅋ", "ㅌ", "ㅍ", "ㅎ")
    val jung = arrayOf("ㅏ", "ㅐ", "ㅑ", "ㅒ", "ㅓ", "ㅔ", "ㅕ", "ㅖ", "ㅗ", "ㅘ", "ㅙ", "ㅚ", "ㅛ", "ㅜ", "ㅝ", "ㅞ", "ㅟ", "ㅠ", "ㅡ", "ㅢ", "ㅣ")
    val jong = arrayOf("ㄱ", "ㄲ", "ㄳ", "ㄴ", "ㄵ", "ㄶ", "ㄷ", "ㄹ", "ㄺ", "ㄻ", "ㄼ", "ㄽ", "ㄾ", "ㄿ", "ㅀ", "ㅁ", "ㅂ", "ㅄ", "ㅅ", "ㅆ", "ㅇ", "ㅈ", "ㅊ", "ㅋ", "ㅌ", "ㅍ", "ㅎ")
    cho.forEachIndexed { index, s -> choMap[s] = index }
    jung.forEachIndexed { index, s -> jungMap[s] = index }
    jong.forEachIndexed { index, s -> jongMap[s] = index+1 }
}

fun main() {
    init()

    val cho = readLine()
    val jung = readLine()
    val jong = readLine()

    val choIdx = if(choMap[cho] == null) 0 else choMap[cho]!!
    val jungIdx = if(jungMap[jung] == null) 0 else jungMap[jung]!!
    val jongIdx = if(jongMap[jong] == null) 0 else jongMap[jong]!!

    val result = ((choIdx * 21) + jungIdx) * 28 + jongIdx + 44032

    val pw = PrintStream(System.out, true, "UTF-8")
    pw.print(result.toChar())
    pw.close()
}