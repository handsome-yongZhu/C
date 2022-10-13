#define _CRT_SECURE_NO_WARNINGS 1





//C语言学习
//第二章
//2.1.1变量定义
//做计算
//printf("23+43=%d\n", 23 + 43);
//算找零
//printf("100-23=%d\n", 100 - 23);
//如何能做程序运行时输入那个数字23，然后计算输出结果？
//需要
//有地方放输入的数字；
//有办法输入数字；
//输入的数字能参与计算。
//例如：
//
////change.c的main函数内
//int price = 0;
//​
//printf("请输入金额（元）：");
//scanf("%d", &price);
//​
//int change = 100 - price;
//​
//printf("找您%d元。\n", change);
//
//
//如何输入
//输入也在终端窗口中
//输入是以行为单位进行的，行的结束标志就是你按下了回车键。在你按下回车之前，你的程序不会读到任何东西。
//变量
//int price = 0;
//这一行，定义了一个变量。变量的名字是price，类型是int，初始值是0；
//变量是一个保存数据的地方，当我们需要在程序里保存数据时，比如上面的例子中要记录用户输入的价格，就需要一个变量来保存它。用一个变量保存了数据，它才能参加到后面的计算中，比如计算机找零。
//变量定义
//变量定义的一般形式就是：
//<类型名称><变量名称>;
//int price;
//int amount;
//int price, amount;
//变量的名字
//变量需要一个名字，变量的名字是一种“标识符”，意思是它用来标识这个和那个的不同的名字。
//标识符有标识符的构造规则。基本的原则是：标识符只能由字母、数字和下划线组成，数字不可以 出现在第一个位置上，C语言的关键字（有的地方叫它们保留字）不可以用做标识符。
//C语言的保留字（不需要背诵）
//auto, break, case, char, const, continue, default, do, double, else, enum, extern, float, for, goto, if, int, long, register, return, short, signed, sizeof, static, struct, switch, typedef, union, unsigned, void, volatile, while, inline, restrict
//
//2.1.2变量赋值与初始化
//int price = 0;
//这一行，定义了一个变量。变量的名字是price，类型是int，初始值是0。
//price = 0是一个式子，这里的“ = ”是一个赋值运算符，表示将“ = ”右边的值赋给左边的变量。
//赋值
//和数学不同，a = b在数学中表示关系，即a和b的值是一样；而在程序设计中，a = b表示要求计算机做一个动作：将b的值赋给a。关系是静态的，而动作是动态的。在数学中，a = b和b = a是等价的，而在程序设计中，两者的意思完全相反。
//初始化
//当赋值发生在定义变量的时候，就像程序change中的第7行那样，就是变量的初始化。虽然C语言并没有强制要求所有的变量都在定义的地方做初始化，但是所有的变量在第一次被使用（出现在赋值运算符的右边）之前被应该赋值一次。
//如果没有初始化？
//原本的变量在计算机中代表为多少就是多少（在Dev C++里默认为0，但j默认为1）
//
//变量初始化
//<类型名称> < 变量名称 >= <初始值>;
//int price = 0;
//int amount = 100;
//组合变量定义的时候，也可以在这个定义中单独给单个变量赋初值，如：
//int price = 0, amount = 100;
//表达式
//“ = ”是赋值运算符，有运算符的式子就叫做表达式。
//price = 0;
//change = 100 - price;
//变量类型
//int price = 0;
//这一行，定义了一个变量。变量的名字是price，类型是int，初始值是0。
//C是一种有类型的语言，所有的变量在使用之前必须定义或生命，所有的变量必须具有确定的数据类型。数据类型表示在变量中可以存放什么样的数据，变量中只能存放指定类型的数据，程序运行过程中也不能改变变量的类型。
//第二个变量
//int change = 100 - price;
//定义了第二个变量change
//并且做了计算
//（这种是C99的写法，C99允许在程序任何地方定义变量，传统的ANSI C只能在代码开头的地方定义变量。）
//
//2.1.3变量输入
//读整数
//scanf("%d", &price); （f为formatted，意为格式化的）
//要求scanf这个函数读入下一个整数，读到的结果赋值给变量price
//注意price前面的&
//如果输入的不是整数会怎么样？
//
//
//
//（后续讲解解释）
//
//2.1.4常量VS变量
//常量
//int change = 100 - price;
//固定不变的数，是常数。直接写在程序里，我们称作直接量（literal）。
//更好的方式，是定义一个常量：
//const int AMOUNT = 100;
//(C99!)
//const
//const是一个修饰符，加在int的前面，用来给这个变量加上一个const（不变的）的属性。这个const的属性表示这个变量的值一旦初始化，就不能再修改了。
//int change = AMOUNT - price;
//如果你试图对常量做修改，把它放在赋值运算符的左边，就会被编译器发现，指出为一个错误。
//（C99！）
//
//try
//让用户输入变量AMOUNT的值，而不是使用固定的初始值
//这个变量在哪里定义合适呢？
//2.1.5浮点数
//身高5尺7寸？
//美国人固执地使用英制计量单位，他们习惯用几尺几寸（英尺英寸）来报自己的身高。如果遇到一个美国人告诉你他是5尺7，他的身高应该是一米几呢？
//（5 + 7 / 12） * 0.3048 = 1.7018米
//
//
//为什么跟计算的不一样呢？
//
//因为...
//因为两个整数的运算的结果只能是整数
//10 / 3 * 3 = > ？
//10和10.0在C中是完全不同的数
//10.0是浮点数
//浮点数
//带小数点的数值。浮点这个词的本意就是指小数点是浮动的，是计算机内部表达非整数（包含分数和无理数）的一种方式。另一种方式叫定点数，不过在C语言中你不会遇到定点数。人们借用浮点数这个词来表达所有的带小数点的数。
//改进
//(foot + inch / 12) * 0.3048;
//改为(foot + inch / 12.0) * 0.3048;
//当浮点数和整数放在一起运算时，C会将整数转换成浮点数，然后进行浮点数的运算。
//double
//inch是定义为int类型的变量，如果把int换成double，我们就把它改成double类型的浮点数变量了。
//double的意思是“双”，它本来是“双精度浮点数”的第一个单词，人们用来表示浮点数类型。除了double，还有float（意思就是浮点！）表示为单精度浮点数。
//#include<stdio.h>
//​
//int main()
//{
//	double foot;
//	double inch;
//
//	scanf("%lf %lf", &foot, &inch);
//
//	printf("身高是%f米。\n", ((foot + inch / 12) * 0.3048));
//
//	return 0;
//}
//数据类型
//整数
//int
//printf("%d", ...);
//scanf("%d", ...);
//带小数点的数
//double
//printf("%f", ...);
//scnaf("%lf", ...);
//整数
//整数类型不能表达有小数部分的数，整数和整数的运算结果还是整数。计算机里会有纯粹的整数这种奇怪的东西，是因为整数的运算比较快，而且占地方也小。其实人们日常生活中大量做的还是纯粹的整数计算，所以整数的用处还是很大的。
//2.2.1表达式
//表达式
//一个表达式是一系列运算符和算子的组合，用来计算一个值
//amount = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);
//total = 57;
//count = count + 1;
//value = (min / 2) * lastValue;
//运算符
//运算符（operator）是指进行运算的动作，比如加法运算符“ + ”，减法运算符“ - ”。
//算子（operand）是指参与运算的值，这个值可能是常数，也可能是变量，还可能是一个方法的返回值。
//
//
//四则运算
//四则运算C符号意义++加--减x * 乘÷ / 除 % 取余（）()括号
//
//% 表示取两个数相除以后的余数
//计算时间差
//输入两个时间，每个时间分别输入小时和分钟的值，然后输出两个时间之间的差，也以几小时几分表示：
//int hour1, minute1;
//int hour2, minute2;
//​
//scanf("%d %d", &hour1, &minute1);
//scanf("%d %d", &hour2, &minute2);
//(如果直接分别减，会出现分钟借位的情况：1点40分和2点10分的差？)
//总的分钟 / 60->小时， % 60->分钟
//
//int hour1, minute1;
//int hour2, minute2;
//​
//scanf("%d %d", &hour1, &minute1);
//scanf("%d %d", &hour2, &minute2);
//​
//int t1 = hour1 * 60 + minute1;
//int t2 = hour2 * 60 + minute2;
//​
//int t = t2 - t1;
//​
//printf("时间差是%d小时%d分。", t / 60, t % 60);
//hour1 * 60 + minute1 - > 转换为分钟为单位
//t / 60->小时部分；t % 60->分钟部分
//2.2.2运算符优先级
//求平均值
//写一个程序，输入两个整数，输出它们的平均值
//int a, b;
//​
//scanf("%d %d", &a, &b);
//​
//double c = (a + b) / 2.0;
//​
//printf("%d和%d的平均值=%f\n", a, b, c);
//运算符优先级
//优先级运算符运算结合关系举例1 + 单目不变自右向左a * +b1 - 单目取负自右向左a * -b， - a2 * 乘自左向右a * b2 / 除自左向右a / b2 % 取余自左向右a % b3 + 加自左向右a + b3 - 减自左向右a - b4 = 赋值自右向左a = b
//
//赋值运算符
//赋值也是运算，也有结果
//a = 6的结果是a被赋予的值，也就是6
//a = b = 6->a = （b = 6)
//“嵌入式赋值”(不建议)
//int a = 6;
//int b;
//int c = 1 + (b = a);
//不利于阅读
//容易产生错误
//结合关系
//一般自左向右
//单目 + -和赋值 = 是 自右向左
//result = a = b = 3 + c;
//result = 2;
//result = (result = result * 2) * 6 * (result = 3 + result);
//(这样的表达式太复杂，不容易阅读和理解，容易造成读程序时的误解。所以，要避免写出这样的复杂表达式来。这个表达式应该被拆成若干个表达式，然后以明显的正确的顺序来进行计算。)
//
//计算复利
//在银行存定期的时候，可以选择到期后自动转存，并将到期的利息计入本金合并转存。如果1年期的定期利率是3.3 % ，那么连续自动转存3年后，最初存入的X元定期会得到多少本息余额呢？
//本息合计 = x（1 + 3.3 % ）³
//ⁿⁿint x;
//scanf("%d", &x);
//double amount = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);
//printf("%f", amount);
//(要计算任意年以后的本息金额，就需要做（1 + 0.033）ⁿ的计算。ps：用到循环)
//
//2.2.3交换变量
//交换两个变量
//如果已经有：
//int a = 6;
//int b = 5;
//如何交换a、b两个变量的值？
//程序是按步执行的
//程序表达的是顺序执行的动作，而不是关系
//a = b;
//b = a;
//是依次执行的 ，结果使得a和b都得到b原来的值。
//交换
//int t = a;
//
//a = b;
//
//b = t;
//
//2.2.4复合赋值和递增递减
//复合赋值
//5个算术运算符， + ， - ，， / ， % ，可以喝赋值运算符“ = ”结合起来，形成复合运算符："+=", "-=", "=", "/=", "%="
//total += 5;
//total = total + 5;
//注意两个运算符中间不要有空格
//total += (sum + 100) / 2;
//total = total + (sum + 100) / 2;
//total *= sum + 12;
//total = total * (sum + 12);
//递增递减运算符
//"++"和"--"是两个很特殊的运算符，它们是单目运算符，这个算子还必须是变量。这有两个运算符分别叫做递增和递减运算符，它们的作用就是给这个变量 + 1或者 - 1.
//count++;
//count += 1;
//count = count + 1;
//前缀后缀
//++和--可以放在变量的前面，叫做前缀形式，也可以放在变量后面，，叫做后缀形式。
//a++的值是a加1以前的值，而++a的值是加了1之后的值，无论哪个，a自己的值都加了1了。
//
//
//表达式运算表达式的值count++给count加1count原来的值++count给count加1count + 1以后的值count--给count减1count原来的值--count给count减1count - 1以后的值
//
//（pdp11里面，INC = 递增，DEC = 递减










