function fizzbuzz(max)
        for i in 1:max
                msg = "Fizz" ^ (i % 3 == 0) * "Buzz" ^ (i % 5 == 0)
                print(isempty(msg) ? i : msg , " ")
        end
end
