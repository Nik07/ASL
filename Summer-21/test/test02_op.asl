load("C:/Arxiv/ASL_Interpreter/src/Init.asl");
load("C:/Arxiv/ASL_Interpreter/src/OM4.asl");
load("C:/Arxiv/ASL_Interpreter/src/Sem.asl");


$om = op(">", 2, 2);
$em = execute:expression($om);
assert(isAttributon($em));
assert(!isUndef($em.value));
assert($em.value == false);
assert($em.type == bool);
assert($em.tvalue == concept);

$om = op("+", 4, 2);
$em = execute:expression($om);
assert($em.value == 6);

$om = op("-", 4, 2);
$em = execute:expression($om);
assert($em.value == 2);

$om = op("*", 4, 2);
$em = execute:expression($om);
assert($em.value == 8);

$om = op("/", 3, 2);
$em = execute:expression($om);
assert($em.type == double);
assert($em.value == 1.5);

$om = op("-", 4);
$em = execute:expression($om);
assert($em.value == -4);

$om = blockStatement(op("+", 4, 2));
$em = execute:statement($om);
assert($em.value == 6);