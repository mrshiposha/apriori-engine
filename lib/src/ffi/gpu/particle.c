// This file generated automatically.
// DO NOT MODIFY IT MANUALLY!
// Original shader source path: file:///D:\projects\apriori-engine\lib\src\gpu\particle.hlsl

#include "D:\projects\apriori-engine\lib\src\ffi\gpu\particle.h"

uint32_t *particle() {
    static uint32_t shader_src[] = {
        0x07230203,
		0x00010000,
		0x000D000A,
		0x0000014E,
		0x00000000,
		0x00020011,
		0x00000001,
		0x0006000B,
		0x00000001,
		0x4C534C47,
		0x6474732E,
		0x3035342E,
		0x00000000,
		0x0003000E,
		0x00000000,
		0x00000001,
		0x0007000F,
		0x00000005,
		0x00000004,
		0x6E69616D,
		0x00000000,
		0x000000B7,
		0x000000BA,
		0x00060010,
		0x00000004,
		0x00000011,
		0x00000100,
		0x00000001,
		0x00000001,
		0x00030003,
		0x00000005,
		0x000001F4,
		0x000A0004,
		0x475F4C47,
		0x4C474F4F,
		0x70635F45,
		0x74735F70,
		0x5F656C79,
		0x656E696C,
		0x7269645F,
		0x69746365,
		0x00006576,
		0x00080004,
		0x475F4C47,
		0x4C474F4F,
		0x6E695F45,
		0x64756C63,
		0x69645F65,
		0x74636572,
		0x00657669,
		0x00040005,
		0x00000004,
		0x6E69616D,
		0x00000000,
		0x00030005,
		0x00000016,
		0x006F6275,
		0x00050006,
		0x00000016,
		0x00000000,
		0x746C6564,
		0x00005461,
		0x00070006,
		0x00000016,
		0x00000001,
		0x74726170,
		0x656C6369,
		0x6E756F43,
		0x00000074,
		0x00030005,
		0x00000018,
		0x006F6275,
		0x00050005,
		0x00000026,
		0x74726150,
		0x656C6369,
		0x00000000,
		0x00040006,
		0x00000026,
		0x00000000,
		0x00736F70,
		0x00040006,
		0x00000026,
		0x00000001,
		0x006C6576,
		0x00050005,
		0x00000028,
		0x74726170,
		0x656C6369,
		0x00000073,
		0x00050006,
		0x00000028,
		0x00000000,
		0x74616440,
		0x00000061,
		0x00050005,
		0x0000002A,
		0x74726170,
		0x656C6369,
		0x00000073,
		0x00050005,
		0x00000050,
		0x72616873,
		0x61446465,
		0x00006174,
		0x00040005,
		0x00000077,
		0x56415247,
		0x00595449,
		0x00040005,
		0x00000082,
		0x54464F53,
		0x00004E45,
		0x00040005,
		0x00000084,
		0x45574F50,
		0x00000052,
		0x00070005,
		0x0000008F,
		0x52414853,
		0x445F4445,
		0x5F415441,
		0x455A4953,
		0x00000000,
		0x00070005,
		0x000000B7,
		0x626F6C47,
		0x6E496C61,
		0x61636F76,
		0x6E6F6974,
		0x00004449,
		0x00070005,
		0x000000BA,
		0x61636F4C,
		0x766E496C,
		0x7461636F,
		0x496E6F69,
		0x00000044,
		0x00040005,
		0x000000BC,
		0x61726170,
		0x0000006D,
		0x00040005,
		0x000000BE,
		0x61726170,
		0x0000006D,
		0x00050048,
		0x00000016,
		0x00000000,
		0x00000023,
		0x00000000,
		0x00050048,
		0x00000016,
		0x00000001,
		0x00000023,
		0x00000004,
		0x00030047,
		0x00000016,
		0x00000002,
		0x00040047,
		0x00000018,
		0x00000022,
		0x00000000,
		0x00040047,
		0x00000018,
		0x00000021,
		0x00000001,
		0x00050048,
		0x00000026,
		0x00000000,
		0x00000023,
		0x00000000,
		0x00050048,
		0x00000026,
		0x00000001,
		0x00000023,
		0x00000010,
		0x00040047,
		0x00000027,
		0x00000006,
		0x00000020,
		0x00050048,
		0x00000028,
		0x00000000,
		0x00000023,
		0x00000000,
		0x00030047,
		0x00000028,
		0x00000003,
		0x00040047,
		0x0000002A,
		0x00000022,
		0x00000000,
		0x00040047,
		0x0000002A,
		0x00000021,
		0x00000000,
		0x00040047,
		0x00000077,
		0x00000001,
		0x00000001,
		0x00040047,
		0x00000082,
		0x00000001,
		0x00000003,
		0x00040047,
		0x00000084,
		0x00000001,
		0x00000002,
		0x00040047,
		0x0000008F,
		0x00000001,
		0x00000000,
		0x00040047,
		0x000000B7,
		0x0000000B,
		0x0000001C,
		0x00040047,
		0x000000BA,
		0x0000000B,
		0x0000001B,
		0x00020013,
		0x00000002,
		0x00030021,
		0x00000003,
		0x00000002,
		0x00040015,
		0x00000006,
		0x00000020,
		0x00000000,
		0x00040017,
		0x00000007,
		0x00000006,
		0x00000003,
		0x00040020,
		0x00000008,
		0x00000007,
		0x00000007,
		0x00040020,
		0x0000000E,
		0x00000007,
		0x00000006,
		0x0004002B,
		0x00000006,
		0x00000010,
		0x00000000,
		0x00030016,
		0x00000014,
		0x00000020,
		0x00040015,
		0x00000015,
		0x00000020,
		0x00000001,
		0x0004001E,
		0x00000016,
		0x00000014,
		0x00000015,
		0x00040020,
		0x00000017,
		0x00000002,
		0x00000016,
		0x0004003B,
		0x00000017,
		0x00000018,
		0x00000002,
		0x0004002B,
		0x00000015,
		0x00000019,
		0x00000001,
		0x00040020,
		0x0000001A,
		0x00000002,
		0x00000015,
		0x00020014,
		0x0000001E,
		0x00040017,
		0x00000023,
		0x00000014,
		0x00000004,
		0x00040020,
		0x00000024,
		0x00000007,
		0x00000023,
		0x0004001E,
		0x00000026,
		0x00000023,
		0x00000023,
		0x0003001D,
		0x00000027,
		0x00000026,
		0x0003001E,
		0x00000028,
		0x00000027,
		0x00040020,
		0x00000029,
		0x00000002,
		0x00000028,
		0x0004003B,
		0x00000029,
		0x0000002A,
		0x00000002,
		0x0004002B,
		0x00000015,
		0x0000002B,
		0x00000000,
		0x00040020,
		0x0000002D,
		0x00000002,
		0x00000023,
		0x0004002B,
		0x00000014,
		0x00000035,
		0x00000000,
		0x0007002C,
		0x00000023,
		0x00000036,
		0x00000035,
		0x00000035,
		0x00000035,
		0x00000035,
		0x0004002B,
		0x00000006,
		0x0000004D,
		0x00000400,
		0x0004001C,
		0x0000004E,
		0x00000023,
		0x0000004D,
		0x00040020,
		0x0000004F,
		0x00000004,
		0x0000004E,
		0x0004003B,
		0x0000004F,
		0x00000050,
		0x00000004,
		0x00040020,
		0x0000005A,
		0x00000004,
		0x00000023,
		0x0004002B,
		0x00000006,
		0x00000060,
		0x00000002,
		0x0004002B,
		0x00000006,
		0x00000061,
		0x00000108,
		0x0004002B,
		0x00000015,
		0x00000069,
		0x00000100,
		0x00040017,
		0x0000006F,
		0x00000014,
		0x00000003,
		0x00040032,
		0x00000014,
		0x00000077,
		0x3B03126F,
		0x0004002B,
		0x00000006,
		0x0000007A,
		0x00000003,
		0x00040020,
		0x0000007B,
		0x00000007,
		0x00000014,
		0x00040032,
		0x00000014,
		0x00000082,
		0x3BF5C28F,
		0x00040032,
		0x00000014,
		0x00000084,
		0x3F400000,
		0x00040032,
		0x00000015,
		0x0000008F,
		0x00000200,
		0x00040020,
		0x00000093,
		0x00000002,
		0x00000014,
		0x0004002B,
		0x00000014,
		0x000000A1,
		0x3DCCCCCD,
		0x0004002B,
		0x00000014,
		0x000000AC,
		0x3F800000,
		0x00040020,
		0x000000B6,
		0x00000001,
		0x00000007,
		0x0004003B,
		0x000000B6,
		0x000000B7,
		0x00000001,
		0x0004003B,
		0x000000B6,
		0x000000BA,
		0x00000001,
		0x00050036,
		0x00000002,
		0x00000004,
		0x00000000,
		0x00000003,
		0x000200F8,
		0x00000005,
		0x0004003B,
		0x00000024,
		0x000000CE,
		0x00000007,
		0x0004003B,
		0x00000008,
		0x000000BC,
		0x00000007,
		0x0004003B,
		0x00000008,
		0x000000BE,
		0x00000007,
		0x0004003D,
		0x00000007,
		0x000000B8,
		0x000000B7,
		0x0004003D,
		0x00000007,
		0x000000BB,
		0x000000BA,
		0x0003003E,
		0x000000BC,
		0x000000B8,
		0x0003003E,
		0x000000BE,
		0x000000BB,
		0x000300F7,
		0x00000147,
		0x00000000,
		0x000300FB,
		0x00000010,
		0x000000D1,
		0x000200F8,
		0x000000D1,
		0x00050041,
		0x0000000E,
		0x000000D2,
		0x000000BC,
		0x00000010,
		0x0004003D,
		0x00000006,
		0x000000D3,
		0x000000D2,
		0x00050041,
		0x0000001A,
		0x000000D5,
		0x00000018,
		0x00000019,
		0x0004003D,
		0x00000015,
		0x000000D6,
		0x000000D5,
		0x0004007C,
		0x00000006,
		0x000000D7,
		0x000000D6,
		0x000500AE,
		0x0000001E,
		0x000000D8,
		0x000000D3,
		0x000000D7,
		0x000300F7,
		0x000000DA,
		0x00000000,
		0x000400FA,
		0x000000D8,
		0x000000D9,
		0x000000DA,
		0x000200F8,
		0x000000D9,
		0x000200F9,
		0x00000147,
		0x000200F8,
		0x000000DA,
		0x00070041,
		0x0000002D,
		0x000000DC,
		0x0000002A,
		0x0000002B,
		0x000000D3,
		0x0000002B,
		0x0004003D,
		0x00000023,
		0x000000DD,
		0x000000DC,
		0x000200F9,
		0x000000E1,
		0x000200F8,
		0x000000E1,
		0x000700F5,
		0x00000023,
		0x00000149,
		0x00000036,
		0x000000DA,
		0x0000014D,
		0x00000123,
		0x000700F5,
		0x00000015,
		0x00000148,
		0x0000002B,
		0x000000DA,
		0x00000125,
		0x00000123,
		0x000400F6,
		0x00000126,
		0x00000123,
		0x00000000,
		0x000200F9,
		0x000000E2,
		0x000200F8,
		0x000000E2,
		0x00050041,
		0x0000001A,
		0x000000E4,
		0x00000018,
		0x00000019,
		0x0004003D,
		0x00000015,
		0x000000E5,
		0x000000E4,
		0x000500B1,
		0x0000001E,
		0x000000E6,
		0x00000148,
		0x000000E5,
		0x000400FA,
		0x000000E6,
		0x000000E7,
		0x00000126,
		0x000200F8,
		0x000000E7,
		0x0004007C,
		0x00000006,
		0x000000E9,
		0x00000148,
		0x00050041,
		0x0000000E,
		0x000000EA,
		0x000000BE,
		0x00000010,
		0x0004003D,
		0x00000006,
		0x000000EB,
		0x000000EA,
		0x00050080,
		0x00000006,
		0x000000EC,
		0x000000E9,
		0x000000EB,
		0x00050041,
		0x0000001A,
		0x000000ED,
		0x00000018,
		0x00000019,
		0x0004003D,
		0x00000015,
		0x000000EE,
		0x000000ED,
		0x0004007C,
		0x00000006,
		0x000000EF,
		0x000000EE,
		0x000500B0,
		0x0000001E,
		0x000000F0,
		0x000000EC,
		0x000000EF,
		0x000300F7,
		0x00000100,
		0x00000000,
		0x000400FA,
		0x000000F0,
		0x000000F1,
		0x000000FC,
		0x000200F8,
		0x000000F1,
		0x00050041,
		0x0000000E,
		0x000000F2,
		0x000000BE,
		0x00000010,
		0x0004003D,
		0x00000006,
		0x000000F3,
		0x000000F2,
		0x0004007C,
		0x00000006,
		0x000000F5,
		0x00000148,
		0x00050041,
		0x0000000E,
		0x000000F6,
		0x000000BE,
		0x00000010,
		0x0004003D,
		0x00000006,
		0x000000F7,
		0x000000F6,
		0x00050080,
		0x00000006,
		0x000000F8,
		0x000000F5,
		0x000000F7,
		0x00070041,
		0x0000002D,
		0x000000F9,
		0x0000002A,
		0x0000002B,
		0x000000F8,
		0x0000002B,
		0x0004003D,
		0x00000023,
		0x000000FA,
		0x000000F9,
		0x00050041,
		0x0000005A,
		0x000000FB,
		0x00000050,
		0x000000F3,
		0x0003003E,
		0x000000FB,
		0x000000FA,
		0x000200F9,
		0x00000100,
		0x000200F8,
		0x000000FC,
		0x00050041,
		0x0000000E,
		0x000000FD,
		0x000000BE,
		0x00000010,
		0x0004003D,
		0x00000006,
		0x000000FE,
		0x000000FD,
		0x00050041,
		0x0000005A,
		0x000000FF,
		0x00000050,
		0x000000FE,
		0x0003003E,
		0x000000FF,
		0x00000036,
		0x000200F9,
		0x00000100,
		0x000200F8,
		0x00000100,
		0x000400E0,
		0x00000060,
		0x00000060,
		0x00000061,
		0x000200F9,
		0x00000101,
		0x000200F8,
		0x00000101,
		0x000700F5,
		0x00000023,
		0x0000014D,
		0x00000149,
		0x00000100,
		0x0000011E,
		0x0000011F,
		0x000700F5,
		0x00000015,
		0x0000014A,
		0x0000002B,
		0x00000100,
		0x00000121,
		0x0000011F,
		0x000400F6,
		0x00000122,
		0x0000011F,
		0x00000000,
		0x000200F9,
		0x00000102,
		0x000200F8,
		0x00000102,
		0x000500B1,
		0x0000001E,
		0x00000104,
		0x0000014A,
		0x00000069,
		0x000400FA,
		0x00000104,
		0x00000105,
		0x00000122,
		0x000200F8,
		0x00000105,
		0x00050041,
		0x0000005A,
		0x00000107,
		0x00000050,
		0x0000014A,
		0x0004003D,
		0x00000023,
		0x00000108,
		0x00000107,
		0x0003003E,
		0x000000CE,
		0x00000108,
		0x0008004F,
		0x0000006F,
		0x0000010A,
		0x00000108,
		0x00000108,
		0x00000000,
		0x00000001,
		0x00000002,
		0x0008004F,
		0x0000006F,
		0x0000010C,
		0x000000DD,
		0x000000DD,
		0x00000000,
		0x00000001,
		0x00000002,
		0x00050083,
		0x0000006F,
		0x0000010D,
		0x0000010A,
		0x0000010C,
		0x0005008E,
		0x0000006F,
		0x0000010F,
		0x0000010D,
		0x00000077,
		0x00050041,
		0x0000007B,
		0x00000110,
		0x000000CE,
		0x0000007A,
		0x0004003D,
		0x00000014,
		0x00000111,
		0x00000110,
		0x0005008E,
		0x0000006F,
		0x00000112,
		0x0000010F,
		0x00000111,
		0x00050094,
		0x00000014,
		0x00000115,
		0x0000010D,
		0x0000010D,
		0x00050081,
		0x00000014,
		0x00000116,
		0x00000115,
		0x00000082,
		0x0007000C,
		0x00000014,
		0x00000117,
		0x00000001,
		0x0000001A,
		0x00000116,
		0x00000084,
		0x00060050,
		0x0000006F,
		0x00000118,
		0x00000117,
		0x00000117,
		0x00000117,
		0x00050088,
		0x0000006F,
		0x00000119,
		0x00000112,
		0x00000118,
		0x0008004F,
		0x0000006F,
		0x0000011B,
		0x0000014D,
		0x0000014D,
		0x00000000,
		0x00000001,
		0x00000002,
		0x00050081,
		0x0000006F,
		0x0000011C,
		0x0000011B,
		0x00000119,
		0x0009004F,
		0x00000023,
		0x0000011E,
		0x0000014D,
		0x0000011C,
		0x00000004,
		0x00000005,
		0x00000006,
		0x00000003,
		0x000200F9,
		0x0000011F,
		0x000200F8,
		0x0000011F,
		0x00050080,
		0x00000015,
		0x00000121,
		0x0000014A,
		0x00000019,
		0x000200F9,
		0x00000101,
		0x000200F8,
		0x00000122,
		0x000400E0,
		0x00000060,
		0x00000060,
		0x00000061,
		0x000200F9,
		0x00000123,
		0x000200F8,
		0x00000123,
		0x00050080,
		0x00000015,
		0x00000125,
		0x00000148,
		0x0000008F,
		0x000200F9,
		0x000000E1,
		0x000200F8,
		0x00000126,
		0x00050041,
		0x00000093,
		0x00000128,
		0x00000018,
		0x0000002B,
		0x0004003D,
		0x00000014,
		0x00000129,
		0x00000128,
		0x0008004F,
		0x0000006F,
		0x0000012B,
		0x00000149,
		0x00000149,
		0x00000000,
		0x00000001,
		0x00000002,
		0x0005008E,
		0x0000006F,
		0x0000012C,
		0x0000012B,
		0x00000129,
		0x00070041,
		0x0000002D,
		0x0000012D,
		0x0000002A,
		0x0000002B,
		0x000000D3,
		0x00000019,
		0x0004003D,
		0x00000023,
		0x0000012E,
		0x0000012D,
		0x0008004F,
		0x0000006F,
		0x0000012F,
		0x0000012E,
		0x0000012E,
		0x00000000,
		0x00000001,
		0x00000002,
		0x00050081,
		0x0000006F,
		0x00000130,
		0x0000012F,
		0x0000012C,
		0x00070041,
		0x0000002D,
		0x00000131,
		0x0000002A,
		0x0000002B,
		0x000000D3,
		0x00000019,
		0x0004003D,
		0x00000023,
		0x00000132,
		0x00000131,
		0x0009004F,
		0x00000023,
		0x00000133,
		0x00000132,
		0x00000130,
		0x00000004,
		0x00000005,
		0x00000006,
		0x00000003,
		0x0003003E,
		0x00000131,
		0x00000133,
		0x00050041,
		0x00000093,
		0x00000135,
		0x00000018,
		0x0000002B,
		0x0004003D,
		0x00000014,
		0x00000136,
		0x00000135,
		0x00050085,
		0x00000014,
		0x00000137,
		0x000000A1,
		0x00000136,
		0x00080041,
		0x00000093,
		0x00000138,
		0x0000002A,
		0x0000002B,
		0x000000D3,
		0x00000019,
		0x0000007A,
		0x0004003D,
		0x00000014,
		0x00000139,
		0x00000138,
		0x00050081,
		0x00000014,
		0x0000013A,
		0x00000139,
		0x00000137,
		0x00080041,
		0x00000093,
		0x0000013B,
		0x0000002A,
		0x0000002B,
		0x000000D3,
		0x00000019,
		0x0000007A,
		0x0003003E,
		0x0000013B,
		0x0000013A,
		0x00080041,
		0x00000093,
		0x0000013D,
		0x0000002A,
		0x0000002B,
		0x000000D3,
		0x00000019,
		0x0000007A,
		0x0004003D,
		0x00000014,
		0x0000013E,
		0x0000013D,
		0x000500BA,
		0x0000001E,
		0x0000013F,
		0x0000013E,
		0x000000AC,
		0x000300F7,
		0x00000146,
		0x00000000,
		0x000400FA,
		0x0000013F,
		0x00000140,
		0x00000146,
		0x000200F8,
		0x00000140,
		0x00080041,
		0x00000093,
		0x00000142,
		0x0000002A,
		0x0000002B,
		0x000000D3,
		0x00000019,
		0x0000007A,
		0x0004003D,
		0x00000014,
		0x00000143,
		0x00000142,
		0x00050083,
		0x00000014,
		0x00000144,
		0x00000143,
		0x000000AC,
		0x00080041,
		0x00000093,
		0x00000145,
		0x0000002A,
		0x0000002B,
		0x000000D3,
		0x00000019,
		0x0000007A,
		0x0003003E,
		0x00000145,
		0x00000144,
		0x000200F9,
		0x00000146,
		0x000200F8,
		0x00000146,
		0x000200F9,
		0x00000147,
		0x000200F8,
		0x00000147,
		0x000100FD,
		0x00010038
    };

    return shader_src;
}