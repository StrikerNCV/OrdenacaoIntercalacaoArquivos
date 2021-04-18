# OrdenacaoIntercalacaoArquivos

A partir do arquivo Ordenacao_trab.c, são gerados 16 novos arquivos que realizam a quebra dos dados das entradas em 16 partes com aproximadamente 47 mil registros. 
Posteriormente, cada arquivo de intercalação ( 1-15 ) faz a intercalação desses 16 arquivos que foram gerados, sempre de 2 em 2 na ordem. Perante tal ação (Lógica baseada na Jam Board da aula). 
Na primeira rodada 16 blocos serão intercalados gerando 8 blocos ordenados. Na segunda rodada, os 8 blocos serão novamente intercalados dois a dois produzindo 4 blocos. Depois 2 e finalmente teremos um único bloco ordenado. Como resultado, foram obtidos 31 arquivos cep.dat e o ultimo devidamente ordenado.
