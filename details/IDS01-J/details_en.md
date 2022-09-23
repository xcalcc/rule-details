#### Abstract
The program is validating strings that have not been normalized.

#### Explanation
Strings have many representations such as \"char\", \"unicode\", etc. Many filtering or validation mechanisms are based on the strings' character data. Failure to filter out or normalize the string before validation could end up bypassing the validation mechanism, resulting in execution of arbitrary code.
