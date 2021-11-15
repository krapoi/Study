class Plusforwhile {
}

fun main() {
    for(i in 0..12) {
        println(i)
    }
    var a = 0
    var b = 0
    while (a < 5){
        println("a = " + a++)
        println("b = " + ++b)
        println()

    }

    for(j in 0..12 step 3){ // 0 부터 12 까지 3씩 증가, for(int j = 0; j < 12; j+=3)
        println(j)
    }
    println()
    for(k in 9 downTo 0) // 9에서 0까지 감소
        println(k)
    println()
    for (c in 'a'..'z')
        print(c + " , ")

}