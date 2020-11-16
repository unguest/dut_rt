# Config ETA 3

Arthur & Samy, the best sys-admins ever.

## Router configuration :

```config
enable
configure terminal
hostname Etabli3
enable password cisco
line vty 0 4
password cisco
exit
interface FastEthernet0/1
ip address 172.16.0.1 255.255.0.0
no shutdown
ip nat inside
interface FastEthernet0/0
ip address 192.168.33.63 255.255.255.0
no shutdown
ip nat outside
exit
ip dhcp pool router
   network 172.16.0.0 255.255.0.0
   dns-server 1.1.1.1
   default-router 172.16.0.1
exit
ip route 0.0.0.0 0.0.0.0 192.168.33.254
ip routing
ip nat inside source list 10 interface FastEthernet0/0 overload
access-list 10 permit 172.16.0.0 0.0.255.255
config-register 0x2102
exit
write
```

## Ip Table

| IP           | Equipement |
| ------------ | ---------- |
| 172.16.0.1   | router     |
| 172.16.0.10  | switch     |
| 172.16.0.253 | arthur     |
| 172.16.0.2   | samy       |

## Switch VLAN Config

```config
enable
configure terminal
interface vlan 1
ip address 172.16.0.1 255.255.0.0
```
## Telnet on switch

(with a very secure password).

```config
en
conf t
line vty 0 4
login local
exit
username cisco password cisco
write
reload
```
