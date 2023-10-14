x=$(echo "$FT_NBR1" | tr \' 0 | tr '\\\"\?\!' 1234 | tr -d '\n')
y=$(echo "$FT_NBR2" | tr 'mrdoc' 01234 | tr -d '\n')

echo "obase=13; ibase=5; $x + $y" | bc | tr 0123456789ABC 'gtaio luSnemf'