    uint8_t raw_data1[128] = {0x00, 0x51, 0x00, 0x56, 0x00, 0x57, 0x00, 0x4B, 0x00, 0x39, 0x00, 0x35, 0x00, 0x37, 0x00, 0x34,
        0x00, 0x56, 0x00, 0x58, 0x00, 0x57, 0x00, 0x49, 0x00, 0x3A, 0x00, 0x39, 0x00, 0x35, 0x00, 0x34,
        0x00, 0x5D, 0x00, 0x5C, 0x00, 0x58, 0x00, 0x4D, 0x00, 0x3C, 0x00, 0x35, 0x00, 0x38, 0x00, 0x34,
        0x00, 0x5C, 0x00, 0x65, 0x00, 0x56, 0x00, 0x51, 0x00, 0x39, 0x00, 0x37, 0x00, 0x36, 0x00, 0x39,
        0x00, 0x5D, 0x00, 0x61, 0x00, 0x58, 0x00, 0x4D, 0x00, 0x3B, 0x00, 0x36, 0x00, 0x35, 0x00, 0x37,
        0x00, 0x63, 0x00, 0x61, 0x00, 0x5B, 0x00, 0x50, 0x00, 0x3A, 0x00, 0x38, 0x00, 0x37, 0x00, 0x34,
        0x00, 0x5D, 0x00, 0x5F, 0x00, 0x5E, 0x00, 0x54, 0x00, 0x3B, 0x00, 0x39, 0x00, 0x35, 0x00, 0x35,
        0x00, 0x54, 0x00, 0x58, 0x00, 0x59, 0x00, 0x4C, 0x00, 0x3A, 0x00, 0x3A, 0x00, 0x36, 0x00, 0x35};
    uint8_t raw_data2[128];
    std::copy(raw_data1, raw_data1 + 128, raw_data2);