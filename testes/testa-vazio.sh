echo "Testando vetor vazio..."
echo

output=$(./a.out < ./testes/input-0.txt)
expected_output="{}"

if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

if [ "$output" == "$expected_output" ] ; then
  echo "Pass: A saida esperada esta correta"
else
  echo "Era esperado '$expected_output' mas o programa retornou: $output"
  exit 1
fi

echo
echo "Teste(s) realizado(s) com sucesso(s)"

exit 0
