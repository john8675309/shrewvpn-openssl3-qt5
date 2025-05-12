# ShrewVPN - OpenSSL 3 & Qt5 Modernization

This repository contains a modernized fork of the [Shrew Soft VPN Client](https://www.shrew.net/) with support for:

- **OpenSSL 3.x**
- **Qt5 (for GUI components)**
- **CMake compatibility with modern Linux systems**
- **Full Aggressive/Main Mode IKEv1 negotiation**
- **XAUTH + NAT-T + DPD + Fragmentation**

This version has been successfully tested against **Fortinet VPN gateways**.

---

## 🧱 Features

- ✅ Updated HMAC and EVP calls to work with OpenSSL 3
- ✅ Migrated GUI components to **Qt5** (`qikea`, `qikec`)
- ✅ Fixed deprecated API usage throughout codebase
- ✅ Verified compatibility with aggressive and main mode exchanges
- ✅ Compatible with modern Linux distributions (Debian 12+, Ubuntu 22.04+, etc.)

---

## 📦 Build Instructions (Linux)

### Dependencies

Make sure you have the following packages installed:

```bash
sudo apt install cmake g++ libssl-dev qtbase5-dev qttools5-dev-tools libedit-dev
```

### Build

```bash
git clone https://github.com/yourusername/shrewvpn-openssl3-qt5.git
cd shrewvpn-openssl3-qt5
mkdir build && cd build
cmake .. -DNATT=YES -DQTGUI=YES
make
sudo make install
```

> To build without the GUI, omit `-DQTGUI=YES`.

---

## 🔧 Configuration

VPN site profiles are stored in:

```
~/.ike/sites/
```

You can create/edit profiles using the `qikea` GUI or manually with `.vpn` files.

Example `.vpn` config:

```
s:network-host:vpn.example.com
s:auth-method:mutual-psk-xauth
s:ident-client-type:address
n:phase1-dhgroup:2
n:phase1-life-secs:28800
b:auth-mutual-psk:BASE64ENCODEDPSK==
```

---

## 🧪 Testing

The CLI client can be run with:

```bash
ikec -r <vpn-profile-name>
```

And the GUI tool with:

```bash
qikea
```

---

## 📜 License

This project is based on [Shrew Soft Inc.](https://www.shrew.net/download/ike) under the original BSD license. See `LICENSE.txt`.

---

## 🙋‍Credits

Modernization by John Hass - john8675309@gmail.com  
Original Author: Matthew Grooms – mgrooms@shrew.net  
OpenSSL 3 compatibility fixes, Qt5 migration, Fortinet testing, and enhancements.

---

## 💡 TODO

- [ ] Port GUI to Qt6 (optional)
- [ ] Add GitHub Actions CI build
- [ ] Add support for certificate authentication


I don't know why I do things some times, I needed xauth in NetworkManager L2TP, this isn't even part of NetworkManager, And I spent the time.
