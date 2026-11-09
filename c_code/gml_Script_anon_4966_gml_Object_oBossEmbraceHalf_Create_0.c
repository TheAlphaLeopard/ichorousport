// gml_Script_anon_4966_gml_Object_oBossEmbraceHalf_Create_0 @ 0x14075e440

undefined8 *
gml_Script_anon_4966_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  uint local_14c;
  undefined1 *local_148;
  undefined4 local_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  byte local_a4;
  undefined8 local_a0;
  byte local_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_70;
  undefined8 *local_68;
  
  local_e0 = "gml_Script_anon@2950@gml_Object_oBossEmbraceHalf_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x76;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_c0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar9 = 0xffffff;
  local_14c = 0xffffff;
  local_158 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_c4 = 0;
  local_d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x77;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 == &local_b0) goto LAB_14075e562;
  }
  local_168 = (undefined1 *)*puVar3;
  uStack_160 = *(undefined4 *)(puVar3 + 1);
  uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_168);
LAB_14075e562:
  local_70 = &local_b0;
  if (puVar2 != &local_a0) {
    local_168 = (undefined1 *)*puVar2;
    uStack_160 = *(undefined4 *)(puVar2 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_168);
  }
  local_68 = &local_a0;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_d0,2,CONCAT44(uVar8,DAT_141a0bf58),&local_70);
  if (puVar3 != &local_158) {
    local_168 = (undefined1 *)*puVar3;
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_168);
  }
  local_d8 = 0x78;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08248);
  if ((local_14c & 0xffffff) == 0) {
    uVar8 = (undefined4)local_158;
  }
  else {
    uVar8 = FUN_140e4b060(&local_158);
  }
  local_168 = (undefined1 *)FUN_140e78d00(uVar8);
  uStack_15c = 0;
  uVar1 = FUN_140e851f0(&local_168,uVar4,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar1 < 0x80000000) {
    local_d8 = 0x78;
    if (0 < param_4) {
      puVar7 = (undefined8 *)*param_5;
    }
    if (puVar7 != param_3) {
      local_168 = (undefined1 *)*puVar7;
      uStack_160 = *(undefined4 *)(puVar7 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_168);
    }
  }
  else {
    local_d8 = 0x79;
    uStack_15c = 0;
    local_168 = (undefined1 *)0x0;
    uVar1 = FUN_140e851f0(&local_158,&local_168,DAT_141955260,1);
    bVar6 = 0x7fffffff < uVar1;
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (bVar6) {
      uStack_15c = 0;
      local_168 = &DAT_bff0000000000000;
      ppuVar5 = &local_168;
    }
    else {
      local_13c = 0;
      local_148 = (undefined1 *)0x3ff0000000000000;
      ppuVar5 = &local_148;
    }
    uVar8 = local_13c;
    uVar9 = uStack_15c;
    local_138 = *ppuVar5;
    uStack_130 = *(undefined4 *)(ppuVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
    FUN_140041b80(&local_f8,&local_138);
    if ((bVar6) && ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_168);
    }
    if ((!bVar6) && ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_148);
    }
    local_d8 = 0x7a;
    uStack_15c = 0;
    local_168 = (undefined1 *)0x4066800000000000;
    FUN_1400462a0(&local_168,uVar4);
    if ((local_14c & 0xffffff) == 0) {
      uVar9 = (undefined4)local_158;
    }
    else {
      uVar9 = FUN_140e4b060(&local_158);
    }
    local_118 = (undefined1 *)FUN_140e78d00(uVar9);
    local_10c = 0;
    FUN_140042560(&local_118,&local_168);
    uStack_12c = local_10c;
    uStack_130 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_138 = local_118;
    }
    else {
      FUN_1400419b0(&local_138,&local_118);
    }
    FUN_140046500(&local_138,uVar4);
    local_13c = 0;
    local_148 = (undefined1 *)0x4066800000000000;
    FUN_1400462a0(&local_148,&local_138);
    uVar9 = local_ec;
    local_fc = local_ec;
    local_100 = local_f0;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_108 = local_f8;
    }
    else {
      FUN_1400419b0(&local_108,&local_f8);
    }
    FUN_140042560(&local_108,&local_148);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
      local_128 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_128,puVar2);
    }
    FUN_1400460e0(&local_128,&local_108);
    if (&local_128 != param_3) {
      local_88 = (undefined4)local_128;
      uStack_84 = local_128._4_4_;
      uStack_80 = uStack_120;
      uStack_7c = uStack_11c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_88);
    }
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_c0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

