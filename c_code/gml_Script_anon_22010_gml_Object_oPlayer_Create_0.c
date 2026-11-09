// gml_Script_anon_22010_gml_Object_oPlayer_Create_0 @ 0x140c08eb0

undefined8 *
gml_Script_anon_22010_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined8 *local_60;
  undefined8 *local_58;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_a0 = "gml_Script_anon@19780@gml_Object_oPlayer_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x3d5;
  FUN_140041df0(local_48,param_4,3,param_5);
  _eh_vector_constructor_iterator_(&local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x3d5;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_40[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_98 = 0x3d5;
    if ((int)local_48[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_40[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x3ff0000000000000;
  }
  if ((int)local_48[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_40[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_48[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_40[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x4059000000000000;
  }
  local_98 = 0x3d6;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ef9c8);
  if ((int)local_48[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_40[2];
  }
  uVar2 = FUN_140e851f0(puVar3,puVar8,DAT_141955260,1);
  if (uVar2 < 0x80000000) {
    local_98 = 0x3d7;
    goto LAB_140c093d3;
  }
  local_98 = 0x3d8;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef9c8);
  if ((int)local_48[0] < 3) {
    puVar8 = &DAT_1419df7b0;
LAB_140c090e7:
    local_c8 = *puVar8;
    uStack_c0 = *(undefined4 *)(puVar8 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_c8);
  }
  else {
    puVar8 = (undefined8 *)local_40[2];
    if (puVar8 != &local_90) goto LAB_140c090e7;
  }
  local_60 = &local_90;
  if ((int)local_48[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_40;
  }
  uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_c8,puVar3);
  }
  FUN_1400460e0(&local_c8,puVar8);
  local_b8 = (undefined4)local_c8;
  uStack_b4 = local_c8._4_4_;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  FUN_140041b80(&local_80,&local_b8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_58 = &local_80;
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)FUN_140e79230(&local_d8,2,&local_60);
  if (puVar5 != puVar4) {
    local_b8 = *puVar5;
    uStack_b4 = puVar5[1];
    uStack_b0 = puVar5[2];
    uStack_ac = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x3d9;
  if ((int)local_48[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_40[1];
  }
  uStack_bc = 0;
  local_c8 = 0x3ff0000000000000;
  iVar1 = FUN_140e851f0(puVar3,&local_c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 != -2 && iVar1 < 0) {
    local_98 = 0x3da;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419ef9c8);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ef938);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef938);
    if (puVar3 != &local_90) {
      local_b8 = *(undefined4 *)puVar3;
      uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_b0 = *(undefined4 *)(puVar3 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      FUN_140041b80(&local_90,&local_b8);
    }
    local_60 = &local_90;
    if (((int)local_48[0] < 2) || (puVar6 = (undefined8 *)local_40[1], puVar6 != &local_80)) {
      local_b8 = *(undefined4 *)puVar6;
      uStack_b4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_b0 = *(undefined4 *)(puVar6 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      FUN_140041b80(&local_80,&local_b8);
    }
    local_58 = &local_80;
    FUN_140e609c0(param_1);
    puVar5 = (undefined4 *)FUN_140e79230(&local_d8,2,&local_60);
    if (puVar5 != puVar4) {
      local_b8 = *puVar5;
      uStack_b4 = puVar5[1];
      uStack_b0 = puVar5[2];
      uStack_ac = puVar5[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_b8);
    }
    FUN_140e60910(1);
  }
LAB_140c093d3:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,3,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar6 = local_40;
    do {
      puVar3 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

