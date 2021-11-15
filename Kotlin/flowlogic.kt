class Human(var name:String, var age:Int){
    fun say(){
        println("이름 : $name, 나이 : $age")
    }

}
fun main() {
    val a = Human("abc",16)
    a.say()
   a@for(i in 1..10){
        for(j in 1..2){
            if(i == 2 && j == 2) break@a
            println(i)

        }
    }
}