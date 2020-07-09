/*
 * Handshake commands
 */

static const byte CMD_HANDSHAKE_1[]
{
  0x00,
  0x06,
  0x00,
  0x00
};

// Used to sync the controller packet counter; repeat until AC responds
static const byte CMD_HANDSHAKE_2[]
{
  0x00,
  0x09,
  0x00,
  0x00
};

static const byte CMD_HANDSHAKE_3[]
{
  0x00,
  0x0C,
  0x00,
  0x00
};

static const byte CMD_HANDSHAKE_4[]
{
  0x00,
  0x10,
  0x00,
  0x01,
  0x20
};

static const byte CMD_HANDSHAKE_5[]
{
  0x00,
  0x11,
  0x00,
  0x02,
  0x00,
  0x01
};

static const byte CMD_HANDSHAKE_6[]
{
  0x00,
  0x12,
  0x00,
  0x04,
  0x01,
  0x10,
  0x11,
  0x12
};

static const byte CMD_HANDSHAKE_7[]
{
  0x00,
  0x41,
  0x00,
  0x00
};

static const byte CMD_HANDSHAKE_8[]
{
  0x01,
  0x4C,
  0x00,
  0x00
};

static const byte CMD_HANDSHAKE_9[]
{
  0x10,
  0x00,
  0x00,
  0x00
};

static const byte CMD_HANDSHAKE_10[]
{
  0x10,
  0x01,
  0x00,
  0x05,
  0x01,
  0x30,
  0x01,
  0x00,
  0x01
};

static const byte CMD_HANDSHAKE_11[]
{
  0x00,
  0x18,
  0x00,
  0x00
};

static const byte CMD_HANDSHAKE_12[]
{
  0x01,
  0x00,
  0x00,
  0x01,
  0x10
};

static const byte CMD_HANDSHAKE_13[]
{
  0x10,
  0x08,
  0x00,
  0x09,
  0x01,
  0x01,
  0x30,
  0x01,
  0x01,
  0x02,
  0x42,
  0x01,
  0x42
};

// As response
static const byte CMD_HANDSHAKE_14[]
{
  0x01,
  0x89,
  0x00,
  0x07,
  0x00,
  0xB8,
  0xB7,
  0xF1,
  0x9B,
  0x4F,
  0xA6
};

// As response
static const byte CMD_HANDSHAKE_15[]
{
  0x00,
  0xA0,
  0x00,
  0x13,
  0x00,
  0x08,
  0x30,
  0x32,
  0x2E,
  0x30,
  0x33,
  0x2E,
  0x30,
  0x30,
  0x08,
  0x30,
  0x31,
  0x30,
  0x31,
  0x30,
  0x31,
  0x30,
  0x33
};

// Variation of CMD_HANDSHAKE_12
static const byte CMD_HANDSHAKE_16[]
{
  0x01,
  0x00,
  0x00,
  0x01,
  0x11
};

/*
 * Ping command, gets sent by AC every 60s
 */
static const byte CMD_PING[]
{
  0x01,
  0x81,
  0x00,
  0x03,
  0x00,
  0x11,
  0x12
};

static const byte CMD_POLL[]
{
  0x10,
  0x09,
  0x00,
  0x38,
  0x01,
  0x01,
  0x30,
  0x01,
  0x11,
  0x00,
  0x80,
  0x00,
  0x00,
  0xB0,
  0x00,
  0x02,
  0x31,
  0x00,
  0x00,
  0xA0,
  0x00,
  0x00,
  0xA1,
  0x00,
  0x00,
  0xA5,
  0x00,
  0x00,
  0xA4,
  0x00,
  0x00,
  0xB2,
  0x00,
  0x02,
  0x35,
  0x00,
  0x02,
  0x33,
  0x00,
  0x02,
  0x34,
  0x00,
  0x02,
  0x32,
  0x00,
  0x00,
  0xBB,
  0x00,
  0x00,
  0xBE,
  0x00,
  0x02,
  0x20,
  0x00,
  0x02,
  0x21,
  0x00,
  0x00,
  0x86,
  0x00
};

/*
 * Ack packet sent when AC sends us a report
 */
static const byte CMD_REPORT_ACK[]
{
  0x10,
  0x8A,
  0x00,
  0x04,
  0x00,
  0x01,
  0x30,
  0x01
};