//#include <stdio.h>
//
//int main()
//{
//	//int amount = 100;
//	//int price = 0;

	//printf("请输入金额（元）:");
	//scanf("%d", &price);

	//printf("请输入票面（元）:");
	//scanf("%d", &amount);

	//int change = amount - price;

	//printf("找您%d元\n",change);









	//int a;
	//int b;

	//printf("请输入两个整数:");
	//scanf("%d %d",&a,&b);
	//printf("%d+%d=%d\n",a,b,a+b);









	//printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示5英尺7英寸:");

	////double foot;
	////double inch;

	////scanf("%lf %lf", &foot, &inch);

	////printf("身高是%f米。\n", ((foot + inch / 12) * 0.3048));







	//int hour1, minute1;
	//int hour2, minute2;

	//scanf("%d %d", &hour1, &minute1);
	//scanf("%d %d", &hour2, &minute2);  

	//int t1 = hour1 * 60 + minute1;
	//int t2 = hour2 * 60 + minute2;

	//int t = t2 - t1;

	//printf("时间差是%d小时%d分。", t / 60, t % 60);









	//int x;
	//scanf("%d", &x);
	//double amount = x * (1 + 0.033) * (1 + 0.033) * (1 + 0.033);
	//printf("%f", amount);







//
//
//		return 0;
//}















