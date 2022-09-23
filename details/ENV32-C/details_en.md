#### Abstract
The program is using some exit handler that does not return normally.

#### Explanation
The following three functions _Exit(), exit(), quick_exit() are C standard exit functions. exit() and quick_exit() will call exit handlers atexit() and at_quick_exit() respectively for cleanup purposes, while _Exit() will not. User can define their own handlers and register with the system provided handlers. These exit handlers must return normally so that all exit handlers (thus all cleanup tasks) are properly performed. Furthermore, all exit handlers should not call exit().
