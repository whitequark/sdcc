set output "whetstone-mcs51-score.svg"
set terminal svg size 640,480
set style data lines
set key bottom right
set xlabel "revision"
set arrow from 9618, 956.109 to 9618, 955.109
set label "3.6.0" at 9618, 956.109
set arrow from 10233, 963.463 to 10233, 962.463
set label "3.7.0" at 10233, 963.463
set arrow from 10582, 960.692 to 10582, 959.692
set label "3.8.0" at 10582, 960.692
set arrow from 11214, 967.183 to 11214, 966.183
set label "3.9.0" at 11214, 967.183
plot "whetstone-mcs51-scoretable" using 1:4 title "default", "whetstone-mcs51-scoretable" using 1:2 title "size", "whetstone-mcs51-scoretable" using 1:3 title "speed"

