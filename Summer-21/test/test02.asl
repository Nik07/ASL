load("C:/Arxiv/ASL_Interpreter/src/MS.asl");
load("C:/Arxiv/ASL_Interpreter/src/Sem.asl");
load("C:/Arxiv/ASL_Interpreter/src/OM4.asl");

//функция sum
$om1 = blockStatement(
	(tvalue(1, int)),
	(tvalue(2, int))
);

$sem1 = execute:statement($om1);

$sem1;