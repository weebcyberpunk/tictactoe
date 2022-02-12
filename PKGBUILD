# Maintainer: GG weebcyberpunk@gmail.com
pkgname=tictactoe
pkgver=1.0.0
pkgrel=1
pkgdesc="The stupid terminal based tictactoe game"
arch=("x86_64")
url="https://www.github.com/weebcyberpunk/tictactoe"
license=('GPL3')
provides=(tictactoe)
source=("git+$url")
md5sums=('SKIP')

build() {
	cd "$pkgname"
	gcc *.c -o tictactoe
}

package() {
	cd "$pkgname"
	install -Dm755 tictactoe $pkgdir/usr/bin/tictactoe
	install -Dm644 "help.txt" $pkgdir/usr/share/tictactoe/"help.txt"
}
