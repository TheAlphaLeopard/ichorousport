// gml_Object_oCultist_Create_0 @ 0x1408db2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCultist_Create_0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *local_res8;
  longlong *local_res10;
  code *pcVar10;
  undefined4 uVar11;
  undefined1 **in_stack_fffffffffffffd10;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined1 local_2b8 [12];
  byte local_2ac;
  undefined1 local_2a8 [12];
  byte local_29c;
  undefined1 local_298 [12];
  byte local_28c;
  undefined1 local_288 [12];
  byte local_27c;
  undefined1 local_278 [12];
  byte local_26c;
  undefined1 local_268 [12];
  byte local_25c;
  undefined1 local_258 [12];
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_150;
  int local_144;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_170 = "gml_Object_oCultIntro_Alarm_0";
  local_168 = 0;
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  pcVar10 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_2b8,0x10,0x14,FUN_1400424d0,FUN_140041b30);
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_168 = 2;
  uStack_2cc = 0xf;
  local_2d8 = (longlong *)0x100000000000025;
  iVar3 = FUN_140e63cb0(local_48,&local_res8,&local_res10,&local_2d8);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if (0 < iVar3) {
    do {
      local_168 = 4;
      puVar4 = (undefined8 *)(**(code **)(*local_res10 + 0x10))(local_res10,DAT_141a45ac8);
      uStack_2cc = 6;
      local_2d8 = local_res8;
      in_stack_fffffffffffffd10 =
           (undefined1 **)((ulonglong)in_stack_fffffffffffffd10 & 0xffffffffffffff00);
      pcVar10 = (code *)((ulonglong)pcVar10 & 0xffffffffffffff00);
      FUN_140e87440(&local_2d8,DAT_141a1f580,0x80000000,&local_138,pcVar10,in_stack_fffffffffffffd10
                   );
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      FUN_140e609c0(local_res10);
      if (&local_138 != puVar4) {
        local_2e8 = (undefined4)local_138;
        uStack_2e4 = local_138._4_4_;
        uStack_2e0 = uStack_130;
        uStack_2dc = uStack_12c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_2e8);
      }
      FUN_140e60910(1);
      cVar2 = FUN_140e643f0(local_48,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_48,&local_res8,&local_res10);
  local_168 = 8;
  uStack_2cc = 0xf;
  local_2d8 = (longlong *)0x100000000000025;
  local_2e8 = 0x25;
  uStack_2e4 = 0x1000000;
  uStack_2e0 = uStack_2d0;
  uStack_2dc = 0xf;
  if ((1 << ((byte)_local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_2e8);
  local_128 = local_2b8;
  FUN_140edd0e0(local_res8,local_res10,1,&local_128);
  local_168 = 10;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a45ac8);
  local_154 = *(undefined4 *)((longlong)puVar4 + 0xc);
  local_158 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
    local_160 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_160,puVar4);
  }
  local_7c = 0xf;
  local_88 = 0x100000000000026;
  local_68 = 0xf;
  local_74 = 0x100000000000032;
  local_64 = 1;
  local_54 = 0xf;
  local_60 = 0x10000000000002a;
  local_50 = 2;
  uVar8 = 0;
  do {
    iVar3 = FUN_140e851f0(local_48 + (longlong)(int)uVar8 * 0x14 + -0x40,&local_160,DAT_141955260,0)
    ;
    if (iVar3 == 0) {
      iVar3 = *(int *)(local_48 + (longlong)(int)uVar8 * 0x14 + -0x30);
      bVar1 = (byte)local_2bc;
      if (iVar3 == 0) {
        local_168 = 0xe;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        uVar11 = (undefined4)((ulonglong)pcVar10 >> 0x20);
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        puVar5 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a58320);
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x1000001000000c3;
        local_2e8 = 0xc3;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2b8);
        }
        FUN_140041b80(local_2b8,&local_2e8);
        local_128 = local_2b8;
        local_2e8 = _DAT_141dc6cf0;
        uStack_2e4 = uRam0000000141dc6cf4;
        uStack_2e0 = uRam0000000141dc6cf8;
        uStack_2dc = uRam0000000141dc6cfc;
        if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2a8);
        }
        FUN_140041b80(local_2a8,&local_2e8);
        local_120 = local_2a8;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x1000001000000c3;
        local_2e8 = 0xc3;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_298);
        }
        FUN_140041b80(local_298,&local_2e8);
        local_118 = local_298;
        local_2e8 = _DAT_1419e9c20;
        uStack_2e4 = uRam00000001419e9c24;
        uStack_2e0 = uRam00000001419e9c28;
        uStack_2dc = uRam00000001419e9c2c;
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_288);
        }
        FUN_140041b80(local_288,&local_2e8);
        local_110 = local_288;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x1000001000000c3;
        local_2e8 = 0xc3;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2e8);
        local_108 = local_278;
        local_2e8 = _DAT_1419e9c20;
        uStack_2e4 = uRam00000001419e9c24;
        uStack_2e0 = uRam00000001419e9c28;
        uStack_2dc = uRam00000001419e9c2c;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        FUN_140041b80(local_268,&local_2e8);
        local_100 = local_268;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x1000001000000c3;
        local_2e8 = 0xc3;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_2e8);
        local_f8 = local_258;
        local_2e8 = _DAT_1419e9c00;
        uStack_2e4 = uRam00000001419e9c04;
        uStack_2e0 = uRam00000001419e9c08;
        uStack_2dc = uRam00000001419e9c0c;
        if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_248);
        }
        FUN_140041b80(local_248,&local_2e8);
        local_f0 = local_248;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x1000001000000c3;
        local_2e8 = 0xc3;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_238);
        }
        FUN_140041b80(local_238,&local_2e8);
        local_e8 = local_238;
        local_2e8 = _DAT_1419e9c00;
        uStack_2e4 = uRam00000001419e9c04;
        uStack_2e0 = uRam00000001419e9c08;
        uStack_2dc = uRam00000001419e9c0c;
        if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,&local_2e8);
        local_e0 = local_228;
        FUN_140e609c0(local_res8);
        uVar9 = 10;
      }
      else if (iVar3 == 1) {
        local_168 = 0x1c;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        uVar11 = (undefined4)((ulonglong)pcVar10 >> 0x20);
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        puVar5 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a58320);
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000348;
        local_2e8 = 0x348;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2b8);
        }
        FUN_140041b80(local_2b8,&local_2e8);
        local_128 = local_2b8;
        local_2e8 = _DAT_141dc6cf0;
        uStack_2e4 = uRam0000000141dc6cf4;
        uStack_2e0 = uRam0000000141dc6cf8;
        uStack_2dc = uRam0000000141dc6cfc;
        if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2a8);
        }
        FUN_140041b80(local_2a8,&local_2e8);
        local_120 = local_2a8;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000349;
        local_2e8 = 0x349;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_298);
        }
        FUN_140041b80(local_298,&local_2e8);
        local_118 = local_298;
        local_2e8 = _DAT_141dc6cf0;
        uStack_2e4 = uRam0000000141dc6cf4;
        uStack_2e0 = uRam0000000141dc6cf8;
        uStack_2dc = uRam0000000141dc6cfc;
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_288);
        }
        FUN_140041b80(local_288,&local_2e8);
        local_110 = local_288;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x10000010000034a;
        local_2e8 = 0x34a;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2e8);
        local_108 = local_278;
        local_2e8 = _DAT_141dc6cf0;
        uStack_2e4 = uRam0000000141dc6cf4;
        uStack_2e0 = uRam0000000141dc6cf8;
        uStack_2dc = uRam0000000141dc6cfc;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        FUN_140041b80(local_268,&local_2e8);
        local_100 = local_268;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x10000010000034a;
        local_2e8 = 0x34a;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_2e8);
        local_f8 = local_258;
        local_2e8 = _DAT_141dc6cf0;
        uStack_2e4 = uRam0000000141dc6cf4;
        uStack_2e0 = uRam0000000141dc6cf8;
        uStack_2dc = uRam0000000141dc6cfc;
        if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_248);
        }
        FUN_140041b80(local_248,&local_2e8);
        local_f0 = local_248;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x10000010000034b;
        local_2e8 = 0x34b;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_238);
        }
        FUN_140041b80(local_238,&local_2e8);
        local_e8 = local_238;
        local_2e8 = _DAT_141dc6cf0;
        uStack_2e4 = uRam0000000141dc6cf4;
        uStack_2e0 = uRam0000000141dc6cf8;
        uStack_2dc = uRam0000000141dc6cfc;
        if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,&local_2e8);
        local_e0 = local_228;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x10000010000034b;
        local_2e8 = 0x34b;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_218);
        }
        FUN_140041b80(local_218,&local_2e8);
        local_2e8 = _DAT_141dc6cf0;
        uStack_2e4 = uRam0000000141dc6cf4;
        uStack_2e0 = uRam0000000141dc6cf8;
        uStack_2dc = uRam0000000141dc6cfc;
        local_d8 = local_218;
        if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_208);
        }
        FUN_140041b80(local_208,&local_2e8);
        local_d0 = local_208;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x10000010000034b;
        local_2e8 = 0x34b;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1f8);
        }
        FUN_140041b80(local_1f8,&local_2e8);
        local_c8 = local_1f8;
        local_2e8 = _DAT_141dc6cf0;
        uStack_2e4 = uRam0000000141dc6cf4;
        uStack_2e0 = uRam0000000141dc6cf8;
        uStack_2dc = uRam0000000141dc6cfc;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_2e8);
        local_c0 = local_1e8;
        FUN_140e609c0(local_res8);
        uVar9 = 0xe;
      }
      else {
        if (iVar3 != 2) break;
        local_168 = 0x2b;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        uVar11 = (undefined4)((ulonglong)pcVar10 >> 0x20);
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        puVar5 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a58320);
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000319;
        local_2e8 = 0x319;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2b8);
        }
        FUN_140041b80(local_2b8,&local_2e8);
        local_128 = local_2b8;
        local_2e8 = _DAT_141dc6cf0;
        uStack_2e4 = uRam0000000141dc6cf4;
        uStack_2e0 = uRam0000000141dc6cf8;
        uStack_2dc = uRam0000000141dc6cfc;
        if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_2a8);
        }
        FUN_140041b80(local_2a8,&local_2e8);
        local_120 = local_2a8;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000319;
        local_2e8 = 0x319;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_298);
        }
        FUN_140041b80(local_298,&local_2e8);
        local_118 = local_298;
        local_2e8 = _DAT_1419e9c20;
        uStack_2e4 = uRam00000001419e9c24;
        uStack_2e0 = uRam00000001419e9c28;
        uStack_2dc = uRam00000001419e9c2c;
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_288);
        }
        FUN_140041b80(local_288,&local_2e8);
        local_110 = local_288;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000319;
        local_2e8 = 0x319;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2e8);
        local_108 = local_278;
        local_2e8 = _DAT_1419e9c20;
        uStack_2e4 = uRam00000001419e9c24;
        uStack_2e0 = uRam00000001419e9c28;
        uStack_2dc = uRam00000001419e9c2c;
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        FUN_140041b80(local_268,&local_2e8);
        local_100 = local_268;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000319;
        local_2e8 = 0x319;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_2e8);
        local_f8 = local_258;
        local_2e8 = _DAT_1419e9c00;
        uStack_2e4 = uRam00000001419e9c04;
        uStack_2e0 = uRam00000001419e9c08;
        uStack_2dc = uRam00000001419e9c0c;
        if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_248);
        }
        FUN_140041b80(local_248,&local_2e8);
        local_f0 = local_248;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000319;
        local_2e8 = 0x319;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_238);
        }
        FUN_140041b80(local_238,&local_2e8);
        local_e8 = local_238;
        local_2e8 = _DAT_1419e9c00;
        uStack_2e4 = uRam00000001419e9c04;
        uStack_2e0 = uRam00000001419e9c08;
        uStack_2dc = uRam00000001419e9c0c;
        if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,&local_2e8);
        local_e0 = local_228;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000319;
        local_2e8 = 0x319;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_218);
        }
        FUN_140041b80(local_218,&local_2e8);
        local_2e8 = _DAT_1419e9c10;
        uStack_2e4 = uRam00000001419e9c14;
        uStack_2e0 = uRam00000001419e9c18;
        uStack_2dc = uRam00000001419e9c1c;
        local_d8 = local_218;
        if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_208);
        }
        FUN_140041b80(local_208,&local_2e8);
        local_d0 = local_208;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000319;
        local_2e8 = 0x319;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1f8);
        }
        FUN_140041b80(local_1f8,&local_2e8);
        local_c8 = local_1f8;
        local_2e8 = _DAT_1419e9c40;
        uStack_2e4 = uRam00000001419e9c44;
        uStack_2e0 = uRam00000001419e9c48;
        uStack_2dc = uRam00000001419e9c4c;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_2e8);
        local_c0 = local_1e8;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000319;
        local_2e8 = 0x319;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_2e8);
        local_b8 = local_1d8;
        local_2e8 = _DAT_1419e9c40;
        uStack_2e4 = uRam00000001419e9c44;
        uStack_2e0 = uRam00000001419e9c48;
        uStack_2dc = uRam00000001419e9c4c;
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_2e8);
        local_b0 = local_1c8;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000319;
        local_2e8 = 0x319;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_2e8);
        local_a8 = local_1b8;
        local_2e8 = _DAT_1419e9c30;
        uStack_2e4 = uRam00000001419e9c34;
        uStack_2e0 = uRam00000001419e9c38;
        uStack_2dc = uRam00000001419e9c3c;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_2e8);
        local_a0 = local_1a8;
        uStack_2cc = 0xf;
        local_2d8 = (longlong *)0x100000100000319;
        local_2e8 = 0x319;
        uStack_2e4 = 0x1000001;
        uStack_2e0 = uStack_2d0;
        uStack_2dc = 0xf;
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_2e8);
        local_98 = local_198;
        local_2e8 = _DAT_1419e9bf0;
        uStack_2e4 = uRam00000001419e9bf4;
        uStack_2e0 = uRam00000001419e9bf8;
        uStack_2dc = uRam00000001419e9bfc;
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        FUN_140041b80(local_188,&local_2e8);
        local_90 = local_188;
        FUN_140e609c0(local_res8);
        uVar9 = 0x14;
      }
      in_stack_fffffffffffffd10 = &local_128;
      pcVar10 = (code *)CONCAT44(uVar11,DAT_1419fdca8);
      puVar6 = (undefined4 *)
               FUN_140e634e0(local_res8,local_res10,&local_2c8,uVar9,pcVar10,
                             in_stack_fffffffffffffd10);
      if (puVar6 != puVar5) {
        local_2e8 = *puVar6;
        uStack_2e4 = puVar6[1];
        uStack_2e0 = puVar6[2];
        uStack_2dc = puVar6[3];
        if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_2e8);
      }
      FUN_140e60910(1);
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 3);
  local_168 = 0x3d;
  plVar7 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a58340);
  uStack_2cc = 0xf;
  local_2d8 = (longlong *)0x100000000000070;
  FUN_140e87440(&local_2d8,DAT_141a58320,0x80000000,&local_150,
                (ulonglong)pcVar10 & 0xffffffffffffff00,
                (ulonglong)in_stack_fffffffffffffd10 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  FUN_140e609c0(local_res8);
  iVar3 = 0;
  if ((local_144 == 2) && (local_150 != 0)) {
    iVar3 = *(int *)(local_150 + 0x24);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar7);
  }
  *(undefined4 *)((longlong)plVar7 + 0xc) = 10;
  *plVar7 = (longlong)iVar3 / 2;
  FUN_140e60910(1);
  _eh_vector_destructor_iterator_(&local_88,0x14,3,FUN_1400662d0);
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if (local_38 != 0) {
    FUN_140e4cd60();
    local_38 = 0;
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_2b8,0x10,0x14,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return;
}

