// gml_Object_oBossThePestOld_CleanUp_0 @ 0x140841170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossThePestOld_CleanUp_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  code *pcVar8;
  undefined1 **ppuVar9;
  undefined4 uVar11;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffdd0;
  ulonglong uVar12;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 *local_158;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined1 local_f0 [16];
  longlong local_e0;
  undefined1 local_d0 [16];
  longlong local_c0;
  undefined1 local_b0 [16];
  longlong local_a0;
  
  local_res18 = 0;
  local_140 = "gml_Script_anon@1163@gml_Object_oBossThePestOld_Other_76";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x35;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_f4 = 0xffffff;
  local_100 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_14c = 0;
  local_158 = &DAT_bff0000000000000;
  local_138 = 0x38;
  uStack_21c = 6;
  local_228 = local_res8;
  FUN_140e87440(&local_228,DAT_141a0cfc8,0x80000000,&local_100,
                (ulonglong)pcVar8 & 0xffffffffffffff00,
                in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_21c = 0;
  local_228 = (longlong *)0x4046800000000000;
  iVar3 = FUN_140e851f0(&local_100,&local_228,DAT_141955260,1);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if (0 < iVar3) {
    local_138 = 0x39;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_14c = 0;
    local_158 = (undefined1 *)0x3ff0000000000000;
  }
  local_138 = 0x3b;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_228 = (longlong *)CONCAT44(uRam00000001419e8dd4,_DAT_1419e8dd0);
  uStack_220 = uRam00000001419e8dd8;
  uStack_21c = uRam00000001419e8ddc;
  if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_228);
  local_130 = local_1b8;
  local_228 = (longlong *)CONCAT44(uRam00000001419e8d74,_DAT_1419e8d70);
  uStack_220 = uRam00000001419e8d78;
  uStack_21c = uRam00000001419e8d7c;
  if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_228);
  local_128 = local_1a8;
  uStack_21c = 0;
  local_228 = (longlong *)0x3ff0000000000000;
  iVar3 = FUN_140e851f0(&local_158,&local_228,DAT_141955260,0);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if (iVar3 == 0) {
    uStack_20c = 0;
    local_218 = 0x406c200000000000;
    puVar5 = &local_218;
    uVar7 = 1;
    local_res18 = 1;
  }
  else {
    uStack_21c = 0;
    local_228 = (longlong *)0x4073b00000000000;
    puVar5 = &local_228;
    uVar7 = 2;
    local_res18 = 2;
  }
  uVar1 = uStack_20c;
  uVar11 = uStack_21c;
  local_208 = *(undefined4 *)puVar5;
  uStack_204 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_200 = *(undefined4 *)(puVar5 + 1);
  uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_208);
  if (((uVar7 & 2) != 0) &&
     (uVar7 = uVar7 & 0xfffffffd, local_res18 = uVar7, (1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_228);
  }
  if (((uVar7 & 1) != 0) && (uVar7 = uVar7 & 0xfffffffe, (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_218);
  }
  local_120 = local_198;
  local_208 = (undefined4)DAT_1419df7b0;
  uStack_204 = DAT_1419df7b0._4_4_;
  uStack_200 = DAT_1419df7b8;
  uStack_1fc = DAT_1419df7bc;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_208);
  local_118 = local_188;
  ppuVar9 = &local_130;
  FUN_14044e5b0(local_res8,local_res10,&local_1f8,4,ppuVar9);
  uVar11 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
  local_138 = 0x3c;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_21c = 0xf;
  local_228 = (longlong *)0x10000020000007d;
  local_208 = 0x7d;
  uStack_204 = 0x1000002;
  uStack_200 = uStack_220;
  uStack_1fc = 0xf;
  if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_208);
  local_130 = local_1b8;
  uVar4 = CONCAT44(uVar11,DAT_141a07788);
  FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar4,&local_130);
  uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_138 = 0x3d;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_21c = 0xf;
  local_228 = (longlong *)0x10000020000007e;
  local_208 = 0x7e;
  uStack_204 = 0x1000002;
  uStack_200 = uStack_220;
  uStack_1fc = 0xf;
  if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_208);
  local_130 = local_1b8;
  local_208 = _DAT_1419e8dc0;
  uStack_204 = uRam00000001419e8dc4;
  uStack_200 = uRam00000001419e8dc8;
  uStack_1fc = uRam00000001419e8dcc;
  if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_208);
  local_128 = local_1a8;
  local_208 = _DAT_1419df7a0;
  uStack_204 = uRam00000001419df7a4;
  uStack_200 = uRam00000001419df7a8;
  uStack_1fc = uRam00000001419df7ac;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_208);
  local_120 = local_198;
  local_208 = _DAT_1419e8d60;
  uStack_204 = uRam00000001419e8d64;
  uStack_200 = uRam00000001419e8d68;
  uStack_1fc = uRam00000001419e8d6c;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_208);
  local_118 = local_188;
  local_208 = (undefined4)DAT_1419df7b0;
  uStack_204 = DAT_1419df7b0._4_4_;
  uStack_200 = DAT_1419df7b8;
  uStack_1fc = DAT_1419df7bc;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_208);
  local_110 = local_178;
  local_208 = _DAT_1419e8d90;
  uStack_204 = uRam00000001419e8d94;
  uStack_200 = uRam00000001419e8d98;
  uStack_1fc = uRam00000001419e8d9c;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_208);
  local_108 = local_168;
  ppuVar9 = &local_130;
  uVar10 = CONCAT44(uVar11,DAT_141a0a2e8);
  FUN_140e634e0(local_res8,local_res10,&local_1f8,6,uVar10,ppuVar9);
  local_138 = 0x3f;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_21c = 6;
  local_228 = local_res8;
  uVar12 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_1d8,uVar10,uVar12);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_21c = 6;
  local_228 = local_res8;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_1419fe158,0x80000000,&local_1e8,uVar10,uVar12 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_21c = 0;
  local_228 = (longlong *)0x4024000000000000;
  local_res18 = uVar7 | 8;
  FUN_140042560(&local_228,&local_158);
  uStack_20c = local_1cc;
  uStack_210 = local_1d0;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_218 = local_1d8;
  }
  else {
    FUN_1400419b0(&local_218,&local_1d8);
  }
  local_res18 = uVar7 | 0x18;
  FUN_1400460e0(&local_218,&local_228);
  local_208 = (undefined4)local_218;
  uStack_204 = local_218._4_4_;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_208);
  local_res18 = uVar7 | 8;
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_res18 = uVar7;
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_130 = local_1b8;
  uStack_20c = local_1dc;
  uStack_210 = local_1e0;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
    local_218 = local_1e8;
  }
  else {
    FUN_1400419b0(&local_218,&local_1e8);
  }
  local_res18 = uVar7 | 0x20;
  uStack_21c = 7;
  local_228 = (longlong *)CONCAT44(local_228._4_4_,0x10);
  FUN_1400462a0(&local_218,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_208 = (undefined4)local_218;
  uStack_204 = local_218._4_4_;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_208);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_128 = local_1a8;
  local_208 = _DAT_141dd6f18;
  uStack_204 = uRam0000000141dd6f1c;
  uStack_200 = uRam0000000141dd6f20;
  uStack_1fc = DAT_141dd6f24;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_208);
  local_120 = local_198;
  uStack_21c = 0xf;
  local_228 = (longlong *)0x10000000000004f;
  local_208 = 0x4f;
  uStack_204 = 0x1000000;
  uStack_200 = uStack_220;
  uStack_1fc = 0xf;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_208);
  local_118 = local_188;
  ppuVar9 = &local_130;
  uVar10 = CONCAT44(uVar11,DAT_141a0a7c8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1f8,4,uVar10,ppuVar9);
  iVar3 = FUN_140e63cb0(local_b0,&local_res8,&local_res10,uVar4);
  if (0 < iVar3) {
    do {
      local_138 = 0x41;
      uStack_21c = 0xf;
      local_228 = (longlong *)0x1000001000000b6;
      local_208 = 0xb6;
      uStack_204 = 0x1000001;
      uStack_200 = uStack_220;
      uStack_1fc = 0xf;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_208);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1c8);
      local_138 = 0x42;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      FUN_140e609c0(local_res8);
      local_218 = FUN_140e794b0(0,0);
      uStack_20c = 0;
      local_res18 = uVar7 | 0x40;
      FUN_140042560(&local_218,&local_158);
      if (&local_218 != puVar5) {
        local_208 = (undefined4)local_218;
        uStack_204 = local_218._4_4_;
        uStack_200 = uStack_210;
        uStack_1fc = uStack_20c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_208);
      }
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140e60910(1);
      local_138 = 0x43;
      puVar6 = (ulonglong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      uVar12 = FUN_140e794b0(0,0);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = uVar12 ^ 0x8000000000000000;
      cVar2 = FUN_140e643f0(local_b0,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_b0,&local_res8,&local_res10);
  local_138 = 0x47;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_21c = 6;
  local_228 = local_res8;
  uVar12 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_1d8,uVar10,uVar12);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_21c = 6;
  local_228 = local_res8;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_1419fe158,0x80000000,&local_1e8,uVar10,uVar12 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_21c = 0;
  local_228 = (longlong *)0x4030000000000000;
  local_res18 = uVar7 | 0x80;
  FUN_140042560(&local_228,&local_158);
  uStack_20c = local_1cc;
  uStack_210 = local_1d0;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_218 = local_1d8;
  }
  else {
    FUN_1400419b0(&local_218,&local_1d8);
  }
  local_res18 = uVar7 | 0x180;
  FUN_1400460e0(&local_218,&local_228);
  local_208 = (undefined4)local_218;
  uStack_204 = local_218._4_4_;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_208);
  local_res18 = uVar7 | 0x80;
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_res18 = uVar7;
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_130 = local_1b8;
  uStack_20c = local_1dc;
  uStack_210 = local_1e0;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
    local_218 = local_1e8;
  }
  else {
    FUN_1400419b0(&local_218,&local_1e8);
  }
  local_res18 = uVar7 | 0x200;
  uStack_21c = 7;
  local_228 = (longlong *)CONCAT44(local_228._4_4_,0x16);
  FUN_1400462a0(&local_218,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_208 = (undefined4)local_218;
  uStack_204 = local_218._4_4_;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_208);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_128 = local_1a8;
  local_208 = _DAT_141dd6f18;
  uStack_204 = uRam0000000141dd6f1c;
  uStack_200 = uRam0000000141dd6f20;
  uStack_1fc = DAT_141dd6f24;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_208);
  local_120 = local_198;
  uStack_21c = 0xf;
  local_228 = (longlong *)0x10000000000004f;
  local_208 = 0x4f;
  uStack_204 = 0x1000000;
  uStack_200 = uStack_220;
  uStack_1fc = 0xf;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_208);
  local_118 = local_188;
  ppuVar9 = &local_130;
  uVar10 = CONCAT44(uVar11,DAT_141a0a7c8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1f8,4,uVar10,ppuVar9);
  iVar3 = FUN_140e63cb0(local_d0,&local_res8,&local_res10,uVar4);
  if (0 < iVar3) {
    do {
      local_138 = 0x49;
      uStack_21c = 0xf;
      local_228 = (longlong *)0x1000001000000b6;
      local_208 = 0xb6;
      uStack_204 = 0x1000001;
      uStack_200 = uStack_220;
      uStack_1fc = 0xf;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_208);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1c8);
      local_138 = 0x4a;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      FUN_140e609c0(local_res8);
      local_218 = FUN_140e794b0(0,0);
      uStack_20c = 0;
      local_res18 = uVar7 | 0x400;
      FUN_140042560(&local_218,&local_158);
      if (&local_218 != puVar5) {
        local_208 = (undefined4)local_218;
        uStack_204 = local_218._4_4_;
        uStack_200 = uStack_210;
        uStack_1fc = uStack_20c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_208);
      }
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140e60910(1);
      local_138 = 0x4b;
      puVar6 = (ulonglong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      uVar12 = FUN_140e794b0(0,0);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = uVar12 ^ 0x8000000000000000;
      cVar2 = FUN_140e643f0(local_d0,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_d0,&local_res8,&local_res10);
  local_138 = 0x4f;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_21c = 6;
  local_228 = local_res8;
  uVar12 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_1d8,uVar10,uVar12);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_21c = 6;
  local_228 = local_res8;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_1419fe158,0x80000000,&local_1e8,uVar10,uVar12 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  uStack_21c = 0;
  local_228 = (longlong *)0x4036000000000000;
  local_res18 = uVar7 | 0x800;
  FUN_140042560(&local_228,&local_158);
  uStack_20c = local_1cc;
  uStack_210 = local_1d0;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_218 = local_1d8;
  }
  else {
    FUN_1400419b0(&local_218,&local_1d8);
  }
  local_res18 = uVar7 | 0x1800;
  FUN_1400460e0(&local_218,&local_228);
  local_208 = (undefined4)local_218;
  uStack_204 = local_218._4_4_;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_208);
  local_res18 = uVar7 | 0x800;
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_res18 = uVar7;
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_130 = local_1b8;
  uStack_20c = local_1dc;
  uStack_210 = local_1e0;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
    local_218 = local_1e8;
  }
  else {
    FUN_1400419b0(&local_218,&local_1e8);
  }
  local_res18 = uVar7 | 0x2000;
  uStack_21c = 7;
  local_228 = (longlong *)CONCAT44(local_228._4_4_,0x1a);
  FUN_1400462a0(&local_218,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_208 = (undefined4)local_218;
  uStack_204 = local_218._4_4_;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_208);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_128 = local_1a8;
  local_208 = _DAT_141dd6f18;
  uStack_204 = uRam0000000141dd6f1c;
  uStack_200 = uRam0000000141dd6f20;
  uStack_1fc = DAT_141dd6f24;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_208);
  local_120 = local_198;
  uStack_21c = 0xf;
  local_228 = (longlong *)0x10000000000004f;
  local_208 = 0x4f;
  uStack_204 = 0x1000000;
  uStack_200 = uStack_220;
  uStack_1fc = 0xf;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_208);
  local_118 = local_188;
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1f8,4,CONCAT44(uVar11,DAT_141a0a7c8),
                        &local_130);
  iVar3 = FUN_140e63cb0(local_f0,&local_res8,&local_res10,uVar4);
  if (0 < iVar3) {
    do {
      local_138 = 0x51;
      uStack_21c = 0xf;
      local_228 = (longlong *)0x1000001000000b6;
      local_208 = 0xb6;
      uStack_204 = 0x1000001;
      uStack_200 = uStack_220;
      uStack_1fc = 0xf;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_208);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1c8);
      local_138 = 0x52;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      FUN_140e609c0(local_res8);
      local_218 = FUN_140e794b0(0,0);
      uStack_20c = 0;
      local_res18 = uVar7 | 0x4000;
      FUN_140042560(&local_218,&local_158);
      if (&local_218 != puVar5) {
        local_208 = (undefined4)local_218;
        uStack_204 = local_218._4_4_;
        uStack_200 = uStack_210;
        uStack_1fc = uStack_20c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_208);
      }
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140e60910(1);
      local_138 = 0x53;
      puVar6 = (ulonglong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      uVar10 = FUN_140e794b0(0,0);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = uVar10 ^ 0x8000000000000000;
      cVar2 = FUN_140e643f0(local_f0,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_f0,&local_res8,&local_res10);
  if (local_e0 != 0) {
    FUN_140e4cd60();
    local_e0 = 0;
  }
  if (local_c0 != 0) {
    FUN_140e4cd60();
    local_c0 = 0;
  }
  if (local_a0 != 0) {
    FUN_140e4cd60();
    local_a0 = 0;
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_1b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

