# tmake
A simple, hyper-basic, small (1.3 mb) alternitive to make using toml and c++
# install:
```bash
git clone https://github.com/lovemearowlet/tmake.git
cd tmake
make
su -c "make install"
```
# usage:
to use it do tmake target but replace target with like install or whatever the target is
```bash
tmake target
```
# dependancys:
- [toml11](https://github.com/ToruNiina/toml11?tab=readme-ov-file) (reccomended to have prefix as /usr)
- a c++ compiler
- a c++ libary
# the tmake.toml file:
to use tmake you need a tmake.toml file, it can be made like this (as of now):
```toml
target = [
  "command",
  "command2",
# And so on...
]
```
now obv you make the commands the real ones and change the target to the one the user must use for example:
```toml
install = [
  "gcc -o test test.c",
]
```
will compile a file called test (it can be found in the test dir to try out tmake)
