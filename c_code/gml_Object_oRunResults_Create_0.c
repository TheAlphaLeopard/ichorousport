// gml_Object_oRunResults_Create_0 @ 0x140d50850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRunResults_Create_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined4 uVar18;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  char *local_2c0;
  undefined4 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  byte local_27c;
  undefined8 local_278;
  byte local_26c;
  double local_268;
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
  double local_1c8;
  uint local_1bc;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  double *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  
  local_2c0 = "gml_Object_oRunResults_Create_0";
  local_2b8 = 0;
  local_2c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2c8;
  _eh_vector_constructor_iterator_(&local_288,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ca0);
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57d00);
  local_14c = 0xffffff;
  local_158 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  local_ac = 0xffffff;
  local_b8 = 0;
  uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57bf0);
  uVar9 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c80);
  local_d8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57d30);
  local_78 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c90);
  local_148 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c00);
  local_fc = 0xffffff;
  local_108 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_30c = 0xffffff;
  local_318 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_2b8 = 2;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0;
  local_2b8 = 4;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0;
  local_2b8 = 6;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a576d0);
  FUN_140e609c0(param_1);
  puVar11 = (undefined8 *)
            FUN_140e8da20(&local_88,param_1,3,&DAT_1419ed9a0,&DAT_141dc7650,&DAT_1419ed9c0);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 7;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57770);
  FUN_140e609c0(param_1);
  puVar11 = (undefined8 *)
            FUN_140e8da20(&local_98,param_1,3,&DAT_1419ed9b0,&DAT_141dc7650,&DAT_1419ed9e0);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 8;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a573c0);
  FUN_140e609c0(param_1);
  uVar18 = 1;
  puVar11 = (undefined8 *)
            FUN_140e8da20(&local_a8,param_1,3,&DAT_141dc7650,&DAT_141dc7650,&DAT_141dc7650);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 10;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a575e0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0x4056800000000000;
  local_2b8 = 0xb;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a577f0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0x3fa999999999999a;
  local_2b8 = 0xc;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a574d0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0x3fe3333333333333;
  local_2b8 = 0xd;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57410);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0x3fe199999999999a;
  local_2b8 = 0xe;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57550);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0x3fe4cccccccccccd;
  local_2b8 = 0xf;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57470);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0;
  local_2b8 = 0x10;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57650);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0;
  local_2b8 = 0x12;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57700);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb4dc,_DAT_141ddb4d8);
  uStack_2a0 = CONCAT44(DAT_141ddb4e4,uRam0000000141ddb4e0);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar18,DAT_141a04778);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_318,2,uVar12,&local_1b8);
  uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x13;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a576c0);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb3bc,_DAT_141ddb3b8);
  uStack_2a0 = CONCAT44(DAT_141ddb3c4,uRam0000000141ddb3c0);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar18,DAT_141a04778);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_318,2,uVar12,&local_1b8);
  uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x14;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57750);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb44c,_DAT_141ddb448);
  uStack_2a0 = CONCAT44(DAT_141ddb454,uRam0000000141ddb450);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar18,DAT_141a04778);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_318,2,uVar12,&local_1b8);
  uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x15;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57670);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb50c,_DAT_141ddb508);
  uStack_2a0 = CONCAT44(DAT_141ddb514,uRam0000000141ddb510);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar18,DAT_141a04778);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_318,2,uVar12,&local_1b8);
  uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x16;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a576b0);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb35c,_DAT_141ddb358);
  uStack_2a0 = CONCAT44(DAT_141ddb364,uRam0000000141ddb360);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar18,DAT_141a04778);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_318,2,uVar12,&local_1b8);
  uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x17;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a577c0);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb53c,_DAT_141ddb538);
  uStack_2a0 = CONCAT44(DAT_141ddb544,uRam0000000141ddb540);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar18,DAT_141a04778);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_318,2,uVar12,&local_1b8);
  uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x18;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57780);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb45c,_DAT_141ddb458);
  uStack_2a0 = CONCAT44(DAT_141ddb464,uRam0000000141ddb460);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar18,DAT_141a04778);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_318,2,uVar12,&local_1b8);
  uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x19;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a577d0);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb43c,_DAT_141ddb438);
  uStack_2a0 = CONCAT44(DAT_141ddb444,uRam0000000141ddb440);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar18,DAT_141a04778);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_318,2,uVar12,&local_1b8);
  uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x1a;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57640);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb38c,_DAT_141ddb388);
  uStack_2a0 = CONCAT44(DAT_141ddb394,uRam0000000141ddb390);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar18,DAT_141a04778);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_318,2,uVar12,&local_1b8);
  uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x1b;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57740);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb3fc,_DAT_141ddb3f8);
  uStack_2a0 = CONCAT44(DAT_141ddb404,uRam0000000141ddb400);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar18,DAT_141a04778);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_318,2,uVar12,&local_1b8);
  uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x1c;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57580);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb51c,_DAT_141ddb518);
  uStack_2a0 = CONCAT44(DAT_141ddb524,uRam0000000141ddb520);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar18,DAT_141a04778);
  puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_318,2,uVar12,&local_1b8);
  uVar18 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x1d;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a577a0);
  _uStack_2e0 = CONCAT44(0xf,uStack_2e0);
  local_2e8 = 0x100000800000017;
  local_2a8 = 0x100000800000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  local_2a8 = CONCAT44(uRam0000000141ddb4fc,_DAT_141ddb4f8);
  uStack_2a0 = CONCAT44(DAT_141ddb504,uRam0000000141ddb500);
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2a8);
  local_1b0 = &local_278;
  FUN_140e609c0(param_1);
  puVar11 = (undefined8 *)
            FUN_140e634e0(param_1,param_2,&local_318,2,CONCAT44(uVar18,DAT_141a04778),&local_1b8);
  if (puVar11 != puVar10) {
    local_2a8 = *puVar11;
    uStack_2a0 = puVar11[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_2a8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x1f;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe018);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0;
  local_2b8 = 0x20;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe038);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = &DAT_bff0000000000000;
  local_2b8 = 0x21;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdf68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar10);
  }
  *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
  *puVar10 = 0;
  local_2b8 = 0x22;
  _uStack_2e0 = CONCAT44(0xd,uStack_2e0);
  local_2e8 = 0;
  if (&local_2e8 != puVar5) {
    local_2a8 = 0;
    uStack_2a0 = CONCAT44(0xd,uStack_2e0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_2a8);
  }
  local_2b8 = 0x23;
  _uStack_2e0 = CONCAT44(0xd,uStack_2e0);
  local_2e8 = 0;
  if (&local_2e8 != puVar6) {
    local_2a8 = 0;
    uStack_2a0 = CONCAT44(0xd,uStack_2e0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_2a8);
  }
  local_2b8 = 0x24;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  gml_Script_anon_4991_DefineTrinkets_TRINKETSINIT(param_1,param_2,&local_318,0,0);
  local_2b8 = 0x26;
  if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_318 = 0;
  local_310 = 0;
  local_30c = 5;
  uStack_2dc = 0xf;
  local_2e8 = 0x100000200000017;
  local_2a8 = 0x100000200000017;
  uStack_2a0 = CONCAT44(0xf,uStack_2e0);
  if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2a8);
  local_1b8 = &local_288;
  ppuVar16 = &local_1b8;
  gml_Script_jb_track_is_paused(param_1,param_2,&local_318,1,ppuVar16);
  local_2b8 = 0x29;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe058);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_2e8,gml_Object_oRunResults_Alarm_0,0);
  if (&local_2e8 != puVar5) {
    local_2a8 = local_2e8;
    uStack_2a0 = CONCAT44(uStack_2dc,uStack_2e0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_2a8);
  }
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  FUN_140e60910(1);
  local_2b8 = 0x3e;
  uStack_2dc = 0xd;
  local_2e8 = 0;
  local_2a8 = 0;
  uStack_2a0._0_4_ = uStack_2e0;
  uStack_2a0._4_4_ = 0xd;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_2a8);
  local_2b8 = 0x3f;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1bc = 0;
  local_1c8 = 0.0;
  bVar1 = true;
  bVar13 = 0xff;
  do {
    uVar18 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
    if (!bVar1) {
      local_2b8 = 0x3f;
      uVar3 = local_1bc & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_1c8 = (double)CONCAT44(local_1c8._4_4_,local_1c8._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_1c8 = (double)((longlong)local_1c8 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_1bc = 0;
              goto LAB_140d520c4;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1c8,&local_1c8);
          }
          goto LAB_140d520d0;
        }
        local_1c8 = (double)FUN_140e4b060(&local_1c8);
        local_1bc = 0;
      }
