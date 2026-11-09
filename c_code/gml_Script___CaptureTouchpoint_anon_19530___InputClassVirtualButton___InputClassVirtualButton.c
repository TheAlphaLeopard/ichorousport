// gml_Script___CaptureTouchpoint_anon_19530___InputClassVirtualButton___InputClassVirtualButton @ 0x14005ff30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___CaptureTouchpoint_anon_19530___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_a0 = 
  "gml_Script_GetHistorySpeed@anon@17473@__InputClassVirtualButton@__InputClassVirtualButton";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x292;
  FUN_140041df0(local_48,param_4,1,param_5);
  _eh_vector_constructor_iterator_(&local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x292;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_40;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_98 = 0x292;
    if ((int)local_48[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_40;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x4024000000000000;
  }
  local_98 = 0x294;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_98 = 0x294;
    if (param_3 != &DAT_1419df7b0) {
      local_d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_d0 = DAT_1419df7b8;
      uStack_cc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_d8);
    }
    goto LAB_14006048d;
  }
  local_98 = 0x297;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe848);
  uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_c8,puVar4);
  }
  uStack_cc = 7;
  local_d8 = CONCAT44(local_d8._4_4_,1);
  FUN_1400462a0(&local_c8,&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = local_c8;
  uStack_d0 = uStack_c0;
  uStack_cc = uStack_bc;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_d8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_60 = &local_90;
  if ((int)local_48[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1400601e2:
    local_d8 = *puVar4;
    uStack_d0 = *(undefined4 *)(puVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_d8);
  }
  else {
    puVar4 = (undefined8 *)*local_40;
    if (puVar4 != &local_80) goto LAB_1400601e2;
  }
  local_58 = &local_80;
  local_d8 = CONCAT44(uRam00000001419df8b4,_DAT_1419df8b0);
  uStack_d0 = uRam00000001419df8b8;
  uStack_cc = uRam00000001419df8bc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_d8);
  local_50 = local_70;
  if ((int)local_48[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_40;
  }
  puVar5 = (undefined8 *)FUN_140e79230(&local_b8,3,&local_60);
  if (puVar5 != puVar4) {
    local_d8 = *puVar5;
    uStack_d0 = *(undefined4 *)(puVar5 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  local_98 = 0x298;
  if ((int)local_48[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_40;
  }
  uStack_cc = 0;
  local_d8 = 0;
  iVar2 = FUN_140e851f0(puVar4,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    local_98 = 0x298;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0;
    goto LAB_14006048d;
  }
  local_98 = 0x29a;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe128);
  if ((int)local_48[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14006038e:
    local_d8 = *puVar4;
    uStack_d0 = *(undefined4 *)(puVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_d8);
  }
  else {
    puVar4 = (undefined8 *)*local_40;
    if (puVar4 != &local_90) goto LAB_14006038e;
  }
  local_60 = &local_90;
  if (0 < (int)local_48[0]) {
    puVar7 = (undefined8 *)*local_40;
  }
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_b8,1,uVar3,&local_60);
  uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_c8,puVar4);
  }
  FUN_140046500(&local_c8,puVar7);
  if (&local_c8 != param_3) {
    local_d8 = local_c8;
    uStack_d0 = uStack_c0;
    uStack_cc = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
LAB_14006048d:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,3,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar7 = local_40;
    do {
      puVar4 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

