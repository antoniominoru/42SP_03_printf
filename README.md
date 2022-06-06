<h1 align=left>
	<b>ft_printf</b>
</h1>

<h2 align=left>
	 <i>42cursus' project #3</i>
</h2>

<p align=left>
	The <b>printf</b> function is one of the most versatile and well-known functions in the C language. From a testing aid to tabulation method, printf is a very powerful and important tool in every dev's kit. This project aims to recreate the behaviour of the original MacOS's printf, including its basic error management, some of its flags, minimum field width stipulation and most of its basic conversions.


<h3 align=left>
Mandatory
</h3>

> <i>A small description of the required conversion:
> - `%c` print a single character.
> - `%s` print a string of characters.
> - `%p` The void * pointer argument is printed in hexadecimal.
> - `%d` print a decimal (base 10) number.
> - `%i` print an integer in base 10.
> - `%u` print an unsigned decimal (base 10) number.
> - `%x` print a number in hexadecimal (base 16).
> - `%%` print a percent sign.</i>

<h3 align=left>
Bonus
</h3>

> <i>Manage any combination of the following flags: 
> - `-0.` and minimum field width with all conversions
> - Manage all the following flags: `# +`(yes, one of them is a space)<i>

---

<h2>
The project
</h2>


### Conversions & Flags & Expected Order

| Conversion  | Description														 			| Project 		|
|-------|-----------------------------------------------------------------------------------|---------------|
| **c** | Single ascii character         													|Mandatory		|
| **s** | String of characters NULL terminated												|Mandatory		|
| **p** | Pointer location converted to hexadecimal value									|Mandatory		|
| **d** | Decimal number 																	|Mandatory		|
| **i** | Integer in decimal base                 											|Mandatory		|
| **u** | Unsigned integer in decimal base                									|Mandatory		|
| **x** | Unsigned number printed in lowercase hexadecimal base                				|Mandatory		|
| **X** | Unsigned number printed in uppercase hexadecimal base                				|Mandatory		|
| **%** | The '%' ascii character                 											|Mandatory		|
| **o** | Unsigned number printed in octal base                 							|Extra			|

| Flag  | Description														 				| Project 		|
|-------|-----------------------------------------------------------------------------------|---------------|
| **-** | Left align the argument passed	         										|Bonus 1		|
| **0** | Add '0' as a padding character in numeric conversions (single space is default)	|Bonus 1		|
| **.** | Precision definition, followed by a number 										|Bonus 1		|
| **+** | Add a plus sign ('+') in the front of positive numeric conversions 				|Bonus 2		|
| **' '** | Add a single space (' ') in the front of positive numeric conversions 			|Bonus 2		|
| **#** | Add the corresponding prefix in front of x, X and o conversions                 	|Bonus 2		|
| **\*** | Add a placeholder for numeric values that shall be passed through the variadic arguments  |Extra			|
