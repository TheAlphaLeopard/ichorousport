// gml_GlobalScript_PauseMenuFunctions @ 0x140418ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_PauseMenuFunctions
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined4 uVar9;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  uint local_60 [2];
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_90 = "gml_Script_get_level_flavor_key";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 1;
  FUN_140041df0(local_60,param_4,2,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0ae88);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_11c = 0;
  local_128 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 1;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_58;
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 1;
    if ((int)local_60[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_58;
    }
    if (puVar2 != puVar3) {
      local_138 = *puVar2;
      uStack_130 = *(undefined4 *)(puVar2 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_138);
    }
  }
  if ((int)local_60[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_58[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_138 = CONCAT44(uRam0000000141dd2a6c,_DAT_141dd2a68);
    uStack_130 = uRam0000000141dd2a70;
    uStack_12c = DAT_141dd2a74;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
    local_80 = &local_d8;
    local_138 = CONCAT44(uRam0000000141dc6584,_DAT_141dc6580);
    uStack_130 = uRam0000000141dc6588;
    uStack_12c = uRam0000000141dc658c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_138);
    local_78 = local_c8;
    local_138 = CONCAT44(uRam00000001419e4ba4,_DAT_1419e4ba0);
    uStack_130 = uRam00000001419e4ba8;
    uStack_12c = uRam00000001419e4bac;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_138);
    local_70 = local_b8;
    ppuVar8 = &local_80;
    puVar2 = (undefined8 *)gml_Script____struct___106(param_1,param_2,&local_f8,2,ppuVar8);
    uVar9 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
      local_138 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_138,puVar2);
    }
    uStack_10c = 7;
    local_118 = CONCAT44(local_118._4_4_,1);
    FUN_1400460e0(&local_138,&local_118);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = local_138;
    uStack_110 = uStack_130;
    uStack_10c = uStack_12c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_68 = local_a8;
    if ((int)local_60[0] < 2) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_58[1];
    }
    puVar3 = (undefined8 *)FUN_140e79090(&local_128,2,&local_70);
    if (puVar3 != puVar2) {
      local_138 = *puVar3;
      uStack_130 = *(undefined4 *)(puVar3 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_138);
    }
  }
  local_88 = 3;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((int)local_60[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_58;
    if (puVar2 == &local_d8) goto LAB_140418f4a;
  }
  local_138 = *puVar2;
  uStack_130 = *(undefined4 *)(puVar2 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_138);
LAB_140418f4a:
  local_80 = &local_d8;
  uVar4 = CONCAT44(uVar9,DAT_141a01298);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar4,&local_80);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != &local_e8) {
    local_138 = *puVar2;
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  local_88 = 5;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (((int)local_60[0] < 2) || (puVar7 = (undefined8 *)local_58[1], puVar7 != &local_d8)) {
    local_138 = *puVar7;
    uStack_130 = *(undefined4 *)(puVar7 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
  }
  local_80 = &local_d8;
  uStack_12c = DAT_141dd2a94;
  uStack_130 = DAT_141dd2a90;
  if ((1 << ((byte)DAT_141dd2a94 & 0x1f) & 0x46U) == 0) {
    local_138 = DAT_141dd2a88;
  }
  else {
    FUN_1400419b0(&local_138,&DAT_141dd2a88);
  }
  uVar5 = 1 << ((byte)uStack_12c & 0x1f) & 0x46;
  local_100 = uStack_130;
  local_fc = uStack_12c;
  if (uVar5 == 0) {
    local_108 = local_138;
  }
  else {
    FUN_1400419b0(&local_108,&local_138);
  }
  FUN_1400460e0(&local_108,&local_e8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar9,DAT_1419fcb18),&local_80);
  uStack_10c = local_fc;
  uStack_110 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_118 = local_108;
  }
  else {
    FUN_1400419b0(&local_118,&local_108);
  }
  FUN_1400460e0(&local_118,uVar4);
  if (&local_118 != param_3) {
    local_48 = (undefined4)local_118;
    uStack_44 = local_118._4_4_;
    uStack_40 = uStack_110;
    uStack_3c = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (uVar5 != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,4,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar7 = local_58;
    do {
      puVar2 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

