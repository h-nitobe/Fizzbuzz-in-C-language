#! /usr/bin/bash
#
#       @file           fizzbuzzRE1.sh
#       @brief          正規表現で FizzBuzz
#       @author         唯物是真 @Scaled_Wurm
#                       https://sucrose.hatenablog.com/entry/2018/02/25/230355
#       @date           2018/02/25
#       @details        2024/01/22 modefied by 新渡戸広明
#                       chmod +x fizzbuzzRE1.sh を忘れずに
#
seq 1 100 | perl -pe 's/^(\d*[05])$/$1Buzz/;s/^((?:[0369]|[147](?:[0369]|[147][0369]*[258])*(?:[258]|[147][0369]*[147])|[258](?:[0369]|[258][0369]*[147])*(?:[147]|[258][0369]*[258]))+)(?=\D)/$1Fizz/;s/^\d+(?=B|F)//;s/\n/ /';echo
