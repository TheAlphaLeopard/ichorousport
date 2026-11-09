// gml_Script_InputPartyGetJoin @ 0x140342130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPartyGetJoin
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar9;
  undefined8 uVar8;
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
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50 [2];
  undefined8 *local_48;
  
  local_a0 = "gml_Script_InputOpposingRepeat";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xe;
  FUN_140041df0(local_50,param_4,5,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_12c = 0;
  local_138 = 0;
  local_11c = 0;
  local_128 = 0;
  local_54 = 0;
  local_60 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xe;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_48[2];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_98 = 0xe;
    if ((int)local_50[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_48[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if ((int)local_50[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_48[3];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_50[0] < 4) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_48[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x4022000000000000;
  }
  if ((int)local_50[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_48[4];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_50[0] < 5) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_48[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x4039000000000000;
  }
  local_98 = 4;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((int)local_50[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_140342378:
    local_148 = (undefined1 *)*puVar5;
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  else {
    puVar5 = (undefined8 *)local_48[2];
    if (puVar5 != &local_118) goto LAB_140342378;
  }
  local_90 = &local_118;
  uVar8 = CONCAT44(uVar9,DAT_141a014a8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar8,&local_90);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_98 = 5;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_60);
    }
    local_60 = 0;
    local_58 = 0;
    local_54 = 5;
    if ((int)local_50[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_140342461:
      local_148 = (undefined1 *)*puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_148);
    }
    else {
      puVar5 = (undefined8 *)local_48[2];
      if (puVar5 != &local_108) goto LAB_140342461;
    }
    local_88 = &local_108;
    local_148 = (undefined1 *)CONCAT44(uRam0000000141dd0a3c,_DAT_141dd0a38);
    uStack_140 = uRam0000000141dd0a40;
    uStack_13c = DAT_141dd0a44;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_80 = &local_f8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_60,1,CONCAT44(uVar9,DAT_1419fdc58),&local_88);
    if (puVar5 != &local_e8) {
      local_148 = (undefined1 *)*puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_148);
    }
    local_78 = &local_e8;
    local_148 = (undefined1 *)CONCAT44(uRam0000000141dd09fc,_DAT_141dd09f8);
    uStack_140 = uRam0000000141dd0a00;
    uStack_13c = DAT_141dd0a04;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_148);
    local_70 = &local_d8;
    FUN_14008e020(param_1,param_2,&local_128,3,&local_80);
  }
  local_98 = 9;
  if ((int)local_50[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_48[2];
  }
  uStack_13c = 0;
  local_148 = (undefined1 *)0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar5,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (uVar3 < 0x80000000) {
    local_98 = 0xe;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_148 = (undefined1 *)CONCAT44(uRam0000000141dd0a4c,_DAT_141dd0a48);
    uStack_140 = uRam0000000141dd0a50;
    uStack_13c = DAT_141dd0a54;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
    local_90 = &local_118;
    if ((int)local_50[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_14034269d:
      local_148 = (undefined1 *)*puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_148);
    }
    else {
      puVar5 = (undefined8 *)local_48[2];
      if (puVar5 != &local_108) goto LAB_14034269d;
    }
    local_88 = &local_108;
    local_148 = (undefined1 *)CONCAT44(uRam0000000141dd0a2c,_DAT_141dd0a28);
    uStack_140 = uRam0000000141dd0a30;
    uStack_13c = DAT_141dd0a34;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_80 = &local_f8;
    local_148 = (undefined1 *)CONCAT44(uRam00000001419e41c4,_DAT_1419e41c0);
    uStack_140 = uRam00000001419e41c8;
    uStack_13c = uRam00000001419e41cc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_148);
    local_78 = &local_e8;
    local_148 = (undefined1 *)CONCAT44(uRam0000000141dd0a0c,_DAT_141dd0a08);
    uStack_140 = uRam0000000141dd0a10;
    uStack_13c = DAT_141dd0a14;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_148);
    local_70 = &local_d8;
    FUN_14008e020(param_1,param_2,&local_138,5,&local_90);
  }
  local_98 = 0x13;
  if ((int)local_50[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_48[2];
  }
  uStack_13c = 0;
  local_148 = (undefined1 *)0x0;
  iVar2 = FUN_140e851f0(puVar5,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (!(iVar2 == -2 || -1 < iVar2)) {
    local_98 = 0x16;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_148 = (undefined1 *)CONCAT44(uRam0000000141dd0a4c,_DAT_141dd0a48);
    uStack_140 = uRam0000000141dd0a50;
    uStack_13c = DAT_141dd0a54;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
    local_90 = &local_118;
    if ((int)local_50[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_1403428a8:
      local_148 = (undefined1 *)*puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_148);
    }
    else {
      puVar5 = (undefined8 *)local_48[2];
      if (puVar5 != &local_108) goto LAB_1403428a8;
    }
    local_88 = &local_108;
    local_148 = (undefined1 *)CONCAT44(uRam0000000141dd0a1c,_DAT_141dd0a18);
    uStack_140 = uRam0000000141dd0a20;
    uStack_13c = DAT_141dd0a24;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_80 = &local_f8;
    FUN_14008e020(param_1,param_2,&local_138,3,&local_90);
  }
  local_98 = 0x12;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((int)local_50[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14034298d:
    local_148 = (undefined1 *)*puVar5;
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  else {
    puVar5 = (undefined8 *)*local_48;
    if (puVar5 != &local_118) goto LAB_14034298d;
  }
  local_90 = &local_118;
  if ((int)local_50[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_1403429e1:
    local_148 = (undefined1 *)*puVar5;
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
  else {
    puVar5 = (undefined8 *)local_48[2];
    if (puVar5 != &local_108) goto LAB_1403429e1;
  }
  local_88 = &local_108;
  uVar4 = gml_Script_InputCheckMany(param_1,param_2,&local_138,2,&local_90);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_98 = 0x18;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((int)local_50[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_140342db5:
      local_b8 = *(undefined4 *)puVar5;
      uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_b0 = *(undefined4 *)(puVar5 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_b8);
    }
    else {
      puVar5 = (undefined8 *)local_48[1];
      if (puVar5 != &local_118) goto LAB_140342db5;
    }
    local_90 = &local_118;
    if ((int)local_50[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_140342e07:
      local_b8 = *(undefined4 *)puVar5;
      uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_b0 = *(undefined4 *)(puVar5 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_b8);
    }
    else {
      puVar5 = (undefined8 *)local_48[2];
      if (puVar5 != &local_108) goto LAB_140342e07;
    }
    local_88 = &local_108;
    uVar4 = gml_Script_InputCheckMany(param_1,param_2,&local_138,2,&local_90);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_98 = 0x1a;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      if ((int)local_50[0] < 2) {
        puVar5 = &DAT_1419df7b0;
LAB_140342ebb:
        local_b8 = *(undefined4 *)puVar5;
        uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_b0 = *(undefined4 *)(puVar5 + 1);
        uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_b8);
      }
      else {
        puVar5 = (undefined8 *)local_48[1];
        if (puVar5 != &local_f8) goto LAB_140342ebb;
      }
      local_80 = &local_f8;
      if ((int)local_50[0] < 3) {
        puVar5 = &DAT_1419df7b0;
LAB_140342f08:
        local_b8 = *(undefined4 *)puVar5;
        uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_b0 = *(undefined4 *)(puVar5 + 1);
        uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_b8);
      }
      else {
        puVar5 = (undefined8 *)local_48[2];
        if (puVar5 != &local_e8) goto LAB_140342f08;
      }
      local_78 = &local_e8;
      if ((int)local_50[0] < 4) {
        puVar5 = &DAT_1419df7b0;
LAB_140342f55:
        local_b8 = *(undefined4 *)puVar5;
        uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_b0 = *(undefined4 *)(puVar5 + 1);
        uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_b8);
      }
      else {
        puVar5 = (undefined8 *)local_48[3];
        if (puVar5 != &local_d8) goto LAB_140342f55;
      }
      local_70 = &local_d8;
      if (((int)local_50[0] < 5) || (puVar6 = (undefined8 *)local_48[4], puVar6 != &local_c8)) {
        local_b8 = *(undefined4 *)puVar6;
        uStack_b4 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_b0 = *(undefined4 *)(puVar6 + 1);
        uStack_ac = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_b8);
      }
      local_68 = &local_c8;
      puVar6 = (undefined8 *)gml_Script_InputSetHotswap(param_1,param_2,&local_128,4,&local_80);
      if (puVar6 != param_3) {
        local_b8 = *(undefined4 *)puVar6;
        uStack_b4 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_b0 = *(undefined4 *)(puVar6 + 1);
        uStack_ac = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_b8);
      }
      goto LAB_140343049;
    }
    local_98 = 0x1d;
  }
  else {
    local_98 = 0x14;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((int)local_50[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_140342a97:
      local_148 = (undefined1 *)*puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_148);
    }
    else {
      puVar5 = (undefined8 *)local_48[1];
      if (puVar5 != &local_f8) goto LAB_140342a97;
    }
    local_80 = &local_f8;
    if ((int)local_50[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_140342ae6:
      local_148 = (undefined1 *)*puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_148);
    }
    else {
      puVar5 = (undefined8 *)local_48[2];
      if (puVar5 != &local_e8) goto LAB_140342ae6;
    }
    local_78 = &local_e8;
    uVar4 = gml_Script_InputCheckMany(param_1,param_2,&local_128,2,&local_80);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_98 = 0x16;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      if ((int)local_50[0] < 1) {
        puVar5 = &DAT_1419df7b0;
LAB_140342b9f:
        local_148 = (undefined1 *)*puVar5;
        uStack_140 = *(undefined4 *)(puVar5 + 1);
        uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_148);
      }
      else {
        puVar5 = (undefined8 *)*local_48;
        if (puVar5 != &local_118) goto LAB_140342b9f;
      }
      local_90 = &local_118;
      if ((int)local_50[0] < 3) {
        puVar5 = &DAT_1419df7b0;
LAB_140342bf3:
        local_148 = (undefined1 *)*puVar5;
        uStack_140 = *(undefined4 *)(puVar5 + 1);
        uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_148);
      }
      else {
        puVar5 = (undefined8 *)local_48[2];
        if (puVar5 != &local_108) goto LAB_140342bf3;
      }
      local_88 = &local_108;
      if ((int)local_50[0] < 4) {
        puVar5 = &DAT_1419df7b0;
LAB_140342c46:
        local_148 = (undefined1 *)*puVar5;
        uStack_140 = *(undefined4 *)(puVar5 + 1);
        uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_148);
      }
      else {
        puVar5 = (undefined8 *)local_48[3];
        if (puVar5 != &local_f8) goto LAB_140342c46;
      }
      local_80 = &local_f8;
      if (((int)local_50[0] < 5) || (puVar6 = (undefined8 *)local_48[4], puVar6 != &local_e8)) {
        local_148 = (undefined1 *)*puVar6;
        uStack_140 = *(undefined4 *)(puVar6 + 1);
        uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_148);
      }
      local_78 = &local_e8;
      uVar4 = gml_Script_InputSetHotswap(param_1,param_2,&local_138,4,&local_90);
      uStack_13c = 0;
      local_148 = &DAT_bff0000000000000;
      FUN_140042560(&local_148,uVar4);
      if (&local_148 != param_3) {
        local_b8 = (undefined4)local_148;
        uStack_b4 = local_148._4_4_;
        uStack_b0 = uStack_140;
        uStack_ac = uStack_13c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_b8);
      }
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      goto LAB_140343049;
    }
    local_98 = 0x14;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *param_3 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
LAB_140343049:
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,6,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar6 = local_48;
    do {
      puVar5 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