LAB_140d520c4:
      local_1c8 = local_1c8 + 1.0;
    }
LAB_140d520d0:
    bVar1 = false;
    if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    local_318 = 0;
    local_310 = 0;
    local_30c = 5;
    if (puVar7 != &local_288) {
      local_308 = (undefined8 *)*puVar7;
      uStack_300 = (char *)puVar7[1];
      if ((1 << ((byte)_local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_308);
    }
    local_1b8 = &local_288;
    ppuVar16 = &local_1b8;
    uVar14 = CONCAT44(uVar18,DAT_1419f5e98);
    uVar12 = FUN_140e634e0(param_1,param_2,&local_318,1,uVar14,ppuVar16);
    uVar18 = (undefined4)((ulonglong)uVar14 >> 0x20);
    iVar4 = FUN_140e851f0(&local_1c8,uVar12,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
      local_2b8 = 0x45;
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_318 = 0;
      local_310 = 0;
      local_30c = 5;
      local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb36c,_DAT_141ddb368);
      uStack_300 = (char *)CONCAT44(DAT_141ddb374,uRam0000000141ddb370);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_308);
      local_1b8 = &local_288;
      local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_308);
      local_1b0 = &local_278;
      uVar12 = gml_Script____struct___106(param_1,param_2,&local_318,2,&local_1b8);
      cVar2 = FUN_140e491e0(uVar12);
      if (cVar2 == '\0') {
        local_2b8 = 0x47;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb36c,_DAT_141ddb368);
        uStack_300 = (char *)CONCAT44(DAT_141ddb374,uRam0000000141ddb370);
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_308);
        local_1a8 = &local_268;
        local_308 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_300 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_308);
        local_1a0 = local_258;
        uStack_300 = "gml_Script_savedata_set";
        local_308 = DAT_141dc7a50;
        DAT_141dc7a50 = &local_308;
        local_2f8 = 8;
        uVar12 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
        local_2cc = 5;
        local_2d8 = 0;
        local_2f8 = 10;
        FUN_140e98ef0(param_1,param_2,uVar12,local_1a8,local_1a0);
        DAT_141dc7a50 = local_308;
        local_2b8 = 0x48;
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_318 = 0;
        local_310 = 0;
        local_30c = 5;
        local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb48c,_DAT_141ddb488);
        uStack_300 = (char *)CONCAT44(DAT_141ddb494,uRam0000000141ddb490);
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_308);
        local_1b8 = &local_288;
        gml_Script_steam_track_death_count(param_1,param_2,&local_318,1,&local_1b8);
      }
      local_2b8 = 0x4b;
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_318 = 0;
      local_310 = 0;
      local_30c = 5;
      local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb4cc,_DAT_141ddb4c8);
      uStack_300 = (char *)CONCAT44(DAT_141ddb4d4,uRam0000000141ddb4d0);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_308);
      local_1b8 = &local_288;
      local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_308);
      local_1b0 = &local_278;
      uVar12 = gml_Script____struct___106(param_1,param_2,&local_318,2,&local_1b8);
      cVar2 = FUN_140e491e0(uVar12);
      if (cVar2 == '\0') {
        uStack_2dc = 0;
        local_2e8 = 0x4000000000000000;
        uVar3 = FUN_140e851f0(uVar8,&local_2e8,DAT_141955260,1);
        if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        if (uVar3 < 0x80000000) {
          local_2b8 = 0x4d;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb4cc,_DAT_141ddb4c8);
          uStack_300 = (char *)CONCAT44(DAT_141ddb4d4,uRam0000000141ddb4d0);
          if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140041b80(&local_268,&local_308);
          local_1a8 = &local_268;
          local_308 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
          uStack_300 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
          if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_308);
          local_1a0 = local_258;
          uStack_300 = "gml_Script_savedata_set";
          local_308 = DAT_141dc7a50;
          DAT_141dc7a50 = &local_308;
          local_2f8 = 8;
          uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
          local_2cc = 5;
          local_2d8 = 0;
          local_2f8 = 10;
          FUN_140e98ef0(param_1,param_2,uVar8,local_1a8,local_1a0);
          DAT_141dc7a50 = local_308;
          local_2b8 = 0x4e;
          if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_318 = 0;
          local_310 = 0;
          local_30c = 5;
          local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb49c,_DAT_141ddb498);
          uStack_300 = (char *)CONCAT44(DAT_141ddb4a4,uRam0000000141ddb4a0);
          if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_308);
          local_1b8 = &local_288;
          gml_Script_steam_track_death_count(param_1,param_2,&local_318,1,&local_1b8);
        }
      }
      local_2b8 = 0x51;
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_318 = 0;
      local_310 = 0;
      local_30c = 5;
      local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb3ac,_DAT_141ddb3a8);
      uStack_300 = (char *)CONCAT44(DAT_141ddb3b4,uRam0000000141ddb3b0);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_308);
      local_1b8 = &local_288;
      local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_308);
      local_1b0 = &local_278;
      uVar8 = gml_Script____struct___106(param_1,param_2,&local_318,2,&local_1b8);
      cVar2 = FUN_140e491e0(uVar8);
      if (cVar2 == '\0') {
        local_2b8 = 0x57;
        uStack_2dc = 0;
        local_2e8 = 0;
        iVar4 = FUN_140e851f0(uVar9,&local_2e8,DAT_141955260,1);
        if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        if (0 < iVar4) {
          uVar3 = FUN_140e851f0(local_d8,uVar9,DAT_141955260,1);
          uVar8 = local_78;
          if (uVar3 < 0x80000000) {
            local_cc = 0;
            local_d8 = 0;
            iVar4 = FUN_140e851f0(local_78,&local_d8,DAT_141955260,1);
            if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d8);
            }
            if (((0 < iVar4) &&
                (iVar4 = FUN_140e851f0(local_148,uVar8,DAT_141955260,1), iVar4 != -2)) &&
               (-1 < iVar4)) {
              local_2b8 = 0x5a;
              if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2d8);
              }
              local_2d8 = 0;
              local_2d0 = 0;
              local_2cc = 5;
              local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb3ac,_DAT_141ddb3a8);
              uStack_300 = (char *)CONCAT44(DAT_141ddb3b4,uRam0000000141ddb3b0);
              if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_268);
              }
              FUN_140041b80(&local_268,&local_308);
              local_1a8 = &local_268;
              local_308 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
              uStack_300 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
              if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_258);
              }
              FUN_140041b80(local_258,&local_308);
              local_1a0 = local_258;
              uStack_300 = "gml_Script_savedata_set";
              local_308 = DAT_141dc7a50;
              DAT_141dc7a50 = &local_308;
              local_2f8 = 8;
              uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
              local_2cc = 5;
              local_2d8 = 0;
              local_2f8 = 10;
              FUN_140e98ef0(param_1,param_2,uVar8,local_1a8,local_1a0);
              DAT_141dc7a50 = local_308;
              local_2b8 = 0x5b;
              if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_318);
              }
              local_318 = 0;
              local_310 = 0;
              local_30c = 5;
              local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb52c,_DAT_141ddb528);
              uStack_300 = (char *)CONCAT44(DAT_141ddb534,uRam0000000141ddb530);
              if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              FUN_140041b80(&local_288,&local_308);
              local_1b8 = &local_288;
              gml_Script_steam_track_death_count(param_1,param_2,&local_318,1,&local_1b8);
            }
          }
        }
      }
      local_2b8 = 0x5f;
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_318 = 0;
      local_310 = 0;
      local_30c = 5;
      local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb4bc,_DAT_141ddb4b8);
      uStack_300 = (char *)CONCAT44(DAT_141ddb4c4,uRam0000000141ddb4c0);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_308);
      local_1b8 = &local_288;
      local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_308);
      local_1b0 = &local_278;
      uVar8 = gml_Script____struct___106(param_1,param_2,&local_318,2,&local_1b8);
      cVar2 = FUN_140e491e0(uVar8);
      if (cVar2 == '\0') {
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb47c,_DAT_141ddb478);
        uStack_300 = (char *)CONCAT44(DAT_141ddb484,uRam0000000141ddb480);
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_308);
        local_1a8 = &local_268;
        local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_308);
        local_1a0 = local_258;
        uVar8 = gml_Script____struct___106(param_1,param_2,&local_2d8,2,&local_1a8);
        cVar2 = FUN_140e491e0(uVar8);
        if (cVar2 != '\0') {
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          local_118 = 0;
          local_110 = 0;
          local_10c = 5;
          local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb36c,_DAT_141ddb368);
          uStack_300 = (char *)CONCAT44(DAT_141ddb374,uRam0000000141ddb370);
          if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_248);
          }
          FUN_140041b80(local_248,&local_308);
          local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
          uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
          local_198 = local_248;
          if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_308);
          local_190 = local_238;
          uVar8 = gml_Script____struct___106(param_1,param_2,&local_118,2,&local_198);
          cVar2 = FUN_140e491e0(uVar8);
          if (cVar2 != '\0') {
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            local_128 = 0;
            local_120 = 0;
            local_11c = 5;
            local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb3ac,_DAT_141ddb3a8);
            uStack_300 = (char *)CONCAT44(DAT_141ddb3b4,uRam0000000141ddb3b0);
            if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_228);
            }
            FUN_140041b80(local_228,&local_308);
            local_188 = local_228;
            local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
            uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
            if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_218);
            }
            FUN_140041b80(local_218,&local_308);
            local_180 = local_218;
            uVar8 = gml_Script____struct___106(param_1,param_2,&local_128,2,&local_188);
            cVar2 = FUN_140e491e0(uVar8);
            if (cVar2 != '\0') {
              if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_138);
              }
              local_138 = 0;
              local_130 = 0;
              local_12c = 5;
              local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb4cc,_DAT_141ddb4c8);
              uStack_300 = (char *)CONCAT44(DAT_141ddb4d4,uRam0000000141ddb4d0);
              if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_208);
              }
              FUN_140041b80(local_208,&local_308);
              local_178 = local_208;
              local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
              uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
              if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1f8);
              }
              FUN_140041b80(local_1f8,&local_308);
              local_170 = local_1f8;
              uVar8 = gml_Script____struct___106(param_1,param_2,&local_138,2,&local_178);
              cVar2 = FUN_140e491e0(uVar8);
              if (cVar2 != '\0') {
                local_2b8 = 0x65;
                local_e8 = 0;
                local_e0 = 0;
                local_dc = 5;
                local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb4bc,_DAT_141ddb4b8);
                uStack_300 = (char *)CONCAT44(DAT_141ddb4c4,uRam0000000141ddb4c0);
                if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1e8);
                }
                FUN_140041b80(local_1e8,&local_308);
                local_168 = local_1e8;
                local_308 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
                uStack_300 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
                if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1d8);
                }
                FUN_140041b80(local_1d8,&local_308);
                local_160 = local_1d8;
                uStack_300 = "gml_Script_savedata_set";
                local_308 = DAT_141dc7a50;
                DAT_141dc7a50 = &local_308;
                local_2f8 = 8;
                uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
                bVar13 = 5;
                local_dc = 5;
                local_e8 = 0;
                local_2f8 = 10;
                FUN_140e98ef0(param_1,param_2,uVar8,local_168,local_160);
                DAT_141dc7a50 = local_308;
                local_2b8 = 0x66;
                if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_318);
                }
                local_318 = 0;
                local_310 = 0;
                local_30c = 5;
                local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb3dc,_DAT_141ddb3d8);
                uStack_300 = (char *)CONCAT44(DAT_141ddb3e4,uRam0000000141ddb3e0);
                if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_288);
                }
                FUN_140041b80(&local_288,&local_308);
                local_1b8 = &local_288;
                gml_Script_steam_track_death_count(param_1,param_2,&local_318,1,&local_1b8);
              }
            }
          }
        }
      }
      local_2b8 = 0x69;
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_318 = 0;
      local_310 = 0;
      local_30c = 5;
      local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb46c,_DAT_141ddb468);
      uStack_300 = (char *)CONCAT44(DAT_141ddb474,uRam0000000141ddb470);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_308);
      local_1b8 = &local_288;
      local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_308);
      local_1b0 = &local_278;
      uVar8 = gml_Script____struct___106(param_1,param_2,&local_318,2,&local_1b8);
      cVar2 = FUN_140e491e0(uVar8);
      if (cVar2 == '\0') {
        local_2b8 = 0x6b;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb46c,_DAT_141ddb468);
        uStack_300 = (char *)CONCAT44(DAT_141ddb474,uRam0000000141ddb470);
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_308);
        local_1a8 = &local_268;
        local_308 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_300 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_308);
        local_1a0 = local_258;
        uStack_300 = "gml_Script_savedata_set";
        local_308 = DAT_141dc7a50;
        DAT_141dc7a50 = &local_308;
        local_2f8 = 8;
        uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
        local_2cc = 5;
        local_2d8 = 0;
        local_2f8 = 10;
        FUN_140e98ef0(param_1,param_2,uVar8,local_1a8,local_1a0);
        DAT_141dc7a50 = local_308;
        local_2b8 = 0x6c;
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_318 = 0;
        local_310 = 0;
        local_30c = 5;
        local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb48c,_DAT_141ddb488);
        uStack_300 = (char *)CONCAT44(DAT_141ddb494,uRam0000000141ddb490);
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_308);
        local_1b8 = &local_288;
        gml_Script_steam_track_death_count(param_1,param_2,&local_318,1,&local_1b8);
      }
      local_2b8 = 0x6f;
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_318 = 0;
      local_310 = 0;
      local_30c = 5;
      local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb4ac,_DAT_141ddb4a8);
      uStack_300 = (char *)CONCAT44(DAT_141ddb4b4,uRam0000000141ddb4b0);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_308);
      local_1b8 = &local_288;
      local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_308);
      local_1b0 = &local_278;
      uVar8 = gml_Script____struct___106(param_1,param_2,&local_318,2,&local_1b8);
      cVar2 = FUN_140e491e0(uVar8);
      if ((cVar2 == '\0') && (cVar2 = FUN_140e491e0(&local_158), cVar2 != '\0')) {
        local_2b8 = 0x71;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb4ac,_DAT_141ddb4a8);
        uStack_300 = (char *)CONCAT44(DAT_141ddb4b4,uRam0000000141ddb4b0);
        if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_308);
        local_1a8 = &local_268;
        local_308 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
        uStack_300 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_308);
        local_1a0 = local_258;
        uStack_300 = "gml_Script_savedata_set";
        local_308 = DAT_141dc7a50;
        DAT_141dc7a50 = &local_308;
        local_2f8 = 8;
        uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
        local_2cc = 5;
        local_2d8 = 0;
        local_2f8 = 10;
        FUN_140e98ef0(param_1,param_2,uVar8,local_1a8,local_1a0);
        DAT_141dc7a50 = local_308;
        local_2b8 = 0x72;
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        local_318 = 0;
        local_310 = 0;
        local_30c = 5;
        local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb41c,_DAT_141ddb418);
        uStack_300 = (char *)CONCAT44(DAT_141ddb424,uRam0000000141ddb420);
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_308);
        local_1b8 = &local_288;
        gml_Script_steam_track_death_count(param_1,param_2,&local_318,1,&local_1b8);
      }
      local_2b8 = 0x75;
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_318 = 0;
      local_310 = 0;
      local_30c = 5;
      local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb4ec,_DAT_141ddb4e8);
      uStack_300 = (char *)CONCAT44(DAT_141ddb4f4,uRam0000000141ddb4f0);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_308);
      local_1b8 = &local_288;
      local_308 = (undefined8 *)CONCAT44(uRam0000000141dc7654,_DAT_141dc7650);
      uStack_300 = (char *)CONCAT44(uRam0000000141dc765c,uRam0000000141dc7658);
      if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_308);
      local_1b0 = &local_278;
      puVar5 = (undefined8 *)gml_Script____struct___106(param_1,param_2,&local_318,2,&local_1b8);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
        local_148 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_148,puVar5);
      }
      uStack_2dc = 7;
      local_2e8 = CONCAT44(local_2e8._4_4_,1);
      FUN_1400460e0(&local_148,&local_2e8);
      if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_308 = (undefined8 *)local_148;
      uStack_300 = (char *)CONCAT44(uStack_13c,uStack_140);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_308);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_2b8 = 0x76;
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_318 = 0;
      local_310 = 0;
      local_30c = 5;
      local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb4ec,_DAT_141ddb4e8);
      uStack_300 = (char *)CONCAT44(DAT_141ddb4f4,uRam0000000141ddb4f0);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_308);
      local_1b8 = &local_288;
      local_1b0 = &local_108;
      uStack_300 = "gml_Script_savedata_set";
      local_308 = DAT_141dc7a50;
      DAT_141dc7a50 = &local_308;
      local_2f8 = 8;
      uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
      local_30c = 5;
      local_318 = 0;
      local_2f8 = 10;
      FUN_140e98ef0(param_1,param_2,uVar8,local_1b8,local_1b0);
      DAT_141dc7a50 = local_308;
      local_2b8 = 0x78;
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
        local_308 = DAT_141dc7a50;
      }
      local_318 = 0;
      local_310 = 0;
      local_30c = 5;
      local_1b8 = &local_108;
      uStack_300 = "gml_Script_steam_track_loops";
      DAT_141dc7a50 = &local_308;
      local_2f8 = 0x20;
      _eh_vector_constructor_iterator_(&local_2a8,0x10,2,FUN_1400424d0,FUN_140041b30);
      local_30c = 5;
      local_318 = 0;
      local_2f8 = 0x21;
      _eh_vector_destructor_iterator_(&local_2a8,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = local_308;
      local_2b8 = 0x7a;
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_318 = 0;
      local_310 = 0;
      local_30c = 5;
      local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb42c,_DAT_141ddb428);
      uStack_300 = (char *)CONCAT44(DAT_141ddb434,uRam0000000141ddb430);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_308);
      local_1b8 = &local_288;
      local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_308);
      local_1b0 = &local_278;
      uVar8 = gml_Script____struct___106(param_1,param_2,&local_318,2,&local_1b8);
      cVar2 = FUN_140e491e0(uVar8);
      if (cVar2 == '\0') {
        uStack_2dc = 0;
        local_2e8 = 0x4008000000000000;
        uVar3 = FUN_140e851f0(&local_108,&local_2e8,DAT_141955260,1);
        if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        if (uVar3 < 0x80000000) {
          local_2b8 = 0x7c;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb42c,_DAT_141ddb428);
          uStack_300 = (char *)CONCAT44(DAT_141ddb434,uRam0000000141ddb430);
          if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140041b80(&local_268,&local_308);
          local_1a8 = &local_268;
          local_308 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
          uStack_300 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
          if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_308);
          local_1a0 = local_258;
          uStack_300 = "gml_Script_savedata_set";
          local_308 = DAT_141dc7a50;
          DAT_141dc7a50 = &local_308;
          local_2f8 = 8;
          uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
          local_2cc = 5;
          local_2d8 = 0;
          local_2f8 = 10;
          FUN_140e98ef0(param_1,param_2,uVar8,local_1a8,local_1a0);
          DAT_141dc7a50 = local_308;
          local_2b8 = 0x7d;
          if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_318 = 0;
          local_310 = 0;
          local_30c = 5;
          local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb39c,_DAT_141ddb398);
          uStack_300 = (char *)CONCAT44(DAT_141ddb3a4,uRam0000000141ddb3a0);
          if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_308);
          local_1b8 = &local_288;
          gml_Script_steam_track_death_count(param_1,param_2,&local_318,1,&local_1b8);
        }
      }
      local_2b8 = 0x80;
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_318 = 0;
      local_310 = 0;
      local_30c = 5;
      local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb37c,_DAT_141ddb378);
      uStack_300 = (char *)CONCAT44(DAT_141ddb384,uRam0000000141ddb380);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_308);
      local_1b8 = &local_288;
      local_308 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_300 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_308);
      local_1b0 = &local_278;
      ppuVar17 = &local_1b8;
      uVar8 = gml_Script____struct___106(param_1,param_2,&local_318,2,ppuVar17);
      cVar2 = FUN_140e491e0(uVar8);
      if (cVar2 == '\0') {
        uStack_2dc = 0xf;
        local_2e8 = 0x100000000000106;
        FUN_140e87440(&local_2e8,DAT_141a57b40,0x80000000,&local_c8,
                      (ulonglong)ppuVar17 & 0xffffffffffffff00,
                      (ulonglong)ppuVar16 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        cVar2 = FUN_140e491e0(&local_c8);
        if (cVar2 != '\0') {
          local_2b8 = 0x82;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb37c,_DAT_141ddb378);
          uStack_300 = (char *)CONCAT44(DAT_141ddb384,uRam0000000141ddb380);
          if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140041b80(&local_268,&local_308);
          local_1a8 = &local_268;
          local_308 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
          uStack_300 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
          if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_308);
          local_1a0 = local_258;
          uStack_300 = "gml_Script_savedata_set";
          local_308 = DAT_141dc7a50;
          DAT_141dc7a50 = &local_308;
          local_2f8 = 8;
          uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
          local_2cc = 5;
          local_2d8 = 0;
          local_2f8 = 10;
          FUN_140e98ef0(param_1,param_2,uVar8,local_1a8,local_1a0);
          DAT_141dc7a50 = local_308;
          local_2b8 = 0x83;
          if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_318);
          }
          local_318 = 0;
          local_310 = 0;
          local_30c = 5;
          local_308 = (undefined8 *)CONCAT44(uRam0000000141ddb40c,_DAT_141ddb408);
          uStack_300 = (char *)CONCAT44(DAT_141ddb414,uRam0000000141ddb410);
          if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_308);
          local_1b8 = &local_288;
          gml_Script_steam_track_death_count(param_1,param_2,&local_318,1,&local_1b8);
        }
      }
      local_2b8 = 0x86;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_ec = 0;
      local_f8 = 0x4000000000000000;
      FUN_140e86fa0(param_1,DAT_141a0a7e8,0,&local_f8);
      if ((1 << (bVar13 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      _eh_vector_destructor_iterator_(&local_288,0x10,0xc,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_2c8;
      return;
    }
    local_2b8 = 0x41;
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_2d8 = 0;
    local_2d0 = 0;
    local_2cc = 5;
    if (puVar7 != &local_278) {
      local_308 = (undefined8 *)*puVar7;
      uStack_300 = (char *)puVar7[1];
      if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_308);
    }
    local_1b0 = &local_278;
    local_1a8 = &local_1c8;
    ppuVar17 = &local_1b0;
    uVar15 = CONCAT44(uVar18,DAT_1419f5a78);
    uVar12 = FUN_140e634e0(param_1,param_2,&local_2d8,2,uVar15,ppuVar17);
    ppuVar16 = (undefined8 **)(uVar15 & 0xffffffffffffff00);
    FUN_140e87440(uVar12,DAT_141a0a8a8,0x80000000,&local_b8,ppuVar16,
                  (ulonglong)ppuVar17 & 0xffffffffffffff00);
    uStack_2e0 = DAT_141ddb3f0;
    uStack_2dc = DAT_141ddb3f4;
    if ((1 << ((byte)DAT_141ddb3f4 & 0x1f) & 0x46U) == 0) {
      local_2e8 = DAT_141ddb3e8;
    }
    else {
      FUN_1400419b0(&local_2e8,&DAT_141ddb3e8);
    }
    iVar4 = FUN_140e851f0(&local_b8,&local_2e8,DAT_141955260,0);
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    if (iVar4 == 0) {
      local_2b8 = 0x42;
      local_2a8 = 0x3ff0000000000000;
      uStack_2a0._4_4_ = 0xd;
      local_308 = (undefined8 *)0x3ff0000000000000;
      uStack_300 = (char *)CONCAT44(0xd,(undefined4)uStack_2a0);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_308);
    }
  } while( true );
}

