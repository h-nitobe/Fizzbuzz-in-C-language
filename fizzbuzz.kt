fun main() {
	println("***** Hello kotlin! *****")
	
	for (num in 1..35) {
        print(
            when {
                num % 15 == 0 -> "FizzBuzz"
                num % 3 == 0 -> "Fizz"
                num % 5 == 0 -> "Buzz"
                else -> num
            }
        )
        print(" ")
    }

}
