echo "Enter coefficients a, b and c:"
read a
read b
read c

delta=$((b * b - 4 * a * c))

if [ $delta -lt 0 ]; then
  echo "No real roots"
else
  root1=$(echo "scale=2; (- $b + sqrt($delta)) / (2 * $a)" | bc)
  root2=$(echo "scale=2; (- $b - sqrt($delta)) / (2 * $a)" | bc)
  echo "Roots: $root1 and $root2"
fi