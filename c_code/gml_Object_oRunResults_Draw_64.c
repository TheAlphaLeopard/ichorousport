// gml_Object_oRunResults_Draw_64 @ 0x140d54390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRunResults_Draw_64(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar10;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 **ppuVar8;
  undefined1 **ppuVar9;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined4 local_e8 [3];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  char *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_78 = "gml_Object_oRunResults_Alarm_0";
  local_70 = 0;
  local_80 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_80;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_2c = 0xffffff;
  local_38 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_70 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe058);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efa98);
  if (puVar1 != &local_128) {
    local_158 = *puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  local_b8 = &local_128;
  local_158 = CONCAT44(uRam0000000141ddb5ec,_DAT_141ddb5e8);
  uStack_150 = uRam0000000141ddb5f0;
  uStack_14c = DAT_141ddb5f4;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_158);
  local_b0 = local_118;
  local_158 = CONCAT44(uRam00000001419eda04,_DAT_1419eda00);
  uStack_150 = uRam00000001419eda08;
  uStack_14c = uRam00000001419eda0c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_158);
  local_a8 = &local_108;
  local_158 = CONCAT44(uRam00000001419eda14,_DAT_1419eda10);
  uStack_150 = uRam00000001419eda18;
  uStack_14c = uRam00000001419eda1c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_158);
  local_a0 = &local_f8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar6,&local_b8);
  uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar3 != puVar2) {
    local_158 = *puVar3;
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_158);
  }
  FUN_140e60910(1);
  local_70 = 3;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe778);
  if (puVar1 != &local_128) {
    local_158 = *puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  local_b8 = &local_128;
  local_158 = CONCAT44(uRam0000000141ddb5ac,_DAT_141ddb5a8);
  uStack_150 = uRam0000000141ddb5b0;
  uStack_14c = DAT_141ddb5b4;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_158);
  local_b0 = local_118;
  local_158 = CONCAT44(uRam00000001419eda04,_DAT_1419eda00);
  uStack_150 = uRam00000001419eda08;
  uStack_14c = uRam00000001419eda0c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_158);
  local_a8 = &local_108;
  local_158 = CONCAT44(uRam00000001419eda54,_DAT_1419eda50);
  uStack_150 = uRam00000001419eda58;
  uStack_14c = uRam00000001419eda5c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_158);
  local_a0 = &local_f8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar6,&local_b8);
  uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar3 != puVar2) {
    local_158 = *puVar3;
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_158);
  }
  FUN_140e60910(1);
  local_70 = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe538);
  if (puVar1 != &local_128) {
    local_158 = *puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  local_b8 = &local_128;
  local_158 = CONCAT44(uRam0000000141ddb57c,_DAT_141ddb578);
  uStack_150 = uRam0000000141ddb580;
  uStack_14c = DAT_141ddb584;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_158);
  local_b0 = local_118;
  local_158 = CONCAT44(uRam00000001419eda04,_DAT_1419eda00);
  uStack_150 = uRam00000001419eda08;
  uStack_14c = uRam00000001419eda0c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_158);
  local_a8 = &local_108;
  local_158 = CONCAT44(uRam00000001419eda34,_DAT_1419eda30);
  uStack_150 = uRam00000001419eda38;
  uStack_14c = uRam00000001419eda3c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_158);
  local_a0 = &local_f8;
  FUN_140e609c0(param_1);
  ppuVar8 = &local_b8;
  uVar7 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar7,ppuVar8);
  if (puVar1 != puVar2) {
    local_158 = *puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_158);
  }
  FUN_140e60910(1);
  local_70 = 6;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe8f8);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe058);
  uStack_14c = 0xf;
  local_158 = 0x100000000000106;
  FUN_140e87440(&local_158,DAT_141a57af0,0x80000000,&local_38,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = DAT_141ddb594;
  uStack_150 = DAT_141ddb590;
  if ((1 << ((byte)DAT_141ddb594 & 0x1f) & 0x46U) == 0) {
    local_158 = DAT_141ddb588;
  }
  else {
    FUN_1400419b0(&local_158,&DAT_141ddb588);
  }
  uVar10 = uStack_14c;
  local_168 = (undefined4)local_158;
  uStack_164 = local_158._4_4_;
  uStack_160 = uStack_150;
  uStack_15c = uStack_14c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_168);
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_b8 = &local_128;
  local_168 = (undefined4)local_38;
  uStack_164 = local_38._4_4_;
  uStack_160 = uStack_30;
  uStack_15c = uStack_2c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  local_b0 = local_118;
  if (puVar1 != &local_108) {
    local_168 = *(undefined4 *)puVar1;
    uStack_164 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_160 = *(undefined4 *)(puVar1 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_168);
  }
  local_a8 = &local_108;
  ppuVar8 = &local_b8;
  puVar2 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_138,2,ppuVar8);
  uVar10 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
  if (puVar2 != &local_f8) {
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
  }
  local_a0 = &local_f8;
  local_168 = _DAT_1419eda00;
  uStack_164 = uRam00000001419eda04;
  uStack_160 = uRam00000001419eda08;
  uStack_15c = uRam00000001419eda0c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_168);
  local_98 = local_e8;
  local_168 = _DAT_1419eda30;
  uStack_164 = uRam00000001419eda34;
  uStack_160 = uRam00000001419eda38;
  uStack_15c = uRam00000001419eda3c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_168);
  local_90 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar6,&local_a8);
  uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar5 != puVar4) {
    local_168 = *puVar5;
    uStack_164 = puVar5[1];
    uStack_160 = puVar5[2];
    uStack_15c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  FUN_140e60910(1);
  local_70 = 8;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe748);
  if (puVar1 != &local_128) {
    local_168 = *(undefined4 *)puVar1;
    uStack_164 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_160 = *(undefined4 *)(puVar1 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  local_b8 = &local_128;
  local_168 = _DAT_141ddb5c8;
  uStack_164 = uRam0000000141ddb5cc;
  uStack_160 = uRam0000000141ddb5d0;
  uStack_15c = DAT_141ddb5d4;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  local_b0 = local_118;
  local_168 = _DAT_1419eda00;
  uStack_164 = uRam00000001419eda04;
  uStack_160 = uRam00000001419eda08;
  uStack_15c = uRam00000001419eda0c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_168);
  local_a8 = &local_108;
  local_168 = _DAT_1419eda60;
  uStack_164 = uRam00000001419eda64;
  uStack_160 = uRam00000001419eda68;
  uStack_15c = uRam00000001419eda6c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_168);
  local_a0 = &local_f8;
  FUN_140e609c0(param_1);
  ppuVar8 = &local_b8;
  uVar7 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar7,ppuVar8);
  if (puVar5 != puVar4) {
    local_168 = *puVar5;
    uStack_164 = puVar5[1];
    uStack_160 = puVar5[2];
    uStack_15c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  FUN_140e60910(1);
  local_70 = 9;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe578);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe058);
  uStack_14c = 0xf;
  local_158 = 0x100000000000106;
  FUN_140e87440(&local_158,DAT_1419fd9b8,0x80000000,&local_48,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = DAT_141ddb614;
  uStack_150 = DAT_141ddb610;
  if ((1 << ((byte)DAT_141ddb614 & 0x1f) & 0x46U) == 0) {
    local_158 = DAT_141ddb608;
  }
  else {
    FUN_1400419b0(&local_158,&DAT_141ddb608);
  }
  uVar10 = uStack_14c;
  local_168 = (undefined4)local_158;
  uStack_164 = local_158._4_4_;
  uStack_160 = uStack_150;
  uStack_15c = uStack_14c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_168);
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_b8 = &local_128;
  local_168 = (undefined4)local_48;
  uStack_164 = local_48._4_4_;
  uStack_160 = uStack_40;
  uStack_15c = uStack_3c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  local_b0 = local_118;
  if (puVar1 != &local_108) {
    local_168 = *(undefined4 *)puVar1;
    uStack_164 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_160 = *(undefined4 *)(puVar1 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_168);
  }
  local_a8 = &local_108;
  ppuVar8 = &local_b8;
  puVar2 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_138,2,ppuVar8);
  uVar10 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
  if (puVar2 != &local_f8) {
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
  }
  local_a0 = &local_f8;
  local_168 = _DAT_1419eda00;
  uStack_164 = uRam00000001419eda04;
  uStack_160 = uRam00000001419eda08;
  uStack_15c = uRam00000001419eda0c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_168);
  local_98 = local_e8;
  local_168 = _DAT_1419eda60;
  uStack_164 = uRam00000001419eda64;
  uStack_160 = uRam00000001419eda68;
  uStack_15c = uRam00000001419eda6c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_168);
  local_90 = local_d8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar6,&local_a8);
  uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar5 != puVar4) {
    local_168 = *puVar5;
    uStack_164 = puVar5[1];
    uStack_160 = puVar5[2];
    uStack_15c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  FUN_140e60910(1);
  local_70 = 0xb;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1d8a0);
  if (puVar1 != &local_128) {
    local_168 = *(undefined4 *)puVar1;
    uStack_164 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_160 = *(undefined4 *)(puVar1 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  local_b8 = &local_128;
  local_168 = _DAT_141ddb568;
  uStack_164 = uRam0000000141ddb56c;
  uStack_160 = uRam0000000141ddb570;
  uStack_15c = DAT_141ddb574;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  local_b0 = local_118;
  local_168 = _DAT_1419eda00;
  uStack_164 = uRam00000001419eda04;
  uStack_160 = uRam00000001419eda08;
  uStack_15c = uRam00000001419eda0c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_168);
  local_a8 = &local_108;
  local_168 = _DAT_1419eda20;
  uStack_164 = uRam00000001419eda24;
  uStack_160 = uRam00000001419eda28;
  uStack_15c = uRam00000001419eda2c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_168);
  local_a0 = &local_f8;
  FUN_140e609c0(param_1);
  ppuVar8 = &local_b8;
  uVar7 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar7,ppuVar8);
  if (puVar5 != puVar4) {
    local_168 = *puVar5;
    uStack_164 = puVar5[1];
    uStack_160 = puVar5[2];
    uStack_15c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  FUN_140e60910(1);
  local_70 = 0xd;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe718);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe058);
  uStack_14c = 0xf;
  local_158 = 0x100000000000106;
  FUN_140e87440(&local_158,DAT_1419fd8b8,0x80000000,&local_58,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_168 = (undefined4)local_58;
  uStack_164 = local_58._4_4_;
  uStack_160 = uStack_50;
  uStack_15c = uStack_4c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_168);
  local_b8 = &local_128;
  uStack_14c = DAT_141ddb564;
  uStack_150 = DAT_141ddb560;
  if ((1 << ((byte)DAT_141ddb564 & 0x1f) & 0x46U) == 0) {
    local_158 = DAT_141ddb558;
  }
  else {
    FUN_1400419b0(&local_158,&DAT_141ddb558);
  }
  uVar10 = uStack_14c;
  local_168 = (undefined4)local_158;
  uStack_164 = local_158._4_4_;
  uStack_160 = uStack_150;
  uStack_15c = uStack_14c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_b0 = local_118;
  puVar2 = (undefined8 *)FUN_1405dd7f0(param_1,param_2,&local_68,1,&local_b8);
  if (puVar2 != &local_108) {
    local_168 = *(undefined4 *)puVar2;
    uStack_164 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_168);
  }
  local_a8 = &local_108;
  if (puVar1 != &local_f8) {
    local_168 = *(undefined4 *)puVar1;
    uStack_164 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_160 = *(undefined4 *)(puVar1 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
  }
  local_a0 = &local_f8;
  ppuVar9 = &local_b0;
  puVar5 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_138,2,ppuVar9);
  uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
  if (puVar5 != local_e8) {
    local_168 = *puVar5;
    uStack_164 = puVar5[1];
    uStack_160 = puVar5[2];
    uStack_15c = puVar5[3];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_168);
  }
  local_98 = local_e8;
  local_168 = _DAT_1419eda00;
  uStack_164 = uRam00000001419eda04;
  uStack_160 = uRam00000001419eda08;
  uStack_15c = uRam00000001419eda0c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_168);
  local_90 = local_d8;
  local_168 = _DAT_1419eda20;
  uStack_164 = uRam00000001419eda24;
  uStack_160 = uRam00000001419eda28;
  uStack_15c = uRam00000001419eda2c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_168);
  local_88 = local_c8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar6,&local_a0);
  uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar5 != puVar4) {
    local_168 = *puVar5;
    uStack_164 = puVar5[1];
    uStack_160 = puVar5[2];
    uStack_15c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  FUN_140e60910(1);
  local_70 = 0xf;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe858);
  if (puVar1 != &local_128) {
    local_168 = *(undefined4 *)puVar1;
    uStack_164 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_160 = *(undefined4 *)(puVar1 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  local_b8 = &local_128;
  local_168 = _DAT_141ddb5f8;
  uStack_164 = uRam0000000141ddb5fc;
  uStack_160 = uRam0000000141ddb600;
  uStack_15c = DAT_141ddb604;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  local_b0 = local_118;
  local_168 = _DAT_1419eda00;
  uStack_164 = uRam00000001419eda04;
  uStack_160 = uRam00000001419eda08;
  uStack_15c = uRam00000001419eda0c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_168);
  local_a8 = &local_108;
  local_168 = _DAT_1419eda40;
  uStack_164 = uRam00000001419eda44;
  uStack_160 = uRam00000001419eda48;
  uStack_15c = uRam00000001419eda4c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_168);
  local_a0 = &local_f8;
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_148,4,CONCAT44(uVar10,DAT_1419fd6d8),&local_b8);
  if (puVar5 != puVar4) {
    local_168 = *puVar5;
    uStack_164 = puVar5[1];
    uStack_160 = puVar5[2];
    uStack_15c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  FUN_140e60910(1);
  local_70 = 0x11;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe768);
  local_168 = _DAT_141ddb598;
  uStack_164 = uRam0000000141ddb59c;
  uStack_160 = uRam0000000141ddb5a0;
  uStack_15c = DAT_141ddb5a4;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_168);
  local_b8 = &local_128;
  uStack_14c = DAT_141ddb5e4;
  uStack_150 = DAT_141ddb5e0;
  if ((1 << ((byte)DAT_141ddb5e4 & 0x1f) & 0x46U) == 0) {
    local_158 = DAT_141ddb5d8;
  }
  else {
    FUN_1400419b0(&local_158,&DAT_141ddb5d8);
  }
  uVar10 = uStack_14c;
  local_168 = (undefined4)local_158;
  uStack_164 = local_158._4_4_;
  uStack_160 = uStack_150;
  uStack_15c = uStack_14c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_b0 = local_118;
  puVar1 = (undefined8 *)gml_Script____struct___117(param_1,param_2,&local_138,1,&local_b8);
  if (puVar1 != &local_108) {
    local_168 = *(undefined4 *)puVar1;
    uStack_164 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_160 = *(undefined4 *)(puVar1 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_168);
  }
  local_a8 = &local_108;
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_148,2,&local_b0);
  if (puVar5 != puVar4) {
    local_168 = *puVar5;
    uStack_164 = puVar5[1];
    uStack_160 = puVar5[2];
    uStack_15c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  FUN_140e60910(1);
  local_70 = 0x12;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe6e8);
  local_168 = _DAT_141ddb598;
  uStack_164 = uRam0000000141ddb59c;
  uStack_160 = uRam0000000141ddb5a0;
  uStack_15c = DAT_141ddb5a4;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_168);
  local_b8 = &local_128;
  uStack_14c = DAT_141ddb5c4;
  uStack_150 = DAT_141ddb5c0;
  if ((1 << ((byte)DAT_141ddb5c4 & 0x1f) & 0x46U) == 0) {
    local_158 = DAT_141ddb5b8;
  }
  else {
    FUN_1400419b0(&local_158,&DAT_141ddb5b8);
  }
  uVar10 = uStack_14c;
  local_168 = (undefined4)local_158;
  uStack_164 = local_158._4_4_;
  uStack_160 = uStack_150;
  uStack_15c = uStack_14c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_b0 = local_118;
  puVar1 = (undefined8 *)gml_Script____struct___117(param_1,param_2,&local_138,1,&local_b8);
  if (puVar1 != &local_108) {
    local_168 = *(undefined4 *)puVar1;
    uStack_164 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_160 = *(undefined4 *)(puVar1 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_168);
  }
  local_a8 = &local_108;
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)FUN_140e64420(param_1,param_2,&local_148,2,&local_b0);
  if (puVar5 != puVar4) {
    local_168 = *puVar5;
    uStack_164 = puVar5[1];
    uStack_160 = puVar5[2];
    uStack_15c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  FUN_140e60910(1);
  local_70 = 0x13;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe768);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe5b8);
  if (puVar1 != &local_128) {
    local_168 = *(undefined4 *)puVar1;
    uStack_164 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_160 = *(undefined4 *)(puVar1 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  local_b8 = &local_128;
  local_168 = (undefined4)DAT_1419df7b0;
  uStack_164 = DAT_1419df7b0._4_4_;
  uStack_160 = DAT_1419df7b8;
  uStack_15c = DAT_1419df7bc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  local_b0 = local_118;
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)gml_Script_seg_add(param_1,param_2,&local_148,2,&local_b8);
  if (puVar5 != puVar4) {
    local_168 = *puVar5;
    uStack_164 = puVar5[1];
    uStack_160 = puVar5[2];
    uStack_15c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  FUN_140e60910(1);
  local_70 = 0x14;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe6e8);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe5f8);
  if (puVar1 != &local_128) {
    local_168 = *(undefined4 *)puVar1;
    uStack_164 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_160 = *(undefined4 *)(puVar1 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_168);
  }
  local_b8 = &local_128;
  local_168 = (undefined4)DAT_1419df7b0;
  uStack_164 = DAT_1419df7b0._4_4_;
  uStack_160 = DAT_1419df7b8;
  uStack_15c = DAT_1419df7bc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_168);
  local_b0 = local_118;
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)gml_Script_seg_add(param_1,param_2,&local_148,2,&local_b8);
  if (puVar5 != puVar4) {
    local_168 = *puVar5;
    uStack_164 = puVar5[1];
    uStack_160 = puVar5[2];
    uStack_15c = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_168);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_80;
  return;
}

