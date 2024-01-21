#! /usr/bin/awk -f
#
#       @file           fizzbuzz.awk
#       @brief          awk で FizzBuzz
#       @author         新渡戸広明
#       @date           2024/01/21
#       @details        chmod +x fizzbuzz.awk を忘れずに
#
BEGIN{
	ORS="";				# レコードセパレータ無し
	for (i=1; i <= 100; i++) {	# 1-100 ループ	
		print i%3? "": "Fizz"	# 3の倍数なら Fizz
		print i%5? "": "Buzz"	# 5の倍数なら Buzz
		print i%3&&i%5? i: ""	# いずれでもなければ i
		print " "		# スペース
	}
	print "\n"			# 改行
}