//#include <stdio.h>
//int main(void)
//{
//	int num1, denom1, num2, denom2, result_num, result_denom;
//
//	printf("Enter first fraction:");
//	scanf("%d/%d", &num1, &denom1);
//
//	printf("Enter second fraction:");
//	scanf("%d/%d", &num2, &denom2);
//
//	result_num = num1 * denom2 + num2 * denom1;
//	result_denom = denom1 * denom2;
//	printf("The sum is %d/%d\n", result_num, result_denom);
//
//	return 0;
//}








//
//#include <stdio.h>
//
//int main()
//{
	/*int a = 5;
	int b = 6;
	int t;
	t = a;
 	a = b;
	b = t;
	printf("a=%d,b=%d\n", a, b);*/



	//int total;       复合赋值
	//total += 5;
	//total = total + 5;
	/*"++", "--";递增递减运算符      前缀  后缀   有区别！！！！*/






//计算税金(Tax)
//
//编写一个程序，要求用户输入一个美元数量，然后显示出增加 5 % 税率后的相应金额。
//
//Enter an amount : 100.00
//with tax added : $105.00
//
//输入的金额为大于 0 的两位数浮点数。
//	double a = 0;
//	double b = 0;
//	scanf("%lf", &a);
//    b = a * 1.05;
//	printf("%f", b);
//
//	return 0;
//} 


//计算账单（Bills）
//
//编写⼀个程序，要求用户输出⼀个美元数量，然后显示出如何用最少20美元、10美元、5美元和1美元来付款。
//
//Enter a dollar amount : 93
//$20 bills : 4
//$10 bills : 1
//$5 bills : 0
//$1 bills : 3
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//
//	printf("Enter a dollar amount :");
//	scanf("%d", &a);
//	int twenty = 0;
//	twenty = a / 20;
//	int ten = 0;
//	ten = (a - twenty * 20) / 10;
//	int five = 0;
//	five = (a -(twenty * 20 + ten * 10)) / 5;
//	int one = 0;
//	one = (a -(twenty * 20 + ten * 10 + five * 5)) / 1;
//	printf("$20 bills : %d\n$10 bills : %d\n$5 bills : %d\n$1 bills : %d\n", twenty, ten, five, one);
//
//	return 0;
//}