// gml_Script_anon_22651_SnowState_SnowState @ 0x140508f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_22651_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,uint param_4,undefined8 *param_5
          )

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  uint local_res20 [2];
  undefined4 uVar11;
  undefined8 uVar10;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  byte local_d4;
  undefined1 local_d0 [12];
  byte local_c4;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  uint local_a0 [2];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 **local_80;
  undefined8 *local_78;
  uint *local_70;
  longlong **local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_res18 = 0;
  local_f0 = "gml_Script_anon@21458@SnowState@SnowState";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x2ab;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res20[0] = param_4;
  FUN_140041df0(local_a0,param_4,2,param_5);
  uVar9 = (ulonglong)local_a0[0];
  local_res20[0] = local_a0[0];
  param_5 = local_98;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_e0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_13c = 0;
  local_148 = 0;
  local_10c = 0;
  local_118 = 0;
  local_a4 = 0;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x2ab;
  puVar8 = &DAT_1419df7b0;
  if ((int)local_res20[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_e8 = 0x2ab;
    uStack_12c = 0xd;
    local_138 = 0x3ff0000000000000;
    if ((int)local_res20[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
      if (&local_138 == puVar5) goto LAB_1405090ec;
    }
    local_128 = 0;
    uStack_124 = 0x3ff00000;
    uStack_120 = uStack_130;
    uStack_11c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_128);
  }
LAB_1405090ec:
  local_e8 = 0x2ac;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_res20[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 == &local_e0) goto LAB_140509172;
  }
  local_128 = *(undefined4 *)puVar5;
  uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_120 = *(undefined4 *)(puVar5 + 1);
  uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_128);
LAB_140509172:
  local_c0 = &local_e0;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0b8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_148,1,uVar10,&local_c0);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    local_e8 = 0x2ad;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fcf88);
    local_128 = _DAT_141dd3aa8;
    uStack_124 = uRam0000000141dd3aac;
    uStack_120 = uRam0000000141dd3ab0;
    uStack_11c = DAT_141dd3ab4;
    if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d0);
    }
    FUN_140041b80(local_d0,&local_128);
    local_b8 = local_d0;
    FUN_140e63610(local_res8,local_res10,&local_118,1,uVar4,&local_b8);
    local_e8 = 0x2ae;
    if (param_3 != &DAT_1419df7b0) {
      local_128 = (undefined4)DAT_1419df7b0;
      uStack_124 = DAT_1419df7b0._4_4_;
      uStack_120 = DAT_1419df7b8;
      uStack_11c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_128);
    }
  }
  else {
    local_e8 = 0x2b1;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fcbc8);
    if ((int)local_res20[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
    }
    cVar2 = FUN_140e491e0(puVar6);
    if (cVar2 == '\0') {
      local_90 = &local_b0;
      local_88 = &local_e0;
      local_80 = &local_c0;
      local_78 = &param_5;
      local_70 = local_res20;
      local_68 = &local_res8;
      local_60 = &local_res10;
      puVar8 = (undefined8 *)FUN_140509630(&local_90,&local_128);
      uVar7 = 2;
    }
    else {
      if (0 < (int)local_res20[0]) {
        puVar8 = (undefined8 *)*param_5;
      }
      uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
      uStack_130 = *(undefined4 *)(puVar8 + 1);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
        local_138 = *puVar8;
      }
      else {
        FUN_1400419b0(&local_138,puVar8);
      }
      puVar8 = &local_138;
      uVar7 = 1;
    }
    local_res18 = uVar7;
    FUN_140e609c0(local_res8);
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_148,0,CONCAT44(uVar11,DAT_1419fca88),0);
    uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_100 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
      local_108 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_108,puVar6);
    }
    local_res18 = uVar7 | 4;
    FUN_1400462a0(&local_108,puVar8);
    if (&local_108 != puVar5) {
      local_58 = (undefined4)local_108;
      uStack_54 = local_108._4_4_;
      uStack_50 = uStack_100;
      uStack_4c = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_58);
    }
    local_res18 = uVar7;
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (((uVar7 & 2) != 0) &&
       (uVar7 = uVar7 & 0xfffffff9, local_res18 = uVar7,
       (1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_128);
    }
    if (((uVar7 & 1) != 0) && ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_138);
    }
    FUN_140e60910(1);
    plVar1 = local_res8;
    local_e8 = 0x2b3;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 6;
    *param_3 = plVar1;
    uVar4 = FUN_140e5c910();
    FUN_140e42c10(uVar4,plVar1);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_e0,0x10,2,FUN_140041b30);
  if (0 < (int)local_a0[0]) {
    puVar8 = local_98;
    do {
      puVar5 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_98);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

