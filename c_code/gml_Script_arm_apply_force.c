// gml_Script_arm_apply_force @ 0x14021fc10

undefined8 *
gml_Script_arm_apply_force
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
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
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_a8;
  byte local_9c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  
  local_f0 = "gml_Script_arc";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 9;
  _eh_vector_constructor_iterator_(&local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 10;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[3];
  }
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar3;
  }
  else {
    uVar5 = FUN_140e4b060();
  }
  uVar1 = FUN_140e78ec0(uVar5,0,0x3ff0000000000000);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_e8 = 0xb;
  if (param_4 < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[3];
  }
  uStack_12c = 0;
  local_138 = 0x3fe0000000000000;
  local_128 = uVar1;
  iVar2 = FUN_140e851f0(puVar3,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 == -2 || 0 < iVar2) {
    local_e8 = 0x13;
    uStack_10c = 0;
    local_118 = 0x4000000000000000;
    FUN_140042560(&local_118,&local_128);
    uStack_12c = uStack_10c;
    uStack_130 = uStack_110;
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
      local_138 = local_118;
    }
    else {
      FUN_1400419b0(&local_138,&local_118);
    }
    uStack_13c = 7;
    local_148 = 1;
    FUN_1400462a0(&local_138,&local_148);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = (undefined4)local_138;
    uStack_144 = local_138._4_4_;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_e8 = 0x14;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    if (param_4 < 2) {
      puVar3 = &DAT_1419df7b0;
LAB_1402200f0:
      local_148 = *(undefined4 *)puVar3;
      uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_140 = *(undefined4 *)(puVar3 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_148);
    }
    else {
      puVar3 = (undefined8 *)param_5[1];
      if (puVar3 != &local_d8) goto LAB_1402200f0;
    }
    local_88 = &local_d8;
    if (param_4 < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_14022013b:
      local_148 = *(undefined4 *)puVar3;
      uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_140 = *(undefined4 *)(puVar3 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_148);
    }
    else {
      puVar3 = (undefined8 *)*param_5;
      if (puVar3 != &local_c8) goto LAB_14022013b;
    }
    local_80 = &local_c8;
    local_78 = &local_128;
    if (4 < param_4) {
      puVar4 = (undefined8 *)param_5[4];
    }
    uStack_12c = 0;
    local_138 = 0x3ff0000000000000;
    FUN_1400462a0(&local_138,puVar4);
    local_148 = (undefined4)local_138;
    uStack_144 = local_138._4_4_;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_148);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    goto LAB_1402201ef;
  }
  local_e8 = 0xd;
  uStack_10c = local_11c;
  uStack_110 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_118 = local_128;
  }
  else {
    FUN_1400419b0(&local_118,&local_128);
  }
  uStack_12c = 7;
  local_138 = CONCAT44(local_138._4_4_,2);
  FUN_140042560(&local_118,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_148 = (undefined4)local_118;
  uStack_144 = local_118._4_4_;
  uStack_140 = uStack_110;
  uStack_13c = uStack_10c;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_148);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_e8 = 0xe;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (param_4 < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_14021feb7:
    local_148 = *(undefined4 *)puVar3;
    uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_148);
  }
  else {
    puVar3 = (undefined8 *)param_5[2];
    if (puVar3 != &local_d8) goto LAB_14021feb7;
  }
  local_88 = &local_d8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_14021ff04:
    local_148 = *(undefined4 *)puVar3;
    uStack_144 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 != &local_c8) goto LAB_14021ff04;
  }
  local_80 = &local_c8;
  local_78 = &local_128;
  if ((param_4 < 5) || (puVar4 = (undefined8 *)param_5[4], puVar4 != &local_a8)) {
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_148);
  }
LAB_1402201ef:
  local_70 = &local_a8;
  puVar4 = (undefined8 *)gml_Script_is_solid(param_1,param_2,&local_108,4,&local_88);
  if (puVar4 != param_3) {
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_148);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

