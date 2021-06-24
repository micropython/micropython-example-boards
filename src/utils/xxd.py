from machine import mem8, mem16


def xxd(addr, num_bytes=64, width=16):
    for i in range((num_bytes + width - 1) // width):
        print("%08x:" % (addr + i * width), end="")
        for j in range(0, width, 2):
            word = mem16[addr + i * width + j]
            print(" %02x%02x" % (word & 0xFF, word >> 8), end="")
        print("  ", end="")
        for j in range(width):
            byte = mem8[addr + i * width + j]
            if 32 <= byte <= 126:
                print(chr(byte), end="")
            else:
                print(".", end="")
        print()
