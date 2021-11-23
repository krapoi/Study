class `1~n` {
}


fun main(args: Array<String>) {
    val input = readLine()
    val s = Integer.parseInt(input)
    var sum = 0
    for(i in 0..s-1){
        sum += i
    }
    print(sum)
}

